<!DOCTYPE html>
<!--[if lt IE 7]>
<html
  class="lt-ie10 lt-ie9 lt-ie8 lt-ie7 no-js"
  lang="<?php print $language->language; ?>"
  dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>
>
<![endif]-->
<!--[if IE 7]>
<html
  class="lt-ie10 lt-ie9 lt-ie8 ie7 no-js"
  lang="<?php print $language->language; ?>"
  dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>
<![endif]-->
<!--[if IE 8]>
<html
  class="lt-ie10 lt-ie9 ie8 no-js"
  lang="<?php print $language->language; ?>"
  dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>
<![endif]-->
<!--[if IE 9]>
<html
  class="lt-ie10 ie9 no-js"
  lang="<?php print $language->language; ?>"
  dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>>
<![endif]-->
<!--[if (gt IE 9)|!(IE)]><!-->
<html
  class="not-ie no-js"
  lang="<?php print $language->language; ?>"
  dir="<?php print $language->dir; ?>"
  <?php print $rdf_namespaces; ?>
>
<!--<![endif]-->
<head>

  <title><?php print $head_title; ?></title>
  <meta http-equiv="content-language" content="da,en">
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no">
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">

  <?php print $head; ?>

  <!-- Begin - internal stylesheet -->
  <?php print $styles; ?>
  <!-- End - internal stylesheet -->

  <!-- Begin - icons -->
  <link rel="apple-touch-icon" sizes="57x57" href="<?php print $path_img; ?>/icons/apple-touch-icon-57x57.png">
  <link rel="apple-touch-icon" sizes="60x60" href="<?php print $path_img; ?>/icons/apple-touch-icon-60x60.png">
  <link rel="apple-touch-icon" sizes="72x72" href="<?php print $path_img; ?>/icons/apple-touch-icon-72x72.png">
  <link rel="apple-touch-icon" sizes="76x76" href="<?php print $path_img; ?>/icons/apple-touch-icon-76x76.png">
  <link rel="apple-touch-icon" sizes="114x114" href="<?php print $path_img; ?>/icons/apple-touch-icon-114x114.png">
  <link rel="apple-touch-icon" sizes="120x120" href="<?php print $path_img; ?>/icons/apple-touch-icon-120x120.png">
  <link rel="apple-touch-icon" sizes="144x144" href="<?php print $path_img; ?>/icons/apple-touch-icon-144x144.png">
  <link rel="apple-touch-icon" sizes="152x152" href="<?php print $path_img; ?>/icons/apple-touch-icon-152x152.png">
  <link rel="apple-touch-icon" sizes="180x180" href="<?php print $path_img; ?>/icons/apple-touch-icon-180x180.png">
  <link rel="icon" type="image/png" href="<?php print $path_img; ?>/icons/favicon-32x32.png" sizes="32x32">
  <link rel="icon" type="image/png" href="<?php print $path_img; ?>/icons/android-chrome-192x192.png" sizes="192x192">
  <link rel="icon" type="image/png" href="<?php print $path_img; ?>/icons/favicon-96x96.png" sizes="96x96">
  <link rel="icon" type="image/png" href="<?php print $path_img; ?>/icons/favicon-16x16.png" sizes="16x16">
  <link rel="manifest" href="<?php print $path_img; ?>/icons/manifest.json">
  <link rel="mask-icon" href="<?php print $path_img; ?>/icons/safari-pinned-tab.svg" color="#f24941">
  <link rel="shortcut icon" href="<?php print $path_img; ?>/icons/favicon.ico">
  <meta name="msapplication-TileColor" content="#b9c6ce">
  <meta name="msapplication-TileImage" content="<?php print $path_img; ?>/icons/mstile-144x144.png">
  <meta name="msapplication-config" content="<?php print $path_img; ?>/icons/browserconfig.xml">
  <meta name="theme-color" content="#ffffff">
  <!-- End - icons -->
  <script id="CookieConsent" src="https://policy.app.cookieinformation.com/uc.js" data-culture="DA" type="text/javascript"></script>
  <script>
    javascript:CookieConsent.renew();Example:<button onClick="javascript:CookieConsent.renew();">Renew Consent</button>
  </script>

</head>
<body class="<?php print $classes; ?>"<?php print $attributes; ?>>

<!-- Begin - skip link -->
<div id="skip-link" class="show-on-focus">
  <a href="#content" class="element-invisible element-focusable">
    <?php print t('Skip to main content'); ?>
  </a>
</div>
<!-- End - skip link -->

<?php print $page; ?>

<!-- Begin - load javascript files -->
<?php print $scripts; ?>
<!-- End - load javascript files -->

<?php print $page_bottom; ?>

<!-- Begin - Siteimprove Analytics code //-->
<script type="text/javascript">
/*<![CDATA[*/
(function() {
var sz = document.createElement('script'); sz.type = 'text/javascript'; sz.async = true;
sz.src = '//siteimproveanalytics.com/js/siteanalyze_133884.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(sz, s);
})();
/*]]>*/
</script>
<!-- End - Siteimprove Analytics code //-->
</body>
</html>
