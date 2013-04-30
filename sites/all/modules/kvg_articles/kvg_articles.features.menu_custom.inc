<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function kvg_articles_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-articles
  $menus['menu-articles'] = array(
    'menu_name' => 'menu-articles',
    'title' => 'Articles',
    'description' => 'Articles about the Kaslo area, history, events and culture.',
  );
  // Exported menu: menu-front-menu-links
  $menus['menu-front-menu-links'] = array(
    'menu_name' => 'menu-front-menu-links',
    'title' => 'Front Menu Links',
    'description' => 'Links appearing on the front page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Articles about the Kaslo area, history, events and culture.');
  t('Front Menu Links');
  t('Links appearing on the front page.');


  return $menus;
}
