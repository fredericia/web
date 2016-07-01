<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

    <!-- Begin - sidebar left -->
    <div class="sidebar sidebar-left">

        <!-- Begin - inner wrapper -->
        <div class="sidebar-inner-wrapper">

            <!-- Begin - logo -->
            <div class="sidebar-logo">
                <a href="<?php echo $front_page; ?>" class="sidebar-logo-link">
                    <img src="<?php echo $path_img . '/logo-sidebar-wide.png'; ?>"
                         class="sidebar-logo-image sidebar-logo-image-wide"
                         alt="<?php echo $site_name . t(' logo'); ?>"/>
                    <img src="<?php echo $path_img . '/logo-sidebar-narrow.png'; ?>"
                         class="sidebar-logo-image sidebar-logo-image-narrow"
                         alt="<?php echo $site_name . t(' logo'); ?>"/>
                </a>
            </div>
            <!-- End - logo -->

            <?php if (isset($sidebar_tertiary)): ?>
                <!-- Begin - navigation -->
                <?php print render($sidebar_tertiary); ?>
                <!-- End - navigation -->
            <?php endif; ?>

        </div>
        <!-- End - inner wrapper -->

    </div>
    <!-- End - sidebar left -->

    <!-- Begin - inner wrapper -->
    <div class="inner-wrapper" role="document">

        <?php if (isset($emergency_grant)): ?>
            <!-- Begin - emergency grant -->
            <div class="os2-emergency-grant">
                <?php print render($emergency_grant); ?>
            </div>
            <!-- End - emergency grant -->
        <?php endif; ?>

        <!-- Begin - simple navigation -->
        <nav class="simple-navigation">

            <!-- Begin - button list -->
            <ul class="simple-navigation-list simple-navigation-list-left">

                <!-- Begin - button -->
                <li class="simple-navigation-button">
                    <a href="#" data-sidebar-toggle="left">
                        <span class="fa icon fa-bars"></span> </a>
                </li>
                <!-- End - button -->

            </ul>
            <!-- End - button list -->

            <!-- Begin - logo -->
            <a href="<?php echo $front_page; ?>" class="simple-navigation-logo-link">
                <img src="<?php echo $path_img . '/logo-simple-navigation.png'; ?>" class="simple-navigation-logo-image"
                     alt="<?php echo t('fredericia.dk logo'); ?>"/>
            </a>
            <!-- End - logo -->

        </nav>
        <!-- End - simple navigation -->

        <!-- Begin - content -->
        <div class="content">

            <!-- Begin - main navigation -->
            <nav class="main-navigation-wrapper">
                <section class="main-navigation-bar">
                    <div class="container">
                        <div class="row">

                            <!-- Begin - content -->
                            <div class="col-md-4">
                                <a href="<?php echo $front_page; ?>" class="main-navigation-logo-link">
                                    <img src="<?php echo $path_img; ?>/logo-main-navigation.png" alt=""
                                         class="main-navigation-logo-image">
                                </a>
                            </div>
                            <!-- End - content -->

                            <!-- Begin - content -->
                            <?php if (isset($main_navigation_secondary)): ?>
                                <div class="col-md-8 main-navigation-right">

                                    <!-- Begin - navigation -->
                                    <?php print render($main_navigation_secondary); ?>
                                    <!-- End - navigation -->

                                </div>
                            <?php endif; ?>
                            <!-- End - content -->

                        </div>
                    </div>
                </section>
            </nav>
            <!-- End - main navigation -->

            <!-- Begin - page header -->
            <div class="os2-page-header">
                <div class="container">

                    <!-- Begin - search -->
                    <div class="row">
                        <div class="os2-page-header-search-form">
                            <?php print render($page_header_search); ?>
                        </div>
                    </div>
                    <!-- End - search -->

                    <!-- Begin - menu -->
                    <div class="row">
                        <div class="os2-page-header-tabbed-menu">
                            <?php print render($tabbed_navigation); ?>
                        </div>
                    </div>
                    <!-- End - menu -->

                </div>
            </div>
            <!-- End - page header -->

            <?php if (!empty($breadcrumb)): ?>
                <!-- Begin - breadcrumb -->
                <section class="os2-breadcrumb-container">
                    <div class="container">
                        <div class="row">
                            <div class="col-xs-12">
                                <?php print $breadcrumb; ?>
                            </div>
                        </div>
                    </div>
                </section>
                <!-- End - breadcrumb -->
            <?php endif; ?>

            <div class="container">

                <?php if (!empty($page['help'])): ?>
                    <?php print render($page['help']); ?>
                <?php endif; ?>

                <?php if (!empty($action_links)): ?>
                    <ul class="action-links"><?php print render($action_links); ?></ul>
                <?php endif; ?>

                <?php if (!empty($tabs_primary)): ?>
                    <!-- Begin - tabs primary -->
                    <div class="os2-tabs-container os2-tabs-variant-default">
                        <?php print render($tabs_primary); ?>
                    </div>
                    <!-- End - tabs primary -->
                <?php endif; ?>

                <?php if (!empty($tabs_secondary)): ?>
                    <!-- Begin - tabs secondary -->
                    <div class="os2-tabs-container os2-tabs-variant-tertiary">
                        <?php print render($tabs_secondary); ?>
                    </div>
                    <!-- End - tabs secondary -->
                <?php endif; ?>

            </div>

            <a id="main-content"></a>
            <div class="message">
              <?php print $messages; ?>
            </div>
            <?php if (panels_get_current_page_display()): ?>
                <?php if ($wrap_panels_layout): ?>
                    <div class="container">
                        <?php print render($page['content']); ?>
                    </div>
                <?php else: ?>
                    <?php print render($page['content']); ?>
                <?php endif; ?>
            <?php else: ?>
                <div class="container">
                    <div class="os2-box">
                        <div class="os2-box-body">
                            <?php print render($page['content']); ?>
                        </div>
                    </div>
                </div>
            <?php endif; ?>

        </div>
        <!-- End - content -->

        <!-- Begin - footer -->
        <?php if (!empty($page['footer'])): ?>
            <footer class="footer">
                <div class="container">
                    <div class="footer-content">
                        <div class="row">

                            <div class="col-xs-12">
                                <?php print render($page['footer']); ?>
                            </div>

                        </div>
                    </div>
                </div>
            </footer>
        <?php endif; ?>
        <!-- End - footer -->

    </div>
    <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->
