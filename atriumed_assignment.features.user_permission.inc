<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atriumed_assignment_user_default_permissions() {
  $permissions = array();

  // Exported permission: create assignment content
  $permissions['create assignment content'] = array(
    'name' => 'create assignment content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: create submission content
  $permissions['create submission content'] = array(
    'name' => 'create submission content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any assignment content
  $permissions['delete any assignment content'] = array(
    'name' => 'delete any assignment content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any submission content
  $permissions['delete any submission content'] = array(
    'name' => 'delete any submission content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own assignment content
  $permissions['delete own assignment content'] = array(
    'name' => 'delete own assignment content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own submission content
  $permissions['delete own submission content'] = array(
    'name' => 'delete own submission content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any assignment content
  $permissions['edit any assignment content'] = array(
    'name' => 'edit any assignment content',
    'roles' => array(),
  );

  // Exported permission: edit any submission content
  $permissions['edit any submission content'] = array(
    'name' => 'edit any submission content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_assign_ref
  $permissions['edit field_assign_ref'] = array(
    'name' => 'edit field_assign_ref',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_date_due
  $permissions['edit field_date_due'] = array(
    'name' => 'edit field_date_due',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own assignment content
  $permissions['edit own assignment content'] = array(
    'name' => 'edit own assignment content',
    'roles' => array(
      '0' => 'teacher',
    ),
  );

  // Exported permission: edit own submission content
  $permissions['edit own submission content'] = array(
    'name' => 'edit own submission content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_assign_ref
  $permissions['view field_assign_ref'] = array(
    'name' => 'view field_assign_ref',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_date_due
  $permissions['view field_date_due'] = array(
    'name' => 'view field_date_due',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
