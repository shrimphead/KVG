<?php
/**
 * @file
 * kg_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kg_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: admin.
  $menus['admin'] = array(
    'menu_name' => 'admin',
    'title' => 'Admin',
    'description' => 'Administrative links.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('Administrative links.');


  return $menus;
}
