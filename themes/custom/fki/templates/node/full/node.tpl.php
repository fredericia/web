<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
    hide($content['field_os2web_base_field_lead_img']);

    if (isset($content['field_tags'])) {
      hide($content['field_tags']);
    }

  if (isset($content['field_os2web_base_field_image'])) {
    hide($content['field_os2web_base_field_image']);
  }

  if (isset($content['field_os2web_base_case_ref'])) {
    hide($content['field_os2web_base_case_ref']);
  }

  if (isset($content['field_os2web_base_doc_ref'])) {
    hide($content['field_os2web_base_doc_ref']);
  }
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>
  <?php if ($turn_on_off_button) : ?>
      <div class="pull-right right"><a class="turn-on-off-button" title="<?php print t("Slå adgang med tegn til/fra")?>"onclick="SignLanguageMark(null,'#ff2345');">
        <img src="<?php print $path_img?>/primaerblaa_icon.png" alt="<?php print t("Slå adgang med tegn til/fra")?>"></a> <script type="text/javascript">   (function() {      var lwfile = 'cdhsign.dk/cdh_player.js';      var lw = document.createElement('script');       lw.type = 'text/javascript';       lw.async = true;      lw.src = ('https:' == document.location.protocol ? 'https://' : 'http://') +lwfile;      var s = document.getElementsByTagName('script')[0];       s.parentNode.insertBefore(lw, s);   })   (); </script></p>
      </div>
  <?php endif; ?>
    <div class="pull-right right"> </div>
    <?php if (isset($content['field_os2web_base_field_image'])): ?>
      <!-- Begin - image -->
      <div class="os2-node-full-image">
        <?php print render($content['field_os2web_base_field_image']); ?>
      </div>
      <!-- End - image -->
    <?php endif; ?>

    <div class="os2-node-full-heading">
      <?php print render($title_prefix); ?>
      <h1<?php print $title_attributes; ?> class="os2-node-full-heading-title"><?php print $title; ?></h1>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content['field_os2web_base_field_summary'])): ?>
      <!-- Begin - intro -->
      <div class="os2-node-full-intro">
        <?php print render($content['field_os2web_base_field_summary']); ?>
      </div>
      <!-- End - intro -->
    <?php endif; ?>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body">
        <?php print render($content); ?>

        <?php if ($display_case OR isset($content['field_os2web_base_doc_ref'])): ?>
            <p style="padding: 0; margin: 0; margin-top: 25px;"><strong><?php print t('Bilag'); ?></strong></p>
        <?php endif; ?>

        <?php if (isset($content['field_os2web_base_case_ref'])): ?>
            <!-- Begin - case reference -->
            <div class="os2-node-full-case-reference">
              <?php print render($content['field_os2web_base_case_ref']); ?>
            </div>
            <!-- End - case reference -->
        <?php endif; ?>

        <?php if (isset($content['field_os2web_base_doc_ref'])): ?>
            <!-- Begin - document reference -->
            <div class="os2-node-full-document-reference">
              <?php print render($content['field_os2web_base_doc_ref']); ?>
            </div>
            <!-- End - document reference -->
        <?php endif; ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - full node -->

<?php endif; ?>
