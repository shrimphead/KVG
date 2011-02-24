<?php

/**
 * Implementation of hook_user_default_roles().
 */
function kvg_admin_user_default_roles() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
