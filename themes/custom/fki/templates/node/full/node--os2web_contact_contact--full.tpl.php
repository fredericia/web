<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);

    if (isset($content['title'])) {
      hide($content['title']);
    }

  ?>
  <!-- node--os2web_contact_contact.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <div class="os2-node-full-heading">
      <?php print render($title_prefix); ?>
      <h3<?php print $title_attributes; ?> class="os2-node-full-title"><?php print render($content['field_os2web_contact_field_dept']); ?></h3>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content['field_os2web_base_field_summary'])): ?>
      <!-- Begin - intro -->
      <div class="os2-node-full-intro">
        <?php print render($content['field_os2web_base_field_summary']); ?>
      </div>
      <!-- End - intro -->
    <?php endif; ?>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body">
        <?php print render($content); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
