<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kvg_articles_imagecache_default_presets() {
  $items = array(
    'article_horizontal' => array(
      'presetname' => 'article_horizontal',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '780',
            'height' => '360',
          ),
        ),
      ),
    ),
    'article_vertical' => array(
      'presetname' => 'article_vertical',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '350',
            'height' => '850',
          ),
        ),
      ),
    ),
    'front_page_lead_article' => array(
      'presetname' => 'front_page_lead_article',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '940',
            'height' => '360',
          ),
        ),
      ),
    ),
    'front_page_small_articles' => array(
      'presetname' => 'front_page_small_articles',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '300',
            'height' => '120',
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
function kvg_articles_views_api() {
  return array(
    'api' => '2',
  );
}
