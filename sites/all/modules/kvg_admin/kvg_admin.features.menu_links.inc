<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kvg_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-edit-menu:node/add/directory
  $menu_links['menu-edit-menu:node/add/directory'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add/directory',
    'router_path' => 'node/add/directory',
    'link_title' => 'Create Directory Item',
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
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-edit-menu:node/add/page
  $menu_links['menu-edit-menu:node/add/page'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add',
    'link_title' => 'Create Article',
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
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create Article');
  t('Create Directory Item');


  return $menu_links;
}
