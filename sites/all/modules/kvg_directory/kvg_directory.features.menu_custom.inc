<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function kvg_directory_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-directory
  $menus['menu-directory'] = array(
    'menu_name' => 'menu-directory',
    'title' => 'Directory',
    'description' => 'Directory of Kaslo and area businesses, artists, events, and restaurants.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Directory');
  t('Directory of Kaslo and area businesses, artists, events, and restaurants.');


  return $menus;
}
