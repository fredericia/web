<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - meetings full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <div class="os2-node-full-heading">
      <?php print render($title_prefix); ?>
      <h3<?php print $title_attributes; ?> class="os2-node-full-heading-title"><?php print $title; ?></h3>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body">
        <?php print render($content); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - meetings full node -->

<?php endif; ?>
