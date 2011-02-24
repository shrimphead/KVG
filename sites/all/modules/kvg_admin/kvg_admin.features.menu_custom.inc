<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function kvg_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-edit-menu
  $menus['menu-edit-menu'] = array(
    'menu_name' => 'menu-edit-menu',
    'title' => 'Edit Menu',
    'description' => 'Essential links for directory editing and creation.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Edit Menu');
  t('Essential links for directory editing and creation.');


  return $menus;
}
