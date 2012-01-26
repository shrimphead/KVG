<<<<<<< HEAD
=======
// $Id: layout.js,v 1.2.4.2 2009/10/05 22:40:35 merlinofchaos Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5
/**
 * @file layout.js
 *
 * Contains javascript to make layout modification a little nicer.
 */

(function ($) {
  Drupal.Panels.Layout = {};
  Drupal.Panels.Layout.autoAttach = function() {
    $('div.form-item div.layout-icon').click(function() {
      $widget = $('input', $(this).parent());
      // Toggle if a checkbox, turn on if a radio.
      $widget.attr('checked', !$widget.attr('checked') || $widget.is('input[type=radio]'));
    });
  };

  $(Drupal.Panels.Layout.autoAttach);
})(jQuery);
