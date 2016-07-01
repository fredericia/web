<?php if ($view_mode == 'includeable'): ?>
  <!-- node--os2web_borger_dk_article--includeable.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> "<?php print $attributes; ?>>

    <!-- Begin - heading -->
      <h1 class="os2-node-full-heading-title"><a href="<?php print $node_url; ?>"><?php print $node->title; ?></a></h1>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="os2-node-includeable-body">

      <?php if (isset($content['field_os2web_borger_dk_pre_text'])): ?>
        <!-- Begin - intro -->
        <div class="os2-node-includeable-body-content">
          <?php print render($content['field_os2web_borger_dk_pre_text']); ?>
        </div>
        <!-- End - intro -->
      <?php endif; ?>

      <?php if (isset($content['field_os2web_borger_dk_header'])): ?>
        <!-- Begin - intro -->
        <div class="os2-node-includeable-body-content">
          <?php print render($content['field_os2web_borger_dk_header']); ?>
        </div>
        <!-- End - intro -->
      <?php endif; ?>


    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
