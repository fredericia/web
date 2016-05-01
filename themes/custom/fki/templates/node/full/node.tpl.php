<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
    hide($content['field_os2web_base_field_lead_img']);

    if (isset($content['field_tags'])) {
      hide($content['field_tags']);
    }

    if (isset($content['field_os2web_base_field_image'])) {
      hide($content['field_os2web_base_field_image']);
    }
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2web_base_field_image'])): ?>
      <!-- Begin - image -->
      <div class="os2-node-full-image">
        <?php print render($content['field_os2web_base_field_image']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <div class="os2-node-full-heading">
      <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?> class="os2-node-full-heading-title"><?php print $title; ?></h1>
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
