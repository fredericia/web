// |--------------------------------------------------------------------------
// | Box
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |

var box = (function ($) {
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

    $('.os2-box-toggleable').find('.os2-box-heading, .os2-box-heading:before .pane-title, .pane-title:before').on('click touchstart', function (event) {
      var $element = $(this);

      toggleable($element, event);
    });
  }

  /**
   * Register boot handlers
   */
  function registerBootHandlers() {
  }

  /**
   * Toggleable
   */
  function toggleable($element, event) {
    var $parent = $element.parents('.os2-box-toggleable');

    // Touch
    if (Modernizr.touchevents && $parent.hasClass('os2-box-toggleable-touch-only')) {
      $parent.toggleClass('active');
    }

    // No touch
    else if ( ! Modernizr.touchevents && $parent.hasClass('os2-box-toggleable-no-touch-only')) {
      $parent.toggleClass('active');
    }
  }

  return pub;
})(jQuery);
