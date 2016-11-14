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

      // Remove inputs from tabindex
      $element
          .parent('.popover-button')
          .find('input')
          .prop('tabIndex', -1);

      $element
          .parent('.popover-button')
          .find('textarea')
          .prop('tabIndex', -1);

      $element
          .parent('.popover-button')
          .find('button')
          .prop('tabIndex', -1);
    });
  }

  /**
   * Register boot event handlers
   */
  function registerBootEventHandlers() {
  }

  return pub;
})(jQuery);
