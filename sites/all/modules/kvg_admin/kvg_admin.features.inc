<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kvg_admin_imagecache_default_presets() {
  $items = array(
    'admin_thumbnail' => array(
      'presetname' => 'admin_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '40',
            'height' => '35',
          ),
        ),
      ),
    ),
    'front_page_logo' => array(
      'presetname' => 'front_page_logo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '110',
            'height' => '110',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'result_image_scale' => array(
      'presetname' => 'result_image_scale',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '220',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kvg_admin_views_api() {
  return array(
    'api' => '2',
  );
}
