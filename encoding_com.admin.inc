<?php

function encoding_com_admin_form() {
  
  $form = array(
      '#id' => 'encoding_com_default_settings' );
  
  $form ['transcode_default_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Default Video & Audio Transcode Settings'), 
      '#description' => t("Control the standard transcode settings for video and audio."), 
      '#weight' => 0, 
      '#collapsible' => TRUE, 
      '#collapsed' => TRUE );
  
  $form ['transcode_default_settings'] ['transcode_format_size'] = array(
      '#type' => 'checkboxes', 
      '#title' => t('Format Size'), 
      '#default_value' => variable_get('transcode_format_size', array(
          '640x480' )), 
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
          '1920x1080' => '1920 x 1080' ) );
  
  $form ['transcode_default_settings'] ['transcode_bitrate_kbps'] = array(
      '#type' => 'checkboxes', 
      '#title' => t('Bitrate (Kbps)'), 
      '#default_value' => variable_get('transcode_bitrate_kbps', array(
          '512k' )), 
      '#options' => array(
          '256k' => '256k', 
          '300k' => '300k', 
          '512k' => '512k', 
          '784k' => '784k', 
          '1024k' => '1024k', 
          '1600k' => '1600k' ) );
  
  $form ['transcode_default_settings'] ['transcode_audio_bitrate_kbps'] = array(
      '#type' => 'checkboxes', 
      '#title' => t('Audio bitrate (kbps)'), 
      '#default_value' => variable_get('transcode_audio_bitrate_kbps', array(
          '160k' )), 
      '#options' => array(
          '32k' => '32k', 
          '40k' => '40k', 
          '48k' => '48k', 
          '56k' => '56k', 
          '64k' => '64k', 
          '80k' => '80k', 
          '96k' => '96k', 
          '112k' => '112k', 
          '128k' => '128k', 
          '144k' => '144k', 
          '160k' => '160k', 
          '192k' => '192k', 
          '224k' => '224k', 
          '256k' => '256k', 
          '320k' => '320k' ) );
  
  $form ['transcode_default_settings'] ['transcode_frame_rate'] = array(
      '#type' => 'textfield', 
      '#title' => t('Frame Rate '), 
      '#default_value' => variable_get('transcode_frame_rate', NULL), 
      '#description' => t("Frame rate of the transcoded video i.e. 24 or 25 (fps)."), 
      '#required' => TRUE );
  
  $form ['transcode_default_settings'] ['transcode_two_pass_encoding'] = array(
      '#type' => 'radios', 
      '#title' => t('2 pass encoding'), 
      '#default_value' => variable_get('transcode_two_pass_encoding', 1), 
      '#options' => array(
          t('Yes'), 
          t('No') ) );
  
  $form ['transcode_default_settings'] ['transcode_cbr'] = array(
      '#type' => 'radios', 
      '#title' => t('Constant bitrate'), 
      '#default_value' => variable_get('transcode_two_pass_encoding', 1), 
      '#options' => array(
          t('Yes'), 
          t('No') ) );
  
  $form ['transcode_default_settings'] ['transcode_deinterlacing'] = array(
      '#type' => 'radios', 
      '#title' => t('De-interlacing'), 
      '#default_value' => variable_get('transcode_deinterlacing', 1), 
      '#options' => array(
          t('Yes'), 
          t('No') ) );
  
  $form ['encoding_com_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Encoding.com API Details'), 
      '#weight' => -1, 
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
  
  $form ['amazon_s3_settings'] = array(
      '#type' => 'fieldset', 
      '#title' => t('Amazon S3 Details'), 
      '#weight' => 0, 
      '#collapsible' => TRUE, 
      '#collapsed' => FALSE );
  
  $form ['amazon_s3_settings'] ['amazon_s3_access_key_id'] = array(
      '#type' => 'textfield', 
      '#title' => t('S3 Access Key ID'), 
      '#weight' => -1,
      '#default_value' => variable_get('amazon_s3_access_key_id', NULL), 
      '#description' => t("Your Amazon S3 Access Key ID."), 
      '#required' => TRUE );
  
   $form ['amazon_s3_settings'] ['amazon_s3_secret_access_key'] = array(
      '#type' => 'textfield', 
      '#title' => t('S3 Secret Access Key'), 
      '#weight' => -1,
      '#default_value' => variable_get('amazon_s3_secret_access_key', NULL), 
      '#description' => t("Your Amazon S3 Secret Access Key."), 
      '#required' => TRUE );
  
  $form ['amazon_s3_settings'] ['amazon_s3_bucket_name'] = array(
      '#type' => 'textfield', 
      '#title' => t('S3 Bucket'), 
      '#weight' => -1,
      '#default_value' => variable_get('amazon_s3_bucket_name', NULL), 
      '#description' => t("Your Encoding.com User ID, as per your account details."), 
      '#required' => TRUE );
  
  $form ['amazon_s3_settings'] ['amazon_s3_file_perms'] = array(
      '#type' => 'select', 
      '#title' => t('Display of XML feed items'), 
      '#default_value' => variable_get('amazon_s3_file_perms', array('read')), 
      '#options' => array(
          'read' => t('Public read'), 
          'read_write' => t('Public read + write') ), 
      '#description' => t('Global setting for the length of XML feed items that are output by default.') );
  
  $form ['amazon_s3_settings'] ['amazon_s3_file_directory'] = array(
      '#type' => 'textfield', 
      '#title' => t('File directory on S3'), 
      '#default_value' => variable_get('amazon_s3_file_directory', NULL), 
      '#description' => t("The name of the S3 bucket where Encoding.com will store your videos."), 
      '#required' => FALSE );
  
  
   $form ['amazon_s3_settings'] ['amazon_s3_cloudfront_url'] = array(
      '#type' => 'textfield', 
      '#title' => t('CloudFront URL'), 
      '#weight' => 0,
      '#default_value' => variable_get('amazon_s3_cloudfront_url', NULL), 
      '#description' => t("*Optional - use your cloudfront account with the site"), 
      '#required' => FALSE );
  
  
  
  return system_settings_form($form);

}