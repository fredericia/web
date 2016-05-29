<?php if ($view_mode == 'spotbox'): ?>
  <!-- node--os2web_spotbox_box--spotbox.tpl.php -->
  <!-- Begin - spotbox -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-spotbox os2-node-spotbox-spotbox os2-equal-height-element"<?php print $attributes; ?>>

    <?php if ($title): ?>
    <!-- Begin - heading -->
    <div class="os2-node-spotbox-heading">
      <h3 class="os2-node-spotbox-heading-title">
      <?php if (isset($spotbox_link['url'])): ?>
        <a href="<?php print $spotbox_link['url']; ?>" title="<?php print $spotbox_link['title']; ?>"><?php print $spotbox_link['title']; ?></a>
      <?php endif; ?>
      </h3>
    </div>
    <!-- End - heading -->
    <?php endif; ?>

    <?php if (isset($content['field_os2web_base_field_ext_link']) && $spotbox_with_link == TRUE): ?>
      <div class="os2-node-spotbox-body">

        <!-- Begin - links -->
        <div class="os2-node-spotbox-links">
          <?php print render($content['field_os2web_base_field_ext_link']); ?>
        </div>
        <!-- End - links -->

      </div>
    <?php endif; ?>

  </article>
  <!-- End - spotbox -->

<?php endif; ?>
