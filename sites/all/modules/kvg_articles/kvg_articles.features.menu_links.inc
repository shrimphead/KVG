<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kvg_articles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-articles:visitor-guide
  $menu_links['menu-articles:visitor-guide'] = array(
    'menu_name' => 'menu-articles',
    'link_path' => 'visitor-guide',
    'router_path' => 'visitor-guide',
    'link_title' => 'Browse Visitor Guide',
    'options' => array(),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-front-menu-links:articles
  $menu_links['menu-front-menu-links:articles'] = array(
    'menu_name' => 'menu-front-menu-links',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'View Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-front-menu-links:directory/all
  $menu_links['menu-front-menu-links:directory/all'] = array(
    'menu_name' => 'menu-front-menu-links',
    'link_path' => 'directory/all',
    'router_path' => 'directory/%',
    'link_title' => 'Browse Directory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-front-menu-links:node/121
  $menu_links['menu-front-menu-links:node/121'] = array(
    'menu_name' => 'menu-front-menu-links',
    'link_path' => 'node/121',
    'router_path' => 'node/%',
    'link_title' => 'Submit Free Listing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-front-menu-links:node/320
  $menu_links['menu-front-menu-links:node/320'] = array(
    'menu_name' => 'menu-front-menu-links',
    'link_path' => 'node/320',
    'router_path' => 'node/%',
    'link_title' => 'Read Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse Directory');
  t('Browse Visitor Guide');
  t('Read Guide');
  t('Submit Free Listing');
  t('View Articles');


  return $menu_links;
}
