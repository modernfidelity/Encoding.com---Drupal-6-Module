<?php

function encoding_com_admin() {
	
  $form = array();

  
  	// Video transcode defaults for Encoding.com
  
	$form ['transcode_default_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Default Transcode'), 
      '#weight' => 0, 
      '#collapsible' => TRUE, 
      '#collapsed' => FALSE 
	);
  
	
	
	// Encoding + S3 Url and settings
	
	$form ['encoding_com_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Encoding.com API Details'), 
      '#weight' => 0, 
      '#collapsible' => TRUE, 
      '#collapsed' => FALSE 
	);
  
  
  $form['encoding_com_settings']['encoding_com_user_id'] = array(
    '#type' => 'textfield',
    '#title' => t('User ID '),
    '#default_value' => variable_get('encoding_com_user_id', NULL),
    '#description' => t("Your Encoding.com User ID, as per your account details."),
    '#required' => TRUE,
  );

  $form['encoding_com_settings']['encoding_com_api_user_key'] = array(
    '#type' => 'textfield',
    '#title' => t('User API Key'),
    '#default_value' => variable_get('encoding_com_api_user_key', NULL),
    '#description' => t("Your Encoding.com API User Key, as per your account details."),
    '#required' => TRUE,
  );

  $form['encoding_com_settings']['encoding_com_s3_bucket'] = array(
    '#type' => 'textfield',
    '#title' => t('S3 Bucket URL'),
    '#default_value' => variable_get('encoding_com_s3_bucket', NULL),
    '#description' => t("The name of the S3 bucket where Encoding.com will store your videos."),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}