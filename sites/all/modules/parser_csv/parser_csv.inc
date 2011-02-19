<?php
// $Id: parser_csv.inc,v 1.2.2.7 2009/03/25 15:44:38 alexb Exp $

/**
 * @file
 *   Functions that are only used when parsing CSV.
 *   Functions in this file are specific to FeedAPI specific usage of CSV parsing,
 *   for plain CSV parsing functions, look at parser_csv_parser.inc.
 */

/**
 * Download file from URL to tmp directory.
 * @todo:
 *   Only download file if it's not already available locally and if it doesn't
 *   need to be refreshed. 
 * @param $url
 *   URL that points to the file that should be downloaded.
 * @param $filepath
 *   Local path that the file should be downloaded to.
 *   If not specified, function generates a random file path in temp directory.
 * @return 
 *   Path to local copy of file if successful.
 *   FALSE if not.
 */
function parser_csv_download($url, $filepath = NULL) {
  // Download file.
  if (function_exists('curl_init')) {
    // Create file path.
    if (empty($filepath)) {
      $filepath = file_directory_temp() .'/'. time() . basename($url);
    }
    // Open file.
    $tmp_file = fopen($filepath, 'w');
    // Set CURL options and download.
    $download = curl_init($url);
    curl_setopt($download, CURLOPT_FILE, $tmp_file);
    $result = curl_exec($download);
    fclose($tmp_file);
    if ($result) {
      return $filepath;
    }
    return FALSE;
  }
  else {
    drupal_set_message(t('CSV Parser requires PHP/curl.'), 'error');
    return FALSE;
  }
}

/**
 * Download unzip and load a zip file at the given URL.
 * @todo:
 *   Make sure that unzipped file name is unique.
 * @param $filepath
 *   path that points to a valid zip file.
 * @return 
 *   path to unzipped file.
 */
function parser_csv_unzip($filepath) {
  // Unzip it
  $command = 'unzip -o '. $filepath .' -d '. file_directory_temp() .' | grep inflating';
  $output = shell_exec($command);
  $strpos = strpos(trim($output), 'inflating: ');
  if ($strpos === 0) {
    return trim(substr($output, strpos($output, '/')));
  }
  return FALSE; 
}

/**
 * Parse CSV into a FeedAPI compatible $feed object.
 * 
 * @param $csv_string 
 *   String in CSV format.
 * 
 * @return $feed
 *   FeedAPI feed object.
 */
function _parser_csv_parse_feed($feed) {
  // Create FeedAPI feed object.
  $feed->title = t('CSV data from !url', array('!url' => $feed->url));
  $feed->description = '';
  $feed->options->link = $feed->url;
  $feed->items = array();

  // Download to a local directory.
  if (!$filepath = parser_csv_download($feed->url)) {
    drupal_set_message(t('Error downloading file.'), 'error');
    return FALSE;
  }

  // Unzip if necessary (zip and ziptest files).
  if (strpos(substr($filepath, strlen($filepath) - 4), '.zip') !== FALSE || strpos(substr($filepath, strlen($filepath) - 8), '.ziptest') !== FALSE) {
    if (!$filepath = parser_csv_unzip($filepath)) {
      drupal_set_message(t('Error unzipping file.'), 'error');
      return FALSE;
    }
  }

  // Parse.
  require_once(drupal_get_path('module', 'parser_csv') .'/parser_csv_parser.inc');
  $it = new ParserCSVIterator($filepath);
  $delimiter = empty($feed->settings['parsers']['parser_csv']['delimiter']) ? ',' : $feed->settings['parsers']['parser_csv']['delimiter'];
  $rows = parser_csv_parse($it, $delimiter);

  // We assume that first row is the header.
  if (count($rows) > 1) {
    $header = array_shift($rows);
    // Build items on feed.
    $timestamp = time();
    foreach ($rows as $row) {
      // Build feed item.
      $item = new stdClass();
      $item->title = t('No title');
      $item->description = '';
      $item->options = new stdClass();
      $item->options->timestamp = $timestamp;
      // Use hash of line for building a GUID.
      $item->options->guid = hash('md5', serialize($row));
      // Key header into row.
      $raw = array();
      foreach ($row as $k => $v) {
        $raw[$header[$k]] = $v;
      }
      $item->options->raw = $raw; 
      $feed->items[] = $item;
    }
  }
  return $feed;
}