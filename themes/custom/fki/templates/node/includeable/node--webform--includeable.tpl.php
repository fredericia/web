<?php if ($view_mode == 'includeable'): ?>
  <!-- node--webform--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-includeable os2-node-includeable-webform"<?php print $attributes; ?>>

    <?php if (isset($content['webform'])): ?>
      <!-- Begin - body -->
      <div class="os2-node-includeable-body">
        <?php print render($content['webform']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - includeable -->

<?php endif; ?>
