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

    // Click outside popover
    $(document).on("click", function () {

      $('.popover-button-toggle')
          .parent('.popover-button')
          .removeClass('popover-button-open');
    });

    // Toggle sidebar
    $('.popover-button-toggle').on('click touchstart', function (event) {
      event.preventDefault();
      event.stopPropagation();

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
