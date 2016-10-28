<?php
/**
 * @file
 * fredericia_footer.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function fredericia_footer_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = 'Footer';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = '2-columns-with-2-rows';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left-content-1' => NULL,
      'right-content-1' => NULL,
      'left-content-2' => NULL,
      'right-content-2' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cbebd942-c859-4609-ab08-65c1862778a2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e71c5997-b19c-4dc9-9031-707d5f932c3c';
    $pane->panel = 'left-content-1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Åbningstider på Rådhuset og Jobcentret',
      'body' => '<p>Mandag - onsdag kl. 10.00 - 14.00<br />
Torsdag kl. 10.00 - 17.00<br />
Fredag kl. 10.00 - 14.00</p>

<p>&nbsp;</p>

<p><a href="node/1385">Faste lukkedage (helligdage)</a></p>

<p>&nbsp;</p>

<p>&nbsp;</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-opening-hours',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e71c5997-b19c-4dc9-9031-707d5f932c3c';
    $display->content['new-e71c5997-b19c-4dc9-9031-707d5f932c3c'] = $pane;
    $display->panels['left-content-1'][0] = 'new-e71c5997-b19c-4dc9-9031-707d5f932c3c';
    $pane = new stdClass();
    $pane->pid = 'new-53d808ab-6cad-442e-857f-f0f0ca5a6b95';
    $pane->panel = 'left-content-1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Fredericia Kommune',
      'body' => '<p>Gothersgade 20</p>

<p>7000 Fredericia</p>

<p>Tlf.: 7210 7000</p>

<p>kommunen@fredericia.dk</p>

<p>&nbsp;</p>

<p><a href="/node/1199">Send sikker post</a></p>

<p><a href="/node/1201">Om hjemmesiden</a></p>

<p>&nbsp;</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53d808ab-6cad-442e-857f-f0f0ca5a6b95';
    $display->content['new-53d808ab-6cad-442e-857f-f0f0ca5a6b95'] = $pane;
    $display->panels['left-content-1'][1] = 'new-53d808ab-6cad-442e-857f-f0f0ca5a6b95';
    $pane = new stdClass();
    $pane->pid = 'new-0d55e856-b212-4c45-ae4e-d7b8e2c74f66';
    $pane->panel = 'left-content-2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Tlf. 7210 7000</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-hotline',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0d55e856-b212-4c45-ae4e-d7b8e2c74f66';
    $display->content['new-0d55e856-b212-4c45-ae4e-d7b8e2c74f66'] = $pane;
    $display->panels['left-content-2'][0] = 'new-0d55e856-b212-4c45-ae4e-d7b8e2c74f66';
    $pane = new stdClass();
    $pane->pid = 'new-29929d9d-76dd-4b47-8976-477ce2346469';
    $pane->panel = 'right-content-1';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Links',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '29929d9d-76dd-4b47-8976-477ce2346469';
    $display->content['new-29929d9d-76dd-4b47-8976-477ce2346469'] = $pane;
    $display->panels['right-content-1'][0] = 'new-29929d9d-76dd-4b47-8976-477ce2346469';
    $pane = new stdClass();
    $pane->pid = 'new-b4ac8b61-2098-4670-8bd9-1b5706a8bb72';
    $pane->panel = 'right-content-2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<ul class="footer-social-links">
	<li>
		<span class="heading-h3">Mød os på</span>
	</li>
	<li>
		<a href="#"><span class="icon fa fa-facebook"></span></a>
	</li>
	<li>
		<a href="#"><span class="icon fa fa-linkedin"></span></a>
	</li>
	<li>
		<a href="#"><span class="icon fa fa-youtube"></span></a>
	</li>
     
</ul>
',
      'format' => 'blokindhold',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
      'template_suggestion' => 'plain',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4ac8b61-2098-4670-8bd9-1b5706a8bb72';
    $display->content['new-b4ac8b61-2098-4670-8bd9-1b5706a8bb72'] = $pane;
    $display->panels['right-content-2'][0] = 'new-b4ac8b61-2098-4670-8bd9-1b5706a8bb72';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
