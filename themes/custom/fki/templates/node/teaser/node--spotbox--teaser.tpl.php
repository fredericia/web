<?php if ($view_mode == 'teaser'): ?>
  <!-- node--spotbox--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-spotbox-teaser"<?php print $attributes; ?>>

    <?php if (isset($content['field_spotbox_image'])): ?>
      <!-- Begin - image -->
      <div class="os2-node-teaser-image">
        <?php if (isset($spotbox_link['url'])): ?><a href="<?php print $spotbox_link['url']; ?>" title="<?php print $spotbox_link['title']; ?>" target="_new"></a><?php endif; ?>
          <?php print render($content['field_spotbox_image']); ?>
        <?php if (isset($spotbox_link['url'])): ?></a><?php endif; ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <?php if ($title): ?>
    <!-- Begin - heading -->
    <div class="os2-node-teaser-heading">
      <h3 class="os2-node-teaser-heading-title">
      <?php if (isset($spotbox_link['url'])): ?>
        <a href="<?php print $spotbox_link['url']; ?>" title="<?php print $spotbox_link['title']; ?>" target="_new"><?php print $title; ?></a>
      <?php else: ?>
        <?php print $title; ?>
      <?php endif; ?>
      </h3>
    </div>
    <!-- End - heading -->
    <?php endif; ?>

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">

      <?php if (isset($content['field_spotbox_text'])): ?>
        <!-- Begin - text -->
        <div class="os2-node-teaser-body-text">
          <?php print render($content['field_spotbox_text']); ?>
        </div>
        <!-- End - text -->
      <?php endif; ?>

        <!-- Begin - link -->
        <div class="os2-node-teaser-body-link">

        </div>
        <!-- End - link -->

    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
