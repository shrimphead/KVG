<?php
// $Id: nitobe_utils.inc,v 1.1.2.2 2010/10/20 13:49:43 shannonlucas Exp $
/**
 * @file
 * Utility functions for the Nitobe theme.
 */

define('NITOBE_CACHE_HDR', 'nitobe.headers.list');
define('NITOBE_HEADER_PATH', (is_dir(path_to_theme() . '/headers') ? path_to_theme() : drupal_get_path('theme', 'nitobe')) . '/headers');
define('NITOBE_HEADER_IMG_MASK',
       '.+\.jpg$|.+\.JPG$|.+\.jpeg*|.+\.JPEG*|.+\.gif$|.+\.GIF$|.+\.png$|.+\.PNG$');

/**
 * Retrieves a list of header images.
 *
 * Scans the headers directory and generate a "pretty" name for each. Pretty
 * names are generated from the image's path within the headers directory using
 * these rules:
 * -# '/' is replaced with ' / '
 * -# '_' is replaced with ' '.
 * -# '.***' extension is removed.
 *
 * @param boolean $refresh
 *   If TRUE, reload the image list and flush the cached version.
 *
 * @return array
 *   A mapping of the headers' pretty names to their actual names.
 */
function _nitobe_get_header_list($refresh = FALSE) {
  // -- If caching is disabled, force a refresh.
  if (variable_get('cache', CACHE_DISABLED) == CACHE_DISABLED) {
    $refresh = TRUE;
  }

  $cached = cache_get(NITOBE_CACHE_HDR);
  $files  = (!empty($cached)) ? $cached->data : NULL;

  if (($files == NULL) OR ($refresh == TRUE)) {
    $files = file_scan_directory(NITOBE_HEADER_PATH,
                                 NITOBE_HEADER_IMG_MASK,
                                 array('.', '..', 'CVS', '.svn'));
    foreach ($files as $filename => $data) {
      $name = substr($filename, strlen(NITOBE_HEADER_PATH) + 1);
      $name = preg_replace('/\//', ' / ', $name);
      $name = preg_replace('/_/', ' ', $name);
      $name = preg_replace('/\.(\w{3,4}$)/', '', $name);

      $data->pretty_name = $name;
    }

    // -- Cache the list for a week.
    cache_set(NITOBE_CACHE_HDR, $files, 'cache', time() + 604800);
  }

  return $files;
}


/**
 * Generates the JavaScript for rotating the header image.
 *
 * @return string
 *   The JavaScript for rotating the header.
 */
function _nitobe_random_header_js() {
  global $base_url;

  $files = _nitobe_get_header_list();
  $names = array();

  foreach ($files as $file => $data) {
    $names[] = $base_url . '/' . $file;
  }

  $name_js = drupal_to_js($names);

  $js = <<<EOJS
<script type="text/javascript">
  $(document).ready(function() {
    var names = {$name_js};
    $('#masthead').css('background-image', 'url(' + names[Math.floor(Math.random() * names.length)] + ')');
  });
</script><noscript></noscript>
EOJS;

  return $js;
}


/**
 * Generates the CSS to place inline to choose the header background image.
 *
 * @param string $filename
 *   The header image filename, relative to the theme.
 *
 * @return string
 *   The CSS to add to the header.
 */
function _nitobe_fixed_header_css($filename) {
  global $base_url;

  $url    = $base_url . '/' . $filename;
  $output = '<style type="text/css">#masthead{background-image:url(%s);}</style>';

  return sprintf($output, $url);
}
