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

      <!-- Begin - body -->
      <div class="os2-accordion-body">

        <?php if (isset($content['field_os2web_paragraph_text'])): ?>
          <!-- Begin - text -->
          <div class="os2-accordion-body-text">
            <?php print render($content['field_os2web_paragraph_text']); ?>
          </div>
          <!-- End - text -->
        <?php endif; ?>

        <?php if (isset($content['field_os2web_paragraph_ref'])): ?>
          <!-- Begin - paragraph reference -->
          <div class="os2-accordion-paragraph-reference">
            <?php print render($content['field_os2web_paragraph_ref']); ?>
          </div>
          <!-- End - paragraph reference -->
        <?php endif; ?>

        <?php if (isset($content['field_os2web_base_case_ref'])): ?>
          <!-- Begin - case reference -->
          <div class="os2-accordion-case-reference">
            <?php print render($content['field_os2web_base_case_ref']); ?>
          </div>
          <!-- End - case reference -->
        <?php endif; ?>

        <?php if (isset($content['field_os2web_base_doc_ref'])): ?>
          <!-- Begin - document reference -->
          <div class="os2-accordion-document-reference">
            <?php print render($content['field_os2web_base_doc_ref']); ?>
          </div>
          <!-- End - document reference -->
        <?php endif; ?>

      </div>
      <!-- End - body -->

  </div>
  <!-- End - - accordion -->

<?php endif; ?>
