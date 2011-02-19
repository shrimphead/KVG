<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <script type="text/javascript">$(document).ready( function() { $('#logo, .feed-icon').pngFix(); } );</script>
  <script type="text/javascript"><?php /* Needed to avoid Flash of Unstyled Content in IE */ ?></script>
</head>
<body>
  <div id="content-repeat">
    <div id="bg-top-repeat">
      <div id="bg-btm-repeat">
        <div id="bg-top">
          <div id="bg-btm">
            <div id="page">
              <div id="primary">
                <?php print theme('links', $primary_links, array('class' => 'primary-links')); ?>
              </div> <!-- /#primary -->
              
              <div id="wrapper" class="clear-block">
                <div id="left-section">
                  <?php if ($is_front): ?>
                    <div id="mission-folded-corner">
                      <h1 class="page-title"><?php print t('Welcome to') . ' ' . $site_name; ?></h1>
                      <div id="mission"><?php print $mission; ?></div>
                    </div> <!-- /#mission-folded-corner -->
                  <?php else: ?>
                    <div id="page-title-folded-corner">
                      <?php if (!empty($title)): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; ?>
                      <?php if (!empty($page_title)): ?>
                        <div id="page-title-region">
                          <?php print $page_title; ?>
                        </div> <!-- /#page-title-region -->
                      <?php endif; ?>
                    </div> <!-- /#title-folded-corner -->
                  <?php endif; ?>
                  <?php if (!empty($content_top)): ?>
                    <div id="content-top-region" class="clear-block">
                      <?php print $content_top; ?>
                    </div> <!-- /#content-top-region -->
                  <?php endif; ?>
                  <div id="main" class="clear-block">
                    <?php if (!empty($breadcrumb)): ?><div id="breadcrumb"><?php print $breadcrumb; ?></div><?php endif; ?>
                    <?php if (!empty($tabs)): ?><div class="tabs"><?php print $tabs; ?></div><?php endif; ?>
                    <div class="clear-block"><!-- Clear fix for floating elements --></div>
                    <?php if (!empty($messages)): print $messages; endif; ?>
                    <?php if (!empty($help)): print $help; endif; ?>
                    <div id="content" class="clear-block">
                      <?php print $content; ?>
                    </div> <!-- /#content -->
                    <?php print $feed_icons; ?>
                  </div> <!-- /#main -->
                </div> <!-- /#left-section -->

                <div id="right-section">
                  <div id="logo-or-site-name">
                    <?php if (!empty($logo)): ?>
                      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
                        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                      </a>
                    <?php else: ?>
                      <div id="site-name">
                        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                          <?php print $site_name; ?>
                        </a>
                      </div>
                    <?php endif; ?>
                  </div> <!-- /#logo-or-site-name -->
                  <div id="sidebar">
                    <?php print $sidebar; ?>
                  </div> <!-- /#sidebar -->
                </div> <!-- /#right-section -->
              </div> <!-- /#wrapper -->

              <div id="btm" class="clear-block">
                <div id="back-to-top"><?php print '<a href="#page" title="' . t('Back to top') . '">' . t('Back to top') . '</a>'; ?></div>
                <?php if (!empty($secondary_links)): ?>
                  <div id="secondary">
                    <?php print theme('links', $secondary_links, array('class' => 'secondary-links')); ?>
                  </div> <!-- /#secondary -->
                <?php endif; ?>
                <div id="footer">
                  <?php print $footer_message; ?>
                  <div id="theme-credits"><?php print '<a href="http://drupal.org/project/colorpaper" title="' . t('Download') . ' Color Paper Drupal ' . t('theme') . '.' . '">Color Paper Drupal</a> ' . t('theme by') . ' ' . '<a href="http://kahthong.com/" title="' . t('Visit') . ' Leow Kah Thong\'s ' . t('website') . '.">Leow Kah Thong</a>, ' . t('designed by') . ' ' . '<a href="http://dreamtemplate.com/" title="' . t('Visit') . ' DreamTemplate\'s ' . t('website') . '.">DreamTemplate</a>, ' . t('brought to you by') . ' ' . '<a href="http://smashingmagazine.com/" title="' . t('Visit') . ' Smashing Magazine\'s ' . t('website') . '.">Smashing Magazine</a>.'; ?></div>
                </div> <!-- /#footer -->
              </div> <!-- /#btm -->
            </div> <!-- /#page -->
          </div> <!-- /#bg-btm -->
        </div> <!-- /#bg-top -->
      </div> <!-- /#bg-btm-repeat -->
    </div> <!-- /#bg-top-repeat -->
  </div> <!-- /#content-repeat -->

  <?php print $closure; ?>
</body>
</html>
