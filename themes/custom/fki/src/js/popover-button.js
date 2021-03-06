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
  };

  /**
   * Register event handlers
   */
  function registerEventHandlers() {
    var $popoverButton = $('.popover-button');

    // Click outside popover
    $(document).on('click', function () {
      $popoverButton
        .removeClass('popover-button-open');
    });

    $popoverButton.on('click', function(event) {
      event.stopPropagation();
    });

    // Toggle sidebar
    $('.popover-button-toggle').on('click', function(event) {
      event.preventDefault();

      var $element = $(this);

      $element
        .parent('.popover-button')
        .toggleClass('popover-button-open');
    });

    $popoverButton
      .find('input')
      .prop('tabIndex', -1);

    $popoverButton.find('textarea')
      .prop('tabIndex', -1);

    $popoverButton
      .find('button')
      .prop('tabIndex', -1);
  }

  /**
   * Register boot event handlers
   */
  function registerBootEventHandlers() {}

  return pub;
})(jQuery);
