// |--------------------------------------------------------------------------
// | Popover button
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |
var popoverButton = (function ($) {
  'use strict';
  var pub = {};

  /**
   * Instantiate
   */
  pub.init = function (options) {
    registerEventHandlers();
    registerBootEventHandlers();
  }

  /**
   * Register event handlers
   */
  function registerEventHandlers() {

    // Toggle sidebar
    $('.popover-button-toggle').on('click touchstart', function (event) {
      event.preventDefault();
      var $element = $(this);

      $element
        .parent('.popover-button')
        .toggleClass('popover-button-open');
    });
  }

  /**
   * Register boot event handlers
   */
  function registerBootEventHandlers() {
  }

  return pub;
})(jQuery);
