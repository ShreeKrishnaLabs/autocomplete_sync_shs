<?php

/**
 * @file
 * autocomplete_sync_shs administration forms.
 */

/**
 * autocomplete_sync_shs administration page.
 */
function autocomplete_sync_shs_admin_form($form, &$form_state) {
  // autocomplete_sync_shs Configuration.
  $form['add_autocomplete_to_shs'] = array(
    '#type' => 'radios',
    '#title' => t('autocomplete_sync_shs Configuration'),
    '#default_value' => variable_get('add_autocomplete_to_shs'),
    '#options' => array(1=> t('Yes'), 0 => t('No')),
  );
  $form['add_autocomplete_sync_keep_three_level_open'] = array(
    '#type' => 'radios',
    '#title' => t('Keep SHS Opened by default Configuration'),
    '#default_value' => variable_get('add_autocomplete_sync_keep_three_level_open'),
    '#options' => array(1=> t('Yes'), 0 => t('No')),
  );
  //autocomplete_sync_shs_title_widget_select
   $form['autocomplete_sync_shs_checkbox_desc'] = array(
    '#type' => 'textarea',
    '#title' => t('Description for Widget selection field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_checkbox_desc'),
  );
   $form['autocomplete_sync_shs_title_widget_select'] = array(
    '#type' => 'textfield',
    '#title' => t('Title for Widget selection field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_title_widget_select'),
  );
  // Title Autocomplete Select
  $form['autocomplete_sync_shs_autocomplete_headline'] = array(
    '#type' => 'textfield',
    '#title' => t('Headline  for Autocomplete  field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_autocomplete_headline'),
  );
  // Description Autocomplete Select

 $form['autocomplete_sync_shs_autocomplete_info'] = array(
    '#type' => 'textarea',
    '#title' => t('Info for Autocomplete field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_autocomplete_info'),
  );
  // Title for SHS 
 $form['autocomplete_sync_shs_headline_shs'] = array(
    '#type' => 'textfield',
    '#title' => t('Title for SHS field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_headline_shs'),
  );

  // Description for SHS
 $form['autocomplete_sync_shs_info_shs'] = array(
    '#type' => 'textarea',
    '#title' => t('Description for SHS field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_info_shs'),
  );
  // Bootstrap Classes for Autocomplete fieldset
  $form['sync_autocomplete_fieldset_classes'] = array(
    '#type' => 'textfield',
    '#title' => t('Classes for Autocomplete field.'),
    '#default_value' => variable_get('sync_autocomplete_fieldset_classes'),
  );
  // Bootstrap Classes for SHS fieldset
  $form['sync_shs_fieldset_classes'] = array(
    '#type' => 'textfield',
    '#title' => t('Classes for SHS field.'),
    '#default_value' => variable_get('sync_shs_fieldset_classes'),
  );
  // Boostrap Classes for SHS select boxes/options
  
  $form['autocomplete_sync_shs_select_classes'] = array(
    '#type' => 'textfield',
    '#title' => t('Classes for SHS select boxes in the shs field.'),
    '#default_value' => variable_get('autocomplete_sync_shs_select_classes'),
  );

   $form['widget_selection_bootstrap_class'] = array(
    '#type' => 'textfield',
    '#title' => t('Classes for Widget Selection field.'),
    '#default_value' => variable_get('widget_selection_bootstrap_class'),
  );
  return system_settings_form($form);
}

