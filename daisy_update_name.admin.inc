<?php

function daisy_update_name_settings($form, &$form_state) {
  $form = array();

  $form['daisy_update_name_apiurl'] = array(
    '#type' => 'textfield',
    '#title' => t('API URL'),
    '#default_value' => variable_get('daisy_update_name_apiurl', ''),
    '#size' => 30,
    '#maxlength' => 30,
    '#description' => t("URL for Daisy API"),
    '#required' => TRUE,
  );
  $form['daisy_update_name_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#default_value' => variable_get('daisy_update_name_username', ''),
    '#size' => 30,
    '#maxlength' => 30,
    '#description' => t("Username for Daisy API"),
    '#required' => TRUE,
  );
  $form['daisy_update_name_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    '#default_value' => variable_get('daisy_update_name_password', ''),
    '#size' => 30,
    '#maxlength' => 60,
    '#description' => t("Password for Daisy API"),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

?>
