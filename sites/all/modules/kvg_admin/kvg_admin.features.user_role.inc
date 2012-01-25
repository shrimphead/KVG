<?php

/**
 * Implementation of hook_user_default_roles().
 */
function kvg_admin_user_default_roles() {
  $roles = array();

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: authenticated user plus
  $roles['authenticated user plus'] = array(
    'name' => 'authenticated user plus',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
