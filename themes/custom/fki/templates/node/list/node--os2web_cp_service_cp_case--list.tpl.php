<?php if ($view_mode == 'list'): ?>
  <!-- node--os2web_cp_service_cp_case--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-list os2-node-list-case"<?php print $attributes; ?>>

    <?php if (isset($content['field_os2web_cp_service_doc_ref'])): ?>
      <!-- Begin - document reference -->
      <div class="os2-node-list-document-reference">
        <?php print render($content['field_os2web_cp_service_doc_ref']); ?>
      </div>
      <!-- End - document reference -->
    <?php endif; ?>

  </section>
  <!-- End - list -->

<?php endif; ?>
