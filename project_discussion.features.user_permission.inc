<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function project_discussion_user_default_permissions() {
  $permissions = array();

  // Exported permission: create project_discussion content
  $permissions['create project_discussion content'] = array(
    'name' => 'create project_discussion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own project_discussion content
  $permissions['delete own project_discussion content'] = array(
    'name' => 'delete own project_discussion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own project_discussion content
  $permissions['edit own project_discussion content'] = array(
    'name' => 'edit own project_discussion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
