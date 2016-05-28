<?php if ($view_mode == 'spotbox'): ?>
  <!-- node--os2web_base_news--spotbox.tpl.php -->
  <!-- Begin - spotbox -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-spotbox os2-node-spotbox-news os2-equal-height-element"<?php print $attributes; ?>>
    <div class="table">
      <div class="table-row">

        <!-- Begin - image -->
        <div class="table-cell os2-node-spotbox-news-primary-image-wrapper">

          <?php if (isset($content['field_os2web_base_field_lead_img'])): ?>
            <!-- Begin - primary image -->
            <div class="os2-node-spotbox-primary-image">
              <?php print render($content['field_os2web_base_field_lead_img']); ?>
            </div>
            <!-- End - primary image -->
          <?php endif; ?>

        </div>
        <!-- End - image -->

        <!-- Begin - content -->
        <div class="table-cell os2-node-spotbox-news-content-wrapper">

          <?php if ($title): ?>
            <!-- Begin - heading -->
            <div class="os2-node-spotbox-body-heading">
              <h3 class="os2-node-spotbox-body-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
            </div>
            <!-- End - heading -->
          <?php endif; ?>

          <?php if (isset($content['field_os2web_base_field_summary'])): ?>
            <!-- Begin - summary -->
            <div class="os2-node-spotbox-summary">
              <?php print render($content['field_os2web_base_field_summary']); ?>
            </div>
            <!-- End - summary -->
          <?php endif; ?>

        </div>
        <!-- End - content -->

      </div>
    </div>
  </article>
  <!-- End - spotbox -->

<?php endif; ?>
