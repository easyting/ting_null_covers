<?php
/**
 * @file
 * Admin related logic.
 */

/**
 * Admin form definition.
 */
function ting_null_covers_admin_form($form, $form_state) {
  $form['ting_null_covers_hide'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide empty covers'),
    '#default_value' => variable_get('ting_null_covers_hide', FALSE),
  );

  return system_settings_form($form);
}
