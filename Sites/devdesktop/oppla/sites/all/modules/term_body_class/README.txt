CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Configuration
 * Troubleshooting
 * Limitations
 * FAQ
 * Maintainers


INTRODUCTION
------------

This modules allows addition values of taxonomy type fields of an entity as
classes in the body element, on the entity's page. It adds the settings per
field instance, hence you can enable body classes for individual fields per
entity type and not for a field in all entity types.

How it works -
* on the 'taxonomy term reference' field settings form page, a new checkbox is
available that allows adding its values as body classes
* this setting is saved only for this field instance
* on an entity page, before rendering the html, the module will fetch all fields
associated with the entity, which have been enabled as body classes, convert all
their values that are associated with the node to machine names(with hyphens
instead of underscore) and add to the body classes list

 * For a full description of the module, visit the project page:
   https://www.drupal.org/sandbox/sghosh/2409019

 * To submit bug reports and feature suggestions, or to track changes:
   https://www.drupal.org/project/issues/2409019


REQUIREMENTS
------------

This module does not require any other contributed module and functions stand
alone with drupal core.


INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.


CONFIGURATION
-------------

 * For the taxonomy field which you want as body classes, edit the field
   settings for the content type.

 * Check 'Add body class'.

 * Save.

 * Check the entity view page, the term will appear in the body element as
   tbc-[term name sanitized as class].


TROUBLESHOOTING
---------------

 * If the class doesn't appear, clear the drupal cache.

LIMITATIONS
-----------

Currently available only for following entity types - node, user.


MAINTAINERS
-----------

Current maintainers:
 * Somedutta Ghosh (SGhosh) - https://www.drupal.org/u/sghosh
