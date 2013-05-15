<?php
/**
 * @file
 * kg_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kg_directory_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kg_directory_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kg_directory_node_info() {
  $items = array(
    'directory' => array(
      'name' => t('Directory'),
      'base' => 'node_content',
      'description' => t('Kaslo Visitor Guide Directory Listings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}