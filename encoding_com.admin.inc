<?php

function encoding_com_admin_form() {
  
  $form = array('#id' => array('encoding_com_default_settings' ));
  
  $form ['transcode_default_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Default Video Transcode'), 
      '#weight' => 0, 
      '#collapsible' => TRUE, 
      '#collapsed' => FALSE );
  
  $form ['transcode_default_settings']['transcode_format_size'] = array(
      '#type' => 'checkboxes', 
      '#title' => t('Format Size'), 
      //'#default_value' => variable_get('format_size',''), 
      '#options' => array(
      	  	'320x240' => '320 x 240', 
		  	'368x192' => '368 x 192',					
			'480x360' => '480 x 360',
		  	'640x480' => '640 x 480',
			'800x600' => '800 x 600',
			'852x480' => '852 x 480',
			'128x96' => '128 x 96',
			'176x144' => '176 x 144',	
			'352x288' => '352 x 288',
			'704x576' => '704 x 576',
			'1280x720' => '1280 x 720',
			'1408x1152' => '1408 x 1152',
			'1920x1080' => '1920 x 1080'
		));			
			
 $form ['transcode_default_settings']['transcode_bitrate_kbps'] = array(
      '#type' => 'checkboxes', 
      '#title' => t('Bitrate (Kbps)'), 
      //'#default_value' => variable_get('format_size',''), 
      '#options' => array(
      	  	'320x240' => '320 x 240', 
		  	'368x192' => '368 x 192',					
			'480x360' => '480 x 360',
		  	'640x480' => '640 x 480',
			'800x600' => '800 x 600',
			'852x480' => '852 x 480',
			'128x96' => '128 x 96',
			'176x144' => '176 x 144',	
			'352x288' => '352 x 288',
			'704x576' => '704 x 576',
			'1280x720' => '1280 x 720',
			'1408x1152' => '1408 x 1152',
			'1920x1080' => '1920 x 1080'
		));		
				
  
   
  $form ['encoding_com_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Encoding.com API Details'), 
      '#weight' => 0, 
      '#collapsible' => TRUE, 
      '#collapsed' => FALSE );
  
  $form ['encoding_com_settings'] ['encoding_com_user_id'] = array(
      '#type' => 'textfield', 
      '#title' => t('User ID '), 
      '#default_value' => variable_get('encoding_com_user_id', NULL), 
      '#description' => t("Your Encoding.com User ID, as per your account details."), 
      '#required' => TRUE );
  
  $form ['encoding_com_settings'] ['encoding_com_api_user_key'] = array(
      '#type' => 'textfield', 
      '#title' => t('User API Key'), 
      '#default_value' => variable_get('encoding_com_api_user_key', NULL), 
      '#description' => t("Your Encoding.com API User Key, as per your account details."), 
      '#required' => TRUE );
  
  $form ['encoding_com_settings'] ['encoding_com_s3_bucket'] = array(
      '#type' => 'textfield', 
      '#title' => t('S3 Bucket URL'), 
      '#default_value' => variable_get('encoding_com_s3_bucket', NULL), 
      '#description' => t("The name of the S3 bucket where Encoding.com will store your videos."), 
      '#required' => TRUE );
  
  return system_settings_form($form);
}