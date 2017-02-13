// |--------------------------------------------------------------------------
// | BS3 designer
// |--------------------------------------------------------------------------
// |
// | This jQuery script is written by
// | Morten Nissen
// |
// | - Optimize form elements
// | - Attach footer to bottom of page on non-touch devices
// | - Enable BS3 tooltips on non-touch devices
// | - Disable form autocomplete on non-touch devices
// | - Apply loader icon to .btn.btn-loader on click
// | - Use appear on non-touch devices
// |

// jscs:disable requireCamelCaseOrUpperCaseIdentifiers

var bs3Designer = (function ($) {
    'use strict';

    var pub = {};

    /**
     * Instantiate
     */
    pub.init = function () {
        registerBootEventHandlers();
        registerEventHandlers();
    };

    /**
     * Register boot event handlers
     */
    function registerBootEventHandlers() {
        optimizeFormElements();
        appear();
        bs3Tooltip();
    }

    /**
     * Register event handlers
     */
    function registerEventHandlers() {

        $(window).on('load', function () {
            footerAttached();
        });

        $(window).on('resize', function () {
            footerAttached();
        });

        if ( ! Modernizr.touchevents) {

            $(window).on('load', function () {
                footerBelow();
            });

            $(window).on('resize', function () {
                footerBelow();
            });
        }

        $('.btn-loader').on('click touchstart', function () {
            var $element = $(this);

            iconSpin($element);
        });
    }

    /**
     * Footer attached
     */
    function footerAttached() {
        if ($('body').hasClass('footer-attached')) {
            var $footer = $('.footer');
            var footerHeight = $footer.outerHeight(true);

            $('.inner-wrapper').css('padding-bottom', footerHeight);
        }
    }

    /**
     * Footer below
     */
    function footerBelow() {
        if ($('body').hasClass('footer-below')) {
            var $footer = $('.footer');
            var footerHeight = $footer.outerHeight(true);

            $('.inner-wrapper').css('padding-bottom', footerHeight);
        }
    }

    /**
     * Appear
     */
    function appear() {
        var $appear = $('.appear');
        var $animation = $('.animation');

        if (Modernizr.touchevents || ! Modernizr.cssanimations) {

            $animation
              .removeClass('animation')
              .removeClass('animation-appear-from-top')
              .removeClass('animation-appear-from-top-short')
              .removeClass('animation-appear-from-right')
              .removeClass('animation-appear-from-left')
              .removeClass('animation-appear-from-bottom')
              .removeClass('animation-appear-from-bottom-short')
              .removeClass('animation-appear-from-center');

            return false;
        }

        // Enable appear
        $appear.appear();

        // Force processing on animation objects
        $animation.appear({
            force_process: true
        });

        // Animation object has appeared
        $animation.on('appear', function () {

            var $element = $(this);
            var delay = $element.data('delay');

            setTimeout(function () {
                $element.addClass('animation-start');
            }, delay);
        });
    }

    /**
     * BS tooltip
     */
    function bs3Tooltip() {
        if (Modernizr.touchevents) {
            $('[data-toggle=tooltip]').tooltip('hide');

            return false;
        }

        $('[data-toggle=tooltip]').tooltip();
    }

    /**
     * Optimize form elements
     */
    function optimizeFormElements() {
        $('form').attr('autocomplete', 'off');
    }

    /**
     * Icon spin
     */
    function iconSpin($element) {
        var $icon = $('<span />').addClass('fa').addClass('icon').addClass('icon-spin');
        var elementWidth = $element.outerWidth(true);

        // Remove button value and insert icon
        $element.html($icon).addClass('btn-loader-active').css('width', elementWidth);
    }

    return pub;
})(jQuery);
