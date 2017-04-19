<?php
/**
 * @file
 * level_one_.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function level_one__user_default_roles() {
  $roles = array();

  // Exported role: Level one.
  $roles['Level one'] = array(
    'name' => 'Level one',
    'weight' => 2,
  );

  return $roles;
}
