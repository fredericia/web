<?php if ($view_mode == 'teaser'): ?>
  <!-- node--os2web_spotbox_box--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-node-spotbox-teaser os2-equal-height-element"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2web_spotbox_big_image'])): ?>
      <!-- Begin - image -->
      <div class="os2-node-teaser-image">
        <?php if (isset($spotbox_link['url'])): ?><a href="<?php print $spotbox_link['url']; ?>" title="<?php print $spotbox_link['title']; ?>" target="_new"><?php endif; ?>
          <?php print render($content['field_os2web_spotbox_big_image']); ?>
        <?php if (isset($spotbox_link['url'])): ?></a><?php endif; ?>
      </div>

      <!-- End - image -->
    <?php endif; ?>

    <?php if ($title): ?>
    <!-- Begin - heading -->
    <div class="os2-node-teaser-heading">
      <h3 class="os2-node-teaser-heading-title">
      <?php if (isset($spotbox_link['url'])): ?>
        <a href="<?php print $spotbox_link['url']; ?>" title="<?php print $spotbox_link['title']; ?>" target="_new"><?php print $spotbox_link['title']; ?></a>
      <?php endif; ?>
      </h3>
    </div>
    <!-- End - heading -->
    <?php endif; ?>

  </article>
  <!-- End - teaser -->

<?php endif; ?>
