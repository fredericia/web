<?php if ($view_mode == 'teaser'): ?>
  <!-- taxonomy-term--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> os2-taxonomy-term-teaser">
    <div class="table">
      <div class="table-row">

        <?php if (isset($content['field_os2web_base_field_logo'])): ?>
          <div class="table-cell os2-taxonomy-term-teaser-image-container">

          <!-- Begin - logo -->
          <div class="os2-taxonomy-term-teaser-body-logo">
            <?php print render($content['field_os2web_base_field_logo']); ?>
            </div>
            <!-- End - logo -->

          </div>
        <?php endif; ?>

        <div class="table-cell os2-taxonomy-term-teaser-body">

          <div class="os2-taxonomy-term-teaser-heading">
            <h2 class="os2-taxonomy-term-teaser-heading-title"><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
          </div>

        </div>
      </div>
    </div>
  </div>
  <!-- End - teaser -->

<?php endif; ?>
