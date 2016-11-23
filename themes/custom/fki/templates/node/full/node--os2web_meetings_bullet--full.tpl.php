<?php if ($view_mode == 'full'): ?>
  <?php
    hide($content['comments']);
    hide($content['links_top']);
    hide($content['links']);
    hide($content['links_bottom']);
    hide($content['field_tags']);
  ?>
  <!-- node.tpl.php -->
  <!-- Begin - meetings full node -->
  <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full os2-accordion entity-field-collection-item"<?php print $attributes; ?>>

    <div class="os2-node-full-heading os2-accordion-heading">
      <?php print render($title_prefix); ?>
      <h3<?php print $title_attributes; ?> class="os2-node-full-heading-title os2-accordion-heading-title">
        <?php print $title; ?>
        
       <?php if ($content['field_os2web_meetings_bul_closed'][LANGUAGE_NONE][0]['value'] == 0) : 
      print t('(Lukket)'); 
    endif;
    ?>
        
            </h3>
      <?php print render($title_suffix); ?>
    </div>

    <?php if (isset($content)): ?>
      <!-- Begin - body -->
      <div class="os2-node-full-body os2-accordion-body">
        <?php print render($content); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

  </div>
  <!-- End - meetings full node -->

<?php endif; ?>
