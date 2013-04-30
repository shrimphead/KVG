------------------------------------------------------------------------------
  Filter by node type - readme
  http://drupal.org/project/filterbynodetype

  Maintainer: 
  David Herminghaus (doitDave)
  www.david-herminghaus.de (http://drupal.org/user/833794)
------------------------------------------------------------------------------

1. ABOUT
========

The D6 core filters system allows an admin to restrict the type of input format
available to a user by user role. It does not, however, allow the admin to
restrict the available input formats by node type. So if you e.g. want to allow
for node bodies with embedded images and others without, you will be stranded
with just core functions.


2. FEATURES
===========

This module fills that gap. It provides a simple checkbox-based interface where
an administrator can restrict what input filters are available to what node
types. These rules are applied after the role-based restrictions, so it can
never offer more input formats than the default role-based input formats would.

As of 6x-1.5, this functionality is extended towards each node type's comments.
You may chose to restrict them the same way as the corresponding node type
(default), to a different scheme or not at all.

3. QUICK REFERENCE
==================

1. Install the module.
2. Note the additional options on each node type settings page (sections
   "submission" and "comments" (if comment module is active).
3. Optionally set the new bypass filter restrictions user permission
   for each role.

4. CREDITS

Original author: Larry Garfield
larry at garfieldtech dot com
http://www.garfieldtech.com/

This module was originally developed for www.Star-Fleet.com.
