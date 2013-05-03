<?php
/**
 * @file
 * kg_layout.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kg_layout_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: menu-front-menu-links.
  $menus['menu-front-menu-links'] = array(
    'menu_name' => 'menu-front-menu-links',
    'title' => 'Front Menu Links',
    'description' => 'Links appearing on the front page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Front Menu Links');
  t('Links appearing on the front page.');
  t('Main menu');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');


  return $menus;
}
