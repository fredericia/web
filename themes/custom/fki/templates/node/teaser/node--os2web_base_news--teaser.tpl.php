<?php if ($view_mode == 'teaser'): ?>
  <!-- node--os2web_base_news--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-news-teaser"<?php print $attributes; ?>>

    <?php if ($updated_at_short): ?>
      <div class="os2-node-teaser-date">
        <?php print $created_at_short; ?>
      </div>
    <?php endif; ?>

    <?php if ($title): ?>
      <!-- Begin - heading -->
      <div class="os2-node-teaser-heading">
        <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
      </div>
      <!-- End - heading -->
    <?php endif; ?>

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">

      <?php if (isset($content['field_os2web_base_field_summary'])): ?>
        <!-- Begin - summary -->
        <div class="os2-node-teaser-summary">
          <?php print render($content['field_os2web_base_field_summary']); ?>
        </div>
        <!-- End - summary -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
