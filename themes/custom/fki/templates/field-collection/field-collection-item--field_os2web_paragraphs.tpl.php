<?php if ($view_mode == 'full'): ?>
  <!-- field-collection-item--field_os2web_paragraphs.tpl.php
  <!-- Begin - accordion -->
  <div class="os2-field-collection-item os2-accordion <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2web_paragraph_title'])): ?>
      <!-- Begin - heading -->
      <div class="os2-accordion-heading">
        <div class="os2-accordion-heading-title">
          <?php print render($content['field_os2web_paragraph_title']); ?>
        </div>
      </div>
      <!-- End - heading -->
    <?php endif; ?>

    <?php if (isset($content['field_os2web_paragraph_text'])): ?>
      <!-- Begin - body -->
      <div class="os2-accordion-body">
        <?php print render($content['field_os2web_paragraph_text']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - - accordion -->

<?php endif; ?>
