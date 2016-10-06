<?php if ($view_mode == 'teaser'): ?>
  <!-- node--os2web_ofir_job--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-equal-height-element clearfix"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-teaser-heading">
      <div>
      <strong><?php print render($content['field_os2web_ofir_category']); ?></strong>
    </div>
      <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">
      <!-- Begin - intro -->
      <?php if (isset($content['field_os2web_ofir_job_text'])): ?>
      <div class="os2-node-teaser-body-content">
        <?php print render($content['field_os2web_ofir_job_text']); ?>
      </div>
      <?php endif; ?>
      <!-- End - intro -->

      <div>
        <strong><?php print render($content['field_os2web_ofir_job_period']); ?></strong>
      </div>
    </div>
    <!-- End - body -->

  </article>
  <hr>
  <!-- End - teaser -->

<?php endif; ?>
