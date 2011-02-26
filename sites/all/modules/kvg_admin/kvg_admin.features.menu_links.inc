<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kvg_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-edit-menu:articles/admin
  $menu_links['menu-edit-menu:articles/admin'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'articles/admin',
    'router_path' => 'articles/admin',
    'link_title' => 'Edit Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-edit-menu:directory/admin
  $menu_links['menu-edit-menu:directory/admin'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'directory/admin',
    'router_path' => 'directory/%',
    'link_title' => 'Edit Content',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-edit-menu:node/add/page
  $menu_links['menu-edit-menu:node/add/page'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add/page',
    'router_path' => 'node/add',
    'link_title' => 'Create Article Item',
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
  t('Create Article Item');
  t('Create Directory Item');
  t('Edit Articles');
  t('Edit Content');


  return $menu_links;
}
