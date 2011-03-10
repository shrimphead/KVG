<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kvg_directory_imagecache_default_presets() {
  $items = array(
    'box' => array(
      'presetname' => 'box',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
          ),
        ),
      ),
    ),
    'directory_ad' => array(
      'presetname' => 'directory_ad',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '350',
            'height' => '450',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'directory_image' => array(
      'presetname' => 'directory_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250',
            'height' => '250',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function kvg_directory_node_info() {
  $items = array(
    'directory' => array(
      'name' => t('Directory'),
      'module' => 'features',
      'description' => t('Kaslo Visitor Guide Directory Listings'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kvg_directory_views_api() {
  return array(
    'api' => '2',
  );
}
