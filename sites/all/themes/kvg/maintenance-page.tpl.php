<?php
// $Id: page.tpl.php,v 1.1.2.1 2009/02/24 15:34:45 dvessel Exp $
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $body_classes; ?> show-grid">
  <div id="offline-page" class="container-16 clear-block">
    <img src="http://visitkaslo.com/sites/all/themes/kvg/images/offline-page.jpg" alt="offline-page" width="960" height="480" 
      style=" display:block; margin-left:auto; margin-top: 180px; margin-right: auto; -webkit-box-shadow: 4px 4px 8px #000; -moz-box-shadow: 4px 4px 8px #000; box-shadow: 4px 4px 8px #000;"/>
      <?php print $messages; ?>
  

  </div>
</body>
</html>
