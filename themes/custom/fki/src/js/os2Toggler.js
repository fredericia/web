// |--------------------------------------------------------------------------
// | OS2Toggler
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |

var os2Toggler = (function ($) {
  'use strict';
  var pub = {};

  /**
   * Instantiate
   */
  pub.init = function (options) {
    registerEventHandlers();
    registerBootHandlers();
  }

  /**
   * Register event handlers
   */
  function registerEventHandlers() {

    // Toggle
    $('.os2-toggler-element-toggle').on('click touchstart', function (event) {
      event.preventDefault();

      var $element = $(this);

      // Toggle active class
      $element
        .closest('.os2-toggler-element')
        .toggleClass('active');
    });
  }

  /**
   * Register boot handlers
   */
  function registerBootHandlers() {
    var $toggler = $('.os2-organisation-tree');

    $toggler.find('li').addClass('os2-toggler-element');
  }

  return pub;
})(jQuery);
