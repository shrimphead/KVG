<?php

/**
 * @file postal-address.tpl.php
 * Default theme implementation of a postal address
 *
 * Available variables:
 * - $address: The address object
 * - $name
 * - $street_address
 * - $extended_address
 * - $city
 * - $state
 * - $zip
 * - $country
 *
 */
?>
<div class="postal adr postal-address">
  <?php if ($name): ?>
    <div class="postal-name"><?php print $name; ?></div>
  <?php endif; ?>
  <?php if ($street_address): ?>
    <div class="street-address"><?php print $street_address; ?></div>
  <?php endif; ?>
  <?php if ($extended_address): ?>
    <div class="extended-address"><?php print $extended_address; ?></div>
  <?php endif; ?>
  <?php if ($city || $state || $postal_code): ?>
    <div>
      <?php if ($city): ?>
        <span class="locality"><?php print $city; ?>, </span>
      <?php endif; ?> 
      <?php if ($state): ?>
        <span class="region"><?php print $state; ?> </span>
      <?php endif; ?> 
      <?php if ($zip): ?>
        <span class="postal-code"><?php print $zip; ?></span>
      <?php endif; ?> 
    </div>
  <?php endif; ?>
  <?php if ($country): ?>
    <div class="country-name"><?php print $country; ?></div>
  <?php endif; ?>
</div> 
