<!-- user-profile--teaser.tpl.php -->
<!-- Begin - teaser -->
<div id="user-profile-<?php print $account->uid; ?>" class="<?php print $classes; ?> os2-user-teaser"<?php print $attributes; ?>>
  <div class="table">
    <div class="table-row">
      <div class="table-cell os2-user-teaser-image">

        <?php if (isset($user_profile['field_os2intra_image'])): ?>
          <!-- Begin - image -->
          <div class="user-picture">
            <?php print render($user_profile['field_os2intra_image']); ?>
          </div>
          <!-- End - image -->
        <?php endif; ?>

      </div>
      <div class="table-cell os2-user-teaser-information">

        <?php if (isset($user_full_name)): ?>
          <!-- Begin - full name -->
          <div class="os2-user-teaser-full-name">
            <?php print l($user_full_name, 'user/' . $account->uid); ?>
          </div>
        <?php endif ?>
        <!-- End - full name -->

        <?php if (isset($user_profile['field_os2intra_user_titles'])): ?>
          <!-- Begin - job title -->
          <div class="os2-user-teaser-job-title">
            <?php print render($user_profile['field_os2intra_user_titles']); ?>
          </div>
          <!-- End - job title -->
        <?php endif; ?>

        <?php if (isset($user_profile['field_os2intra_phone'])): ?>
          <!-- Begin - phone number -->
          <div class="os2-user-teaser-phone-number">
            <?php print render($user_profile['field_os2intra_phone']); ?>
          </div>
          <!-- End - phone number -->
        <?php endif; ?>

        <?php if (isset($user_profile['field_os2intra_mobile'])): ?>
          <!-- Begin - mobile -->
          <div class="os2-user-teaser-mobile">
            <?php print render($user_profile['field_os2intra_mobile']); ?>
          </div>
          <!-- End - mobile -->
        <?php endif; ?>

        <?php if (isset($account->mail)): ?>
          <!-- Begin - email -->
          <div class="os2-user-teaser-email">
            <a href="mailto:<?php print $account->mail; ?>"><?php print $account->mail; ?></a>
          </div>
          <!-- End - email -->
        <?php endif; ?>

      </div>
    </div>
  </div>

</div>
<!-- End - teaser -->
