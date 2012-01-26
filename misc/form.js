<<<<<<< HEAD
=======
// $Id: form.js,v 1.1 2007/09/12 18:29:32 goba Exp $
>>>>>>> 7df91a28a0b98a4e2c4a737bc64d30156be224d5

Drupal.behaviors.multiselectSelector = function() {
  // Automatically selects the right radio button in a multiselect control.
  $('.multiselect select:not(.multiselectSelector-processed)')
    .addClass('multiselectSelector-processed').change(function() {
      $('.multiselect input:radio[value="'+ this.id.substr(5) +'"]')
        .attr('checked', true);
  });
};
