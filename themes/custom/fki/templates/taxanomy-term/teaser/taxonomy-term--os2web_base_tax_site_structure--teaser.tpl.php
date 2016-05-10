<?php if ($view_mode == 'teaser'): ?>
  <!-- taxonomy-term--os2web_base_tax_site_structure--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> os2-taxonomy-term-teaser os2-taxonomy-term-teaser-structure">

    <div class="os2-taxonomy-term-teaser-body">

      <?php if (isset($content['field_os2web_base_field_logo'])): ?>

        <!-- Begin - logo -->
        <div class="os2-taxonomy-term-teaser-body-logo">
          <?php print render($content['field_os2web_base_field_logo']); ?>
        </div>
        <!-- End - logo -->

      <?php endif; ?>

      <!-- Begin - heading -->
      <div class="os2-taxonomy-term-teaser-body-heading">
        <h2 class="os2-taxonomy-term-teaser-body-heading-title"><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
      </div>
      <!-- End - heading -->

      <?php if (isset($content['field_os2web_base_field_selfserv'])): ?>
        <!-- Begin - links -->
        <div class="os2-taxonomy-term-teaser-body-links">
          <?php print render($content['field_os2web_base_field_selfserv']); ?>
        </div>
        <!-- End - links -->
      <?php endif; ?>

    </div>
  </div>
  <!-- End - teaser -->

<?php endif; ?>
