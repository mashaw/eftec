/**
 * @file
 * Contains JavaScript making the eleements stick.
 */

(function ($, Drupal, drupalSettings) {
  'use strict';

  /**
   * Attach the stickiness to the element in selector.
   *
   * @type {Drupal~behavior}
   *
   * @prop {Drupal~behaviorAttach} attach
   *   Make the element in selector sticky.
   */
  Drupal.behaviors.stickynav = {
    breakpoint: 0,
    compensation: 90,
    originalPadding: 0,
    attach: function (context) {
      var selector = drupalSettings.stickynav.selector;
      // Only getting the first elmenet in the dom.
      var $menu = $(selector).once('stickynav').eq(0);
      var offset = 0;
      if ($menu.length) {
        // Save original padding on top. 0 timeout to get correct padding.
        setTimeout(function () {
          //Drupal.behaviors.stickynav.originalPadding = $('body').css('paddingTop');
        }, 100);
        offset += parseInt(drupalSettings.stickynav.offsets.custom_offset);
        offset = offset || 0;
        $(drupalSettings.stickynav.offsets.selector).each(function () {
          offset += $(this).outerHeight();
        });
        Drupal.behaviors.stickynav.breakpoint = $menu.offset().top - offset;
        // We need to compensate the element so that the content does not jump up.
        Drupal.behaviors.stickynav.compensation = $menu.outerHeight();
        $(window).scroll(function () {
          if ($(window).scrollTop() > 0) {
            $menu.addClass('stickynav-active');
            if (offset) {
             // $menu.css({top: offset + 'px'});
            }
             $('body').addClass('active');
          }
          else {
            $menu.removeClass('stickynav-active');
            //$menu.css({top: ''});
            $('body').removeClass('active');
          }
        });
      }
    }
  };
})(jQuery, Drupal, drupalSettings);
