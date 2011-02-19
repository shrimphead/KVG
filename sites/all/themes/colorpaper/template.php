<?php

function phptemplate_feed_icon($url, $title) {
  if ($image = theme('image', path_to_theme() . '/images/rss.png', t('Syndicate content'), $title)) {
    return '<a href="'. check_url($url) .'" class="feed-icon">'. $image .'</a>';
  }
}
