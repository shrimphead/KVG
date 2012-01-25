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
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Articles about the Kaslo area, history, events and culture.');


  return $menus;
}
