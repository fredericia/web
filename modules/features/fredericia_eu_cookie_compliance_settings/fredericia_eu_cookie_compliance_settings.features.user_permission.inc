<?php
/**
 * @file
 * fredericia_eu_cookie_compliance_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fredericia_eu_cookie_compliance_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
