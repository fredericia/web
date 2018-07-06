<?php if ($view_mode == 'includeable'): ?>
  <!-- node--borger_dk_article--includeable.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-full"<?php print $attributes; ?>>

    <div class="os2-box">
      <div class="os2-box-body pane-content">
        <!-- Begin - heading -->
        <h1 class="os2-node-full-heading-title"><a href="<?php print $node_url; ?>"><?php print $node->title; ?></a></h1>
        <!-- End - heading -->

        <!-- Begin - body -->
        <div class="os2-node-includeable-body">
          <?php if (isset($content['field_borger_dk_pre_text'])): ?>
            <!-- Begin - intro -->
            <div class="os2-node-includeable-body-content os2-node-full-intro">
              <?php print render($content['field_borger_dk_pre_text']); ?>
            </div>
            <!-- End - intro -->
          <?php endif; ?>

          <?php
            if (trim(strip_tags($node->field_borger_dk_header['und'][0]['value']))) {
              print $node->field_borger_dk_header['und'][0]['value'];
            } else {
              $article = borgerdk_article_load($node->field_borger_dk_article_ref['und'][0]['borgerdk_article_entity_id']);
              print $article->header;
            }
          ?>
        </div>
      </div>
    </div>

    <?php
      print render($content['field_borger_dk_article_ref']);
    ?>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
