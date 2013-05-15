<?php
/**
 * @file
 * kg_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function kg_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'Front page layout';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-front-menu-links' => array(
          'module' => 'menu',
          'delta' => 'menu-front-menu-links',
          'region' => 'header',
          'weight' => '-9',
        ),
        'views-dd5fbe9aac0ece627d032e79fd327b5e' => array(
          'module' => 'views',
          'delta' => 'dd5fbe9aac0ece627d032e79fd327b5e',
          'region' => 'banner',
          'weight' => '-10',
        ),
        'views-highlighted_sections-block' => array(
          'module' => 'views',
          'delta' => 'highlighted_sections-block',
          'region' => 'featured-teaser-one',
          'weight' => '-10',
        ),
        'views-featured_article-block' => array(
          'module' => 'views',
          'delta' => 'featured_article-block',
          'region' => 'featured-teaser',
          'weight' => '-10',
        ),
        'views-highlighted_sections-block_1' => array(
          'module' => 'views',
          'delta' => 'highlighted_sections-block_1',
          'region' => 'featured-teaser-two',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-04b6fce622057da31b562c1ea3e16923' => array(
          'module' => 'views',
          'delta' => '04b6fce622057da31b562c1ea3e16923',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-articles' => array(
          'module' => 'menu',
          'delta' => 'menu-articles',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page layout');
  t('Page');
  $export['front_page'] = $context;

  return $export;
}
