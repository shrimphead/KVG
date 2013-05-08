<?php
/**
 * @file
 * kg_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kg_admin_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 0,
  );

  // Exported role: authenticated user plus.
  $roles['authenticated user plus'] = array(
    'name' => 'authenticated user plus',
    'weight' => 0,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 0,
  );

  return $roles;
}
