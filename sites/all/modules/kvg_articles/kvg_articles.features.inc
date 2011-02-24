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
          'module' => 'imagecrop',
          'action' => 'imagecrop_javascript',
          'data' => array(
            'width' => '800',
            'height' => '360',
            'xoffset' => '',
            'yoffset' => '',
            'resizable' => 0,
            'aspect' => 'CROP',
            'disable_if_no_data' => 0,
          ),
        ),
      ),
    ),
    'front_page_small_articles' => array(
      'presetname' => 'front_page_small_articles',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecrop',
          'action' => 'imagecrop_javascript',
          'data' => array(
            'width' => '250',
            'height' => '120',
            'xoffset' => '',
            'yoffset' => '',
            'resizable' => 0,
            'aspect' => 'CROP',
            'disable_if_no_data' => 0,
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
function kvg_articles_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('<em>Articles</em> are for creating static pages of editorial content. It allows all basic editing, bolding, linking, that you would expect from a basic text editor. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
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
