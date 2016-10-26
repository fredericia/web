<?php if ($view_mode == 'list'): ?>
  <!-- node--os2web_cp_service_cp_document--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-list os2-node-list-document"<?php print $attributes; ?>>

    <!-- Begin - link -->
    <div class="os2-node-list-document-reference-link">
      <a href="/os2web/service/gf/v1/<?php print $document_url; ?>"><?php print $title; ?></a> <span class="os2-node-list-document-type">(pdf)</span>
    </div>
    <!-- End - heading -->

  </section>
  <!-- End - list -->

<?php endif; ?>
