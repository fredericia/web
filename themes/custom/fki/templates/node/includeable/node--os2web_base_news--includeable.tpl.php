<?php if ($view_mode == 'includeable'): ?>
  <!-- node--os2web_base_news--includeable.tpl.php -->
  <!-- Begin - includeable -->
  <section id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-includeable os2-node-includeable-news"<?php print $attributes; ?>>
    <div class="container">
      <div class="row">

        <!-- Begin - icon -->
        <div class="col-xs-12 col-sm-3 ">
          <img src="<?php print $path_img . '/emergency-grant.png'; ?>" class="os2-node-includeable-icon" alt="">
        </div>
        <!-- End - icon -->

        <!-- Begin - body -->
        <div class="col-xs-12 col-sm-9">

          <!-- Begin - heading -->
          <h2 class="os2-node-includeable-title"><?php print $title; ?></h2>
          <!-- End - heading -->

          <!-- Begin - button -->
          <a href="<?php print $node_url; ?>" class="btn btn-warning"><?php print t('Follow developments here'); ?></a>
          <!-- End - button -->

        </div>
        <!-- End - body -->

      </div>
    </div>
  </section>
  <!-- End - includeable -->

<?php endif; ?>
