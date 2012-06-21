<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function project_discussion_user_default_permissions() {
  $permissions = array();

  // Exported permission: access projects
  $permissions['access projects'] = array(
    'name' => 'access projects',
    'roles' => array(),
  );

  return $permissions;
}
