<!-- user-profile--includeable.tpl.php -->
<!-- Begin - teaser -->
<div id="user-profile-<?php print $account->uid; ?>" class="<?php print $classes; ?> os2-user-includeable"<?php print $attributes; ?>>

  <!-- Begin - full name -->
  <?php if (isset($user_full_name)): ?>
    <?php print l($user_full_name, 'user/' . $account->uid); ?>
  <?php endif ?>
  <!-- End - full name -->

  <?php if (isset($user_profile['field_os2intra_user_titles'])): ?>
    <!-- Begin - job title -->
    <div class="os2-user-includeable-job-title">
      <?php print render($user_profile['field_os2intra_user_titles']); ?>
    </div>
    <!-- End - job title -->
  <?php endif; ?>

</div>
<!-- End - teaser -->
