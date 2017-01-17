<?php if ($view_mode == 'teaser'): ?>
  <!-- node--os2web_borger_dk_article--teaser.tpl.php -->
  <!-- Begin - teaser -->
  <article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> os2-node-teaser os2-box os2-equal-height-element"<?php print $attributes; ?>>

    <!-- Begin - heading -->
    <div class="os2-node-teaser-heading">
      <h3 class="os2-node-teaser-heading-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    </div>
    <!-- End - heading -->

    <!-- Begin - body -->
    <div class="os2-node-teaser-body">

      <?php if (isset($content['field_borger_dk_article_ref'])): ?>
        <!-- Begin - intro -->
        <div class="os2-node-teaser-body-content">
          <?php
            $article = borgerdk_article_load($node->field_borger_dk_article_ref['und'][0]['borgerdk_article_entity_id']);
            if ($article) {
              print ($article->header);
            }
          ?>
        </div>
        <!-- End - intro -->
      <?php endif; ?>

    </div>
    <!-- End - body -->

  </article>
  <!-- End - teaser -->

<?php endif; ?>
