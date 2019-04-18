##Description

This module extends the [Field Permissions](/project/field_permissions) module by adding [Organic Group](/project/og) membership level permissions as access requirement options for each field.

**Also supports** adding OG membership permission requirements on [Field Group](/project/field_group) elements.

###Important note about functionality
When **creating a new entity**, normally a relationship to a OG group has not yet been established. This will result in Field Permissions OG blocking access to fields with OG permission requirements. You can use something like [Entityreference Prepopulate](/project/entityreference_prepopulate) to initially set the group reference. You can also use OG's submodule [Context](/project/og) to derive the group from external factors. Alternatively, you can leverage a multi-step form, setting the group reference in the first step. A module like [Flexiform](/project/flexiform) makes this pretty easy.


##Dependencies

This module requires the following modules to also be installed:

  * [Organic Groups](/project/og)
  * [Field Permissions](/project/field_permissions)

## Installation

[Download and install](/docs/7/extending-drupal-7/installing-drupal-7-contributed-modules) this module just as you would any other module.


-------------------------------------------
<sub>Created in [stackedit.io](https://stackedit.io).</sub>