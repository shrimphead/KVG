<?php
<<<<<<< HEAD
=======
// $Id: panels_layouts.inc,v 1.1.2.2 2010/06/22 23:42:22 merlinofchaos Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

$plugin = array(
  'schema' => 'panels_layout',
  'access' => 'administer panels layouts',

  'menu' => array(
    'menu prefix' => 'admin/build/panels',
    'menu item' => 'layouts',
    'menu title' => 'Layouts',
    'menu description' => 'Add, edit or delete custom content layouts.',
  ),

  'title singular' => t('layout'),
  'title singular proper' => t('Layout'),
  'title plural' => t('layouts'),
  'title plural proper' => t('Layouts'),

  'handler' => array(
    'class' => 'panels_layouts_ui',
    'parent' => 'ctools_export_ui',
  ),
);

