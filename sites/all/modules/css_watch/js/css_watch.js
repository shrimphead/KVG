Drupal.behaviors.cssWatch = function() {

  var paths = Drupal.settings.cssWatch.paths; // list of css files to watch, relative to page.
  var poll = Drupal.settings.cssWatch.pollInterval;
  var queryString;

  setInterval(function() {
      for(i = 0; i < paths.length; i++){
        var path = paths[i];
        $.ajax({
          url: path,
          async: false, // nothing works without this
          ifModified: true,
          success: function(data, textStatus) {
            if(textStatus != 'notmodified') {
              queryString = '?_'  + new Date().getTime();
              $('link[href^="' + path + '"]').attr("href", path.replace(/\?.*|$/, queryString));
            }
          }
        });
      }
  }, poll);
};
