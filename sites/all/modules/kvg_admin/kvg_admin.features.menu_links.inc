<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function kvg_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-edit-menu:admin/kvg/
  $menu_links['menu-edit-menu:admin/kvg/'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'admin/kvg/',
    'router_path' => 'admin/kvg',
    'link_title' => 'Edit All Entries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-edit-menu:admin/kvg/articles
  $menu_links['menu-edit-menu:admin/kvg/articles'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'admin/kvg/articles',
    'router_path' => 'admin/kvg/articles',
    'link_title' => 'Edit Articles',
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
    'parent_path' => 'admin/kvg/',
  );
  // Exported menu link: menu-edit-menu:admin/kvg/directory
  $menu_links['menu-edit-menu:admin/kvg/directory'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'admin/kvg/directory',
    'router_path' => 'admin/kvg/directory',
    'link_title' => 'Edit Directory',
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
    'parent_path' => 'admin/kvg/',
  );
  // Exported menu link: menu-edit-menu:logout
  $menu_links['menu-edit-menu:logout'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Logout',
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
    'weight' => '0',
  );
  // Exported menu link: menu-edit-menu:node/add
  $menu_links['menu-edit-menu:node/add'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Create Content',
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
    'parent_path' => 'node/add/',
  );
  // Exported menu link: menu-edit-menu:node/add/
  $menu_links['menu-edit-menu:node/add/'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add/',
    'router_path' => 'node/add',
    'link_title' => 'Create New Entry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: menu-edit-menu:node/add/article
  $menu_links['menu-edit-menu:node/add/article'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
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
    'parent_path' => 'node/add/',
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
    'weight' => '-50',
    'parent_path' => 'node/add/',
  );
  // Exported menu link: menu-edit-menu:node/add/visitor-guide-pages
  $menu_links['menu-edit-menu:node/add/visitor-guide-pages'] = array(
    'menu_name' => 'menu-edit-menu',
    'link_path' => 'node/add/visitor-guide-pages',
    'router_path' => 'node/add/visitor-guide-pages',
    'link_title' => 'Create Browser Page',
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
    'parent_path' => 'node/add/',
  );
  // Exported menu link: menu-submit-links:node/121
  $menu_links['menu-submit-links:node/121'] = array(
    'menu_name' => 'menu-submit-links',
    'link_path' => 'node/121',
    'router_path' => 'node/%',
    'link_title' => 'Submit Your Free Listing',
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
    'weight' => '-45',
  );
  // Exported menu link: menu-submit-links:node/317
  $menu_links['menu-submit-links:node/317'] = array(
    'menu_name' => 'menu-submit-links',
    'link_path' => 'node/317',
    'router_path' => 'node/%',
    'link_title' => 'Enter Photo Contest',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create Article');
  t('Create Browser Page');
  t('Create Content');
  t('Create Directory Item');
  t('Create New Entry');
  t('Edit All Entries');
  t('Edit Articles');
  t('Edit Directory');
  t('Enter Photo Contest');
  t('Logout');
  t('Submit Your Free Listing');


  return $menu_links;
}
