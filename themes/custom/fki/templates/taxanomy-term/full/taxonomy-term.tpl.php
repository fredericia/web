<?php if ($view_mode == 'full'): ?>
  <!-- taxonomy-term.tpl.php -->
  <!-- Begin - full -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> os2-taxonomy-term-full">
    <div class="table">
      <div class="table-row">
        <div class="table-cell os2-taxonomy-term-full-body">

          <!-- Begin - heading -->
          <div class="os2-taxonomy-term-full-body-heading">
            <h2 class="os2-taxonomy-term-full-body-heading-title"><?php print $term_name; ?></h2>
          </div>
          <!-- End - heading -->

          <?php if (isset($content['description'])): ?>
            <!-- Begin - description -->
            <div class="os2-taxonomy-term-full-body-description">
              <?php print render($content['description']); ?>
            </div>
            <!-- End - description -->
          <?php endif; ?>

        </div>

        <?php if (isset($field_taxonomy_term_top_level_icon)): ?>
          <div class="table-cell os2-taxonomy-term-full-icon">

            <!-- Begin - icon -->
            <?php print render($field_taxonomy_term_top_level_icon); ?>
            <!-- End - icon -->

          </div>
        <?php endif ?>

      </div>
    </div>

  </div>
  <!-- End - full -->

<?php endif; ?>
