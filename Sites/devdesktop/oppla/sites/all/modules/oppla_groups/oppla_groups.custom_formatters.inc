<?php
/**
 * @file
 * oppla_groups.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function oppla_groups_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'group_logo_and_title';
  $formatter->label = 'Group logo and title';
  $formatter->description = 'A HTML + Tokens example formatter; Display a Thumbnail image linked to a Large image.

Requires the Image URL Formatter and Field tokens modules:
- https://www.drupal.org/project/image_url_formatter
- https://www.drupal.org/project/field_tokens';
  $formatter->mode = 'token';
  $formatter->field_types = 'image';
  $formatter->code = '<h1   class="page__title title"><img src="[node:field_image]" alt="[node:title]" title="[node:title]" />[node:title]</h1>







';
  $formatter->fapi = '';
  $export['group_logo_and_title'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'group_logo_and_title_teaser';
  $formatter->label = 'Group logo and title on teasers';
  $formatter->description = 'A HTML + Tokens example formatter; Display a Thumbnail image linked to a Large image.

Requires the Image URL Formatter and Field tokens modules:
- https://www.drupal.org/project/image_url_formatter
- https://www.drupal.org/project/field_tokens';
  $formatter->mode = 'token';
  $formatter->field_types = 'image';
  $formatter->code = '<h2   class="page__title title"><a href="[node:url]"><img src="[node:field_image]" alt="[node:title]" title="[node:title]" />[node:title]</a></h2>







';
  $formatter->fapi = '';
  $export['group_logo_and_title_teaser'] = $formatter;

  return $export;
}
