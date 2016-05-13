<?php
/**
 * @file
 * fredericia_feedback_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fredericia_feedback_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access feedback form'.
  $permissions['access feedback form'] = array(
    'name' => 'access feedback form',
    'roles' => array(
      'Webmaster' => 'Webmaster',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'feedback',
  );

  // Exported permission: 'administer feedback'.
  $permissions['administer feedback'] = array(
    'name' => 'administer feedback',
    'roles' => array(),
    'module' => 'feedback',
  );

  // Exported permission: 'view feedback messages'.
  $permissions['view feedback messages'] = array(
    'name' => 'view feedback messages',
    'roles' => array(
      'Webmaster' => 'Webmaster',
    ),
    'module' => 'feedback',
  );

  return $permissions;
}
