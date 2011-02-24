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
