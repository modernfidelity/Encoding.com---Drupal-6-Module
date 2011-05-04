Encoding.com API module for Drupal 6/CCK
===========================

DISCLAIMER: this module is experimental and not recommended for production use.

A **Drupal 6** module that adds a new field "Video file" that can be added to your CCK content types.


Installation
============

Dependencies: CCK
-----------------

Since this module creates a new field type to be used with CCK, the CCK module must be also installed.

CCK is a very popular module and this should not be a problem. See more info at http://drupal.org/project/cck

Download it
-----------

Copy this code into your modules directory:

    cd YOUR-DRUPAL-PATH/sites/all/modules/
   

Enable it
---------

Enable the module "Encoding.com API" at *Administer >> Site building >> Modules*

Create a new content type
-------------------------

Now you should be able to create a new content type that includes videos. For this, first you need to go to *Administer >> Content management >> Content types* and click on "Add a new content type".

Once this is added, you will see your new content type listed alongside others in the content types table. Click on "manage fields" next to it and you will be able to add a new field to the default ones. Give it an appropriate name and, in the "- Select a field type -" dropdown, select "Video file".

Now you will be able to add new video content at "Create Content" on the navigation menu.

How to use your favourite video player
======================================

By default, this module uses HTML5 to render the video player. You might want to use a different player instead, such as one of the many popular Flash players there are available.


