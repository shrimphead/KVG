<!-- #page-wrapper -->
<div id="page-wrapper">

    <!--#main-menu-->
    <div id="main-menu" class="container_12">

        <div class="grid_12">
            <!--#main-menu-inside-->
            <div id="main-menu-inside">
                <!--#menu-->
                <div id="menu" class="clearfix">
                    <?php if ($page['main-menu']) :?>
                      <?php print drupal_render($page['main-menu']); ?>
                    <?php endif; ?>
                </div>
                <!--EOF:#menu-->
            </div>
            <!--EOF:#main-menu-inside-->
        </div>

    </div>
    <!--EOF:#main-menu-->

    <!--#header-->
    <div id="header">
        <!--#header-inside-->
        <div id="header-inside" class="container_12">

            <?php if ($page['header'] && !$page['content_top']) { ?>
            <div class="grid_9">
            <?php } elseif (($page['header'] && $page['content_top']) || ($page['content_top'])) { ?>
            <div class="grid_4">
            <?php } else { ?>
            <div class="grid_12">
            <?php } ?>

                <!-- #header-inside-left -->
                <div id="header-inside-left">
					<?php if ($logo): ?>
                    <div id="logo" class="clearfix">
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"> <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /> </a>
                    </div>
                    <?php endif; ?>

                    <?php if ($site_name || $site_slogan): ?>
                        <!-- #name-and-slogan -->
                        <div id="name-and-slogan">
						<?php if ($site_name):?>
                        <div id="site-name">
                        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a>
                        </div>
                        <?php endif; ?>

                        <?php if ($site_slogan):?>
                        <div id="site-slogan">
                        <?php print $site_slogan; ?>
                        </div>
                        <?php endif; ?>
                        </div>
                        <!-- EOF:#name-and-slogan -->
                    <?php endif; ?>
                </div>
                <!--EOF:#header-inside-left-->
            </div>

            <?php if ($page['content_top']) :?>
                <div class="grid_5">
                    <!-- #header-inside-right -->
                    <div id="content-top" class="clearfix">
                        <?php print render($page['content_top']); ?>
                    </div>
                    <!--EOF:#header-inside-right-->
                </div>
            <?php endif; ?>

            <?php if ($page['header']) :?>
                <div class="grid_3">
                    <!-- #header-inside-right -->
                    <div id="header-inside-right" class="clearfix">
                        <?php print render($page['header']); ?>
                    </div>
                    <!--EOF:#header-inside-right-->
                </div>
            <?php endif; ?>

        </div>
        <!--EOF:#header-inside-->
    </div>
    <!--EOF:#header-->


    <!--#banner-->
    <div id="banner">
        <!--#banner-inside-->
        <div id="banner-inside" class="container_12">


            <?php if (theme_get_setting('slideshow_display','corkedscrewer')): ?>

            <?php if ($is_front): ?>

            <div class="grid_12">

<!--#slideshow-->
            <?php if ($page['banner']) : ?>
            <div class="alpha omega grid_12">
            <?php print render($page['banner']); ?>
            </div>
            <?php endif; ?>
