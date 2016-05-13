<?php
/**
 * @file
 * fredericia_eu_cookie_compliance_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fredericia_eu_cookie_compliance_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_cookie_lifetime';
  $strongarm->value = '100';
  $export['eu_cookie_compliance_cookie_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 1,
    'popup_agree_button_message' => 'Luk',
    'popup_disagree_button_message' => 'Læs mere om cookies',
    'popup_info' => array(
      'value' => '<h2>
	Vi samler statistik ved hjælp af cookies</h2>
<p>By clicking any link on this page you are giving your consent for us to set cookies.</p>
',
      'format' => 'full_html',
    ),
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Skjul',
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => 'plain_text',
    ),
    'popup_link' => 'node/3',
    'popup_link_new_window' => 1,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => 'ffffff',
    'popup_text_hex' => '000000',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => 'admin/*',
  );
  $export['eu_cookie_compliance_da'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  return $export;
}
