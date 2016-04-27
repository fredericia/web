<?php if ($view_mode == 'list'): ?>
  <!-- taxonomy-term--list.tpl.php -->
  <!-- Begin - list -->
  <div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?> os2-taxonomy-term-list">

    <div class="os2-taxonomy-term-list-heading">
      <h2 class="os2-taxonomy-term-list-heading-title"><?php print $term_name; ?></h2>
    </div>

    <?php if (isset($content['body'])): ?>
      <!-- Begin - body -->
      <div class="os2-taxonomy-term-list-body">
        <?php print render($content['body']); ?>
      </div>
      <!-- End - body -->
    <?php endif; ?>

    <?php print render($content['links']); ?>

  </div>
  <!-- End - list -->

<?php endif; ?>
