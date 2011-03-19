<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kvg_articles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-articles:node/151
  $menu_links['menu-articles:node/151'] = array(
    'menu_name' => 'menu-articles',
    'link_path' => 'node/151',
    'router_path' => 'node/%',
    'link_title' => 'Kaslo History',
    'options' => array(
      'attributes' => array(
        'title' => 'Kaslo History',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-articles:node/152
  $menu_links['menu-articles:node/152'] = array(
    'menu_name' => 'menu-articles',
    'link_path' => 'node/152',
    'router_path' => 'node/%',
    'link_title' => 'Kaslo',
    'options' => array(
      'attributes' => array(
        'title' => 'Kaslo',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-articles:visitor-guide
  $menu_links['menu-articles:visitor-guide'] = array(
    'menu_name' => 'menu-articles',
    'link_path' => 'visitor-guide',
    'router_path' => 'visitor-guide',
    'link_title' => 'Browse Visitor Guide',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Visitor Guide');
  t('Kaslo');
  t('Kaslo History');


  return $menu_links;
}