<!--EOF:#slideshow-->
            </div>

            <?php endif; ?>

            <?php endif; ?>

        </div>
        <!--EOF:#banner-inside-->
    </div>
    <!--EOF:#banner-->

    <!--#content-->
    <div id="content" class="container_12">
        <!--#content-inside-->
        <div id="content-inside" class="clearfix">

            <?php if ($page['highlighted']): ?>
            <div class="grid_12">
                <div id="highlighted"><?php print render($page['highlighted']); ?></div>
            </div>
            <?php endif; ?>

            <?php if (theme_get_setting('highlighted_display','corkedscrewer')): ?>

              <?php if ($is_front): ?>
                <div class="grid_12">
                    <div id="highlighted"><?php print render($page['highlighted']); ?></div>
                </div>

                <div id="featured" class="grid_12" >
                    <!--featured-teaser-one-->
                    <div id="featured-teaser-one" class="grid_3 alpha">
                          <?php print render($page['featured-teaser-one']); ?>
                    </div>
                    <!--EOF:featured-teaser-one-->
                    <!--#featured-->
                    <div id="featured-teaser" class="grid_6">
                      <?php print render($page['featured-teaser']); ?>
                    </div>
                    <!--EOF:#featured-->
                    <!--featured-teaser-two-->
                    <div id="featured-teaser-two" class="grid_3 omega">
                          <?php print render($page['featured-teaser-two']); ?>
                    </div>
                    <!--EOF:featured-teaser-two-->
                </div>

              <?php endif; ?>

            <?php endif; ?>

            <div class="grid_12">
                <div class="breadcrumb-wrapper">
                <?php if (theme_get_setting('breadcrumb_display','corkedscrewer')): print $breadcrumb; endif; ?>
                </div>
                <?php print $messages; ?>
            </div>

            <?php if ($page['sidebar_first']) :?>
                <!--.sidebar first-->
                <div class="grid_3">
                    <div class="sidebar">
                    <?php print render($page['sidebar_first']); ?>
                    </div>
                </div>
                <!--EOF:.sidebar first-->
            <?php endif; ?>


            <?php if ($page['sidebar_first'] && $page['sidebar_second']) { ?>
            <div class="grid_6">
            <?php } elseif ($page['sidebar_first'] || $page['sidebar_second']) { ?>
            <div class="grid_9">
            <?php } else { ?>
            <div class="grid_12">
            <?php } ?>
                <!--#main-content-->
                <div id="main-content">
                <?php print render($title_prefix); ?>
                <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
                <?php print render($title_suffix); ?>
                <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
                <?php print render($page['help']); ?>
                <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
                <?php print render($page['content']); ?>
                </div>
                <!--EOF:#main-content-->
            </div>


            <?php if ($page['sidebar_second']) :?>
                <!--.sidebar second-->
                <div class="grid_3">
                    <div class="sidebar">
                    <?php print render($page['sidebar_second']); ?>
                    </div>
                </div>
                <!--EOF:.sidebar second-->
            <?php endif; ?>

        </div>
        <!--EOF:#content-inside-->
    </div>
    <!--EOF:#content-->

    <!--#footer-->
    <div id="footer">
        <!--#footer-top-->
        <div id="footer-top" class="container_12">
            <div class="grid_4">
                <div class="footer-area">
                <?php if ($page['footer_featured']) :?>
                <?php print render($page['footer_featured']); ?>
                <?php endif; ?>
                </div>
            </div>
            <div class="grid_2">
                <div class="footer-area">
                <?php if ($page['footer_first']) :?>
                <?php print render($page['footer_first']); ?>
                <?php endif; ?>
                </div>
            </div>
            <div class="grid_2">
                <div class="footer-area">
                <?php if ($page['footer_second']) :?>
                <?php print render($page['footer_second']); ?>
                <?php endif; ?>
                </div>
            </div>
            <div class="grid_2">
                <div class="footer-area">
                <?php if ($page['footer_third']) :?>
                <?php print render($page['footer_third']); ?>
                <?php endif; ?>
                </div>
            </div>
            <div class="grid_2">
                <div class="footer-area">
                <?php if ($page['footer_fourth']) :?>
                <?php print render($page['footer_fourth']); ?>
                <?php endif; ?>
                </div>
            </div>
        </div>
        <!--EOF:#footer-top-->
        <!--#footer-bottom-->
        <div id="footer-bottom" class="container_12">
            <div class="grid_12">
                <!--#footer-bottom-inside-->
                <div id="footer-bottom-inside">
                <?php print theme('links__system_secondary_menu', array('links' => $secondary_menu, 'attributes' => array('class' => array('menu', 'secondary-menu', 'links', 'clearfix')))); ?>
                <?php if ($page['footer']) :?>
                <?php print render($page['footer']); ?>
                <?php endif; ?>
                </div>
                <!--EOF:#footer-bottom-inside-->
            </div>
        </div>
    </div>
    <!--EOF:#footer-->

</div>
<!--EOF:#page-wrapper-->


