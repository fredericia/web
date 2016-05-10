<?php if ($content): ?>

  <!-- panels-pane--self-service-toggle.tpl.php -->
  <?php if ($pane_prefix): ?>
    <?php print $pane_prefix; ?>
  <?php endif; ?>
  <div class="<?php print $classes; ?> os2-self-service-toggle" <?php print $id; ?> <?php print $attributes; ?>>
    <?php if ($admin_links): ?>
      <?php print $admin_links; ?>
    <?php endif; ?>

    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <div class="os2-self-service-toggle-toggler">
        <<?php print $title_heading; ?><?php print $title_attributes; ?>>
          <?php print $title; ?>
        </<?php print $title_heading; ?>>
      </div>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($feeds): ?>
      <div class="feed">
        <?php print $feeds; ?>
      </div>
    <?php endif; ?>

    <div class="os2-self-service-toggle-body">
      <?php print render($content); ?>
    </div>

    <?php if ($links): ?>
      <div class="links">
        <?php print $links; ?>
      </div>
    <?php endif; ?>

    <?php if ($more): ?>
      <div class="more-link">
        <?php print $more; ?>
      </div>
    <?php endif; ?>
  </div>
  <?php if ($pane_suffix): ?>
    <?php print $pane_suffix; ?>
  <?php endif; ?>

<?php endif; ?>
