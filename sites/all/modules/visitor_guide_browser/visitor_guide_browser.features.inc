<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function visitor_guide_browser_imagecache_default_presets() {
  $items = array(
    'image_logo' => array(
      'presetname' => 'image_logo',
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
    'visitor_guide_page_large' => array(
      'presetname' => 'visitor_guide_page_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '600',
            'height' => '900',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'visitor_guide_thumbnail' => array(
      'presetname' => 'visitor_guide_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '60',
            'height' => '160',
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
function visitor_guide_browser_node_info() {
  $items = array(
    'visitor_guide_pages' => array(
      'name' => t('Visitor Guide'),
      'module' => 'features',
      'description' => t('Visitor guide pages grouped by year.'),
      'has_title' => '1',
      'title_label' => t('Page Number'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function visitor_guide_browser_views_api() {
  return array(
    'api' => '2',
  );
}
