<?php if ($view_mode == 'includeable'): ?>
  <!-- node--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-includeable"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-includeable-heading">
      <span class="os2-node-includeable-heading-date"><?php print $created_at_seperated['day']['integer']; ?>/<?php print $created_at_seperated['month']['integer']; ?></span>
      <a href="<?php print $node_url; ?>" class="os2-node-includeable-heading-title"><?php print $title_shortened; ?></a>

      <?php if (isset($author_full_name)): ?>
      <span class="os2-node-includeable-heading-author">
        <span class="os2-node-includeable-heading-author-intro"><?php print t('written by:'); ?></span>
        <?php print l($author_full_name, 'user/' . $node->uid, array('attributes' => array('class' => 'os2-node-includeable-heading-author-link'))); ?>
      </span>
      <?php endif ?>

    </div>
    <!-- End - heading -->

  </div>
  <!-- End - includeable -->

<?php endif; ?>
