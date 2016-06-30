<?php if ($view_mode == 'list'): ?>
  <!-- node--os2web_base_news--list.tpl.php -->
  <!-- Begin - list -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-list os2-node-list-news"<?php print $attributes; ?>>

    <?php if ($updated_at_short): ?>
      <div class="os2-node-list-date">
        <?php print $created_at_short; ?>
      </div>
    <?php endif; ?>

    <!-- Begin - heading -->
    <div class="os2-node-list-heading">
      <h3 class="os2-node-list-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="os2-node-list-body">

      <?php if (isset($content['body'])): ?>
        <!-- Begin - body -->
        <div class="os2-node-list-body-content">
          <?php print render($content['body']); ?>
        </div>
        <!-- End - body -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

  </section>
  <!-- End - list -->

<?php endif; ?>
