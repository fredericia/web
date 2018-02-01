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
        bs3Tooltip();
    }

    /**
     * Register event handlers
     */
    function registerEventHandlers() {

        if ( ! Modernizr.touchevents) {

            $(window).on('load', function () {
                footerAttached();
            });

            $(window).on('resize', function () {
                footerAttached();
            });

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
