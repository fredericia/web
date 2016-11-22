<?php if ($view_mode == 'teaser'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
    hide($content['field_os2web_contact_field_dept']);

    if (isset($content['title'])) {
      hide($content['title']);
    }

  ?>
  <!-- node--os2web_contact_contact--teaser.tpl.php -->
  <!-- Begin - teaser node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

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
  <!-- End - teaser node -->

<?php endif; ?>
