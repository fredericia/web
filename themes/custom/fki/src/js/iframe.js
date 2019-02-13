// |--------------------------------------------------------------------------
// | Iframe resize
// |--------------------------------------------------------------------------
// |
// |
// |
var iFrame = (function ($) {
  'use strict';
  var pub = {};

  /**
   * Instantiate
   */
  pub.init = function (options) {
    if (isMobile()) {
      $('iframe#emply_jobs').attr('height', '8000px');
    }
  };

  function isMobile() {
   try{ document.createEvent("TouchEvent"); return true; }
   catch(e){ return false; }
}
return pub;
})(jQuery);
