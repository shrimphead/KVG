// $Id: cck_wordcount.js,v 1.2 2009/08/30 22:07:23 batje Exp $ 
function wordcount_help(field$, max$) {

    var box; 
    box = $('<p id="'+ field$ +'-count" class="cck_wordcount">0 ' + Drupal.t("word(s) used, you have") + ' ' + max$ + ' ' + Drupal.t("words left") + '.</p>');
    field = $("#"+ field$ );
    field.before(box);    words$ = $.trim($(field).val()).split(/\s+/).length;
    togo$ = max$ - words$;
    box.html(words$ + " " + Drupal.t("word(s) used, you have") + ' ' + togo$ + ' ' + Drupal.t("words left") + ".");  

  $("#" + field$ ).keyup(function() { 
    var t; 
    t = jQuery("#"+ field$ + "-count");
    words$ = $.trim($(this).val()).split(/\s+/).length;
    if (words$ > max$) {
      alert(Drupal.t("Sorry, you reached the maximum amount of words. \n\n The last word in your text will be deleted."));
      while (words$ > max$) {
        less$ = $(this).attr("value");
        less$ = less$.slice ( 0, less$.length - 1);
        $(this).attr("value", less$) ;
        words$ = $.trim($(this).val()).split(/\s+/).length;
      }
    }
  
    togo$ = max$ - words$;
    t.html(words$ + " " + Drupal.t("word(s) used, you have") + ' ' + togo$ + ' ' + Drupal.t("words left") + "."); 
    if ((words$/max$) < 0.8) {
      $(t).removeClass("cck_wordcount_error");
      $(t).removeClass("cck_wordcount_warning");
    } else if ((words$/max$) < 0.9) {
      $(t).removeClass("cck_wordcount_error");
      $(t).addClass("cck_wordcount_warning");
    } else if ((words$/max$) < 1) {
      $(t).removeClass("cck_wordcount_warning");
      $(t).addClass("cck_wordcount_warning");
    }
  });

}