<?php if ($view_mode == 'spotbox'): ?>
  <!-- node--spotbox.tpl.php -->
  <!-- Begin - spotbox -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-spotbox os2-box os2-box-small-spacing"<?php print $attributes; ?>>
    <div class="table">
      <div class="table-row">

        <?php if (isset($content['field_os2intra_image'])): ?>
          <div class="table-cell os2-node-spotbox-image-container">

            <!-- Begin - image -->
            <div class="os2-node-spotbox-image">
              <?php print render($content['field_os2intra_image']); ?>
            </div>
            <!-- End - image -->

          </div>
        <?php endif; ?>

        <?php if (isset($content['field_os2intra_images'])): ?>
          <div class="table-cell os2-node-spotbox-image-container">

            <!-- Begin - images -->
            <div class="os2-node-spotbox-image">
              <?php print render($content['field_os2intra_images']); ?>
            </div>
            <!-- End - images -->

          </div>
        <?php endif; ?>

        <div class="table-cell">

          <?php if (isset($author_full_name) and $updated_at_short): ?>
            <!-- Begin - entity info -->
            <ul class="os2-node-spotbox-info os2-entity-info">
              <li><?php print l($author_full_name, 'user/' . $node->uid); ?></li>
              <li><span><?php print t('Sidst opdateret d.'); ?> <?php print $updated_at_short; ?></span></li>
            </ul>
            <!-- End - entity info -->
          <?php endif ?>

          <!-- Begin - heading -->
          <div class="os2-node-spotbox-heading">
            <h3 class="os2-node-spotbox-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
          </div>
          <!-- End - heading -->

          <!-- Begin - body -->
          <div class="os2-node-spotbox-body">

            <?php if (isset($content['body'])): ?>
              <!-- Begin - body -->
              <div class="os2-node-spotbox-body-content">
                <?php print render($content['body']); ?>
              </div>
              <!-- End - body -->
            <?php endif; ?>

          </div>
          <!-- End - body -->

        </div>
      </div>
    </div>

  </article>
  <!-- End - spotbox -->

<?php endif; ?>
