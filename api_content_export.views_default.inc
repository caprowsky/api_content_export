<?php
/**
 * @file
 * api_content_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function api_content_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api_faq';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API_faq';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API_faq';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Detailed question */
  $handler->display->display_options['fields']['field_detailed_question']['id'] = 'field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['table'] = 'field_data_field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['field'] = 'field_detailed_question';
  $handler->display->display_options['fields']['field_detailed_question']['type'] = 'services';
  $handler->display->display_options['fields']['field_detailed_question']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'aggiornato';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'voce_di_glossario' => 'voce_di_glossario',
  );

  /* Display: FAQ */
  $handler = $view->new_display('services', 'FAQ', 'services_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* Filter criterion: Contenuto: Albero navigazione (field_albero_navigazione) */
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['id'] = 'field_albero_navigazione_tid';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['table'] = 'field_data_field_albero_navigazione';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['field'] = 'field_albero_navigazione_tid';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['value'] = array(
    0 => '1214',
  );
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['vocabulary'] = 'albero_di_navigazione';
  $handler->display->display_options['path'] = 'si7_faq_faq';

  /* Display: glossario */
  $handler = $view->new_display('services', 'glossario', 'services_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'API_glossario';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'aggiornato';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'si7_glossario';

  /* Display: Tabellone */
  $handler = $view->new_display('services', 'Tabellone', 'services_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tabellone' => 'tabellone',
  );
  $handler->display->display_options['path'] = 'si7_tabellone';

  /* Display: FAQ */
  $handler = $view->new_display('services', 'FAQ', 'services_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  /* Filter criterion: Contenuto: Albero navigazione (field_albero_navigazione) */
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['id'] = 'field_albero_navigazione_tid';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['table'] = 'field_data_field_albero_navigazione';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['field'] = 'field_albero_navigazione_tid';
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['value'] = array(
    0 => '1214',
  );
  $handler->display->display_options['filters']['field_albero_navigazione_tid']['vocabulary'] = 'albero_di_navigazione';
  $handler->display->display_options['path'] = 'si7_faq_procedimento';
  $translatables['api_faq'] = array(
    t('Master'),
    t('API_faq'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('Detailed question'),
    t('body'),
    t('created'),
    t('aggiornato'),
    t('lingua'),
    t('percorso'),
    t('pubblicato'),
    t('uid'),
    t('nid'),
    t('tnid'),
    t('tags'),
    t('FAQ'),
    t('glossario'),
    t('API_glossario'),
    t('Tabellone'),
  );
  $export['api_faq'] = $view;

  $view = new view();
  $view->name = 'api_files';
  $view->description = '';
  $view->tag = 'si8';
  $view->base_table = 'file_managed';
  $view->human_name = 'Api_files';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Api_files';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Campo: File: ID file */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['label'] = 'fid';
  /* Campo: File: File UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Campo: File: Nome */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Campo: File: Percorso */
  $handler->display->display_options['fields']['uri_1']['id'] = 'uri_1';
  $handler->display->display_options['fields']['uri_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri_1']['field'] = 'uri';
  $handler->display->display_options['fields']['uri_1']['label'] = 'url';
  $handler->display->display_options['fields']['uri_1']['file_download_path'] = TRUE;
  /* Campo: File: Extension */
  $handler->display->display_options['fields']['extension']['id'] = 'extension';
  $handler->display->display_options['fields']['extension']['table'] = 'file_managed';
  $handler->display->display_options['fields']['extension']['field'] = 'extension';
  $handler->display->display_options['fields']['extension']['label'] = 'extension';
  /* Campo: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['label'] = 'mime_type';
  /* Campo: File: Tipo */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_managed';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'tipo';
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Campo: File: Dimensione */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['label'] = 'dimensione';
  $handler->display->display_options['fields']['filesize']['file_size_display'] = 'bytes';
  /* Campo: File: Alt Text */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = 'alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['type'] = 'services';
  $handler->display->display_options['fields']['field_file_image_alt_text']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = 'title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['type'] = 'services';
  $handler->display->display_options['fields']['field_file_image_title_text']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: File: Upload date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'created';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: File: Upload date */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = 'upload_date';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp_1']['custom_date_format'] = 'Y/m';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'percorso';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'public://upload/[timestamp_1]/[filename]';
  /* Filter criterion: File: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'api-files';

  /* Display: API files images */
  $handler = $view->new_display('services', 'API files images', 'services_1');
  $handler->display->display_options['path'] = 'si7_files_img';

  /* Display: API files no images */
  $handler = $view->new_display('services', 'API files no images', 'services_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: File: ID file */
  $handler->display->display_options['fields']['fid']['id'] = 'fid';
  $handler->display->display_options['fields']['fid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['fid']['field'] = 'fid';
  $handler->display->display_options['fields']['fid']['label'] = 'fid';
  /* Campo: File: File UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Campo: File: Nome */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Campo: File: Percorso */
  $handler->display->display_options['fields']['uri_1']['id'] = 'uri_1';
  $handler->display->display_options['fields']['uri_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri_1']['field'] = 'uri';
  $handler->display->display_options['fields']['uri_1']['label'] = 'url';
  $handler->display->display_options['fields']['uri_1']['file_download_path'] = TRUE;
  /* Campo: File: Extension */
  $handler->display->display_options['fields']['extension']['id'] = 'extension';
  $handler->display->display_options['fields']['extension']['table'] = 'file_managed';
  $handler->display->display_options['fields']['extension']['field'] = 'extension';
  $handler->display->display_options['fields']['extension']['label'] = 'extension';
  /* Campo: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['label'] = 'mime_type';
  /* Campo: File: Tipo */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'file_managed';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'tipo';
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Campo: File: Dimensione */
  $handler->display->display_options['fields']['filesize']['id'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filesize']['field'] = 'filesize';
  $handler->display->display_options['fields']['filesize']['label'] = 'dimensione';
  $handler->display->display_options['fields']['filesize']['file_size_display'] = 'bytes';
  /* Campo: File: Alt Text */
  $handler->display->display_options['fields']['field_file_image_alt_text']['id'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['table'] = 'field_data_field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['field'] = 'field_file_image_alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['label'] = 'alt_text';
  $handler->display->display_options['fields']['field_file_image_alt_text']['type'] = 'services';
  $handler->display->display_options['fields']['field_file_image_alt_text']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = 'title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['type'] = 'services';
  $handler->display->display_options['fields']['field_file_image_title_text']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: File: Upload date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'created';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: File: Upload date */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = 'upload_date';
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp_1']['custom_date_format'] = 'Y/m';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'percorso';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'public://upload/[timestamp_1]/[filename]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
    'video' => 'video',
  );
  $handler->display->display_options['path'] = 'si7_files_no_img';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  $handler->display->display_options['path'] = 'files_export_csv';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['api_files'] = array(
    t('Master'),
    t('Api_files'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('fid'),
    t('uuid'),
    t('url'),
    t('extension'),
    t('mime_type'),
    t('tipo'),
    t('dimensione'),
    t('alt_text'),
    t('title_text'),
    t('created'),
    t('upload_date'),
    t('percorso'),
    t('public://upload/[timestamp_1]/[filename]'),
    t('Page'),
    t('API files images'),
    t('API files no images'),
    t('Data export'),
  );
  $export['api_files'] = $view;

  $view = new view();
  $view->name = 'api_notizia_it';
  $view->description = '';
  $view->tag = 'si8';
  $view->base_table = 'node';
  $view->human_name = 'API_notizia_it';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API_notizia_it';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['text'] = 'it';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine principale */
  $handler->display->display_options['fields']['field_immagine_1']['id'] = 'field_immagine_1';
  $handler->display->display_options['fields']['field_immagine_1']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['label'] = 'immagine_principale';
  $handler->display->display_options['fields']['field_immagine_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_1']['type'] = 'services';
  $handler->display->display_options['fields']['field_immagine_1']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  /* Campo: Contenuto: Data evento */
  $handler->display->display_options['fields']['field_data_evento']['id'] = 'field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['table'] = 'field_data_field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['field'] = 'field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['label'] = 'data_evento';
  $handler->display->display_options['fields']['field_data_evento']['alter']['text'] = '[field_data_evento-value] 00:00:00';
  $handler->display->display_options['fields']['field_data_evento']['settings'] = array(
    'format_type' => 'english_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Contenuto: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notizia' => 'notizia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 2;
  /* Filter criterion: Traduzione dei contenuti: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 2;

  /* Display: notizia tnid0 */
  $handler = $view->new_display('services', 'notizia tnid0', 'services_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '250';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Voci per pagina';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tutto -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Scostamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ indietro';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'avanti ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine principale */
  $handler->display->display_options['fields']['field_immagine_1']['id'] = 'field_immagine_1';
  $handler->display->display_options['fields']['field_immagine_1']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_immagine_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_1']['type'] = 'services';
  $handler->display->display_options['fields']['field_immagine_1']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'si7_notizia_tnid_0';

  /* Display: notizia tnid no 0 */
  $handler = $view->new_display('services', 'notizia tnid no 0', 'services_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine principale */
  $handler->display->display_options['fields']['field_immagine_1']['id'] = 'field_immagine_1';
  $handler->display->display_options['fields']['field_immagine_1']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_immagine_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_1']['type'] = 'services';
  $handler->display->display_options['fields']['field_immagine_1']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'notizia' => 'notizia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['operator'] = '!=';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 1;
  $handler->display->display_options['path'] = 'si7_notizia_tnid_no_0';

  /* Display: evento tnid no 0 */
  $handler = $view->new_display('services', 'evento tnid no 0', 'services_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine principale */
  $handler->display->display_options['fields']['field_immagine_1']['id'] = 'field_immagine_1';
  $handler->display->display_options['fields']['field_immagine_1']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_immagine_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_1']['type'] = 'services';
  $handler->display->display_options['fields']['field_immagine_1']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  /* Campo: Contenuto: Data evento */
  $handler->display->display_options['fields']['field_data_evento']['id'] = 'field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['table'] = 'field_data_field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['field'] = 'field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['label'] = 'data_evento';
  $handler->display->display_options['fields']['field_data_evento']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_data_evento']['alter']['text'] = '[field_data_evento-value] 00:00:00';
  $handler->display->display_options['fields']['field_data_evento']['settings'] = array(
    'format_type' => 'english_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evento' => 'evento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['operator'] = '!=';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 1;
  $handler->display->display_options['path'] = 'si7_evento_tnid_no_0';

  /* Display: evento tnid0 */
  $handler = $view->new_display('services', 'evento tnid0', 'services_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine principale */
  $handler->display->display_options['fields']['field_immagine_1']['id'] = 'field_immagine_1';
  $handler->display->display_options['fields']['field_immagine_1']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine_1']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_immagine_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine_1']['type'] = 'services';
  $handler->display->display_options['fields']['field_immagine_1']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  /* Campo: Contenuto: Data evento */
  $handler->display->display_options['fields']['field_data_evento']['id'] = 'field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['table'] = 'field_data_field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['field'] = 'field_data_evento';
  $handler->display->display_options['fields']['field_data_evento']['label'] = 'data_evento';
  $handler->display->display_options['fields']['field_data_evento']['alter']['text'] = '[field_data_evento-value] 00:00:00';
  $handler->display->display_options['fields']['field_data_evento']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_data_evento']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_data_evento']['type'] = 'services';
  $handler->display->display_options['fields']['field_data_evento']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evento' => 'evento',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 2;
  /* Filter criterion: Traduzione dei contenuti: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 2;
  $handler->display->display_options['path'] = 'si7_evento_tnid_0';

  /* Display: articolo tnid0 */
  $handler = $view->new_display('services', 'articolo tnid0', 'services_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 2;
  /* Filter criterion: Traduzione dei contenuti: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 2;
  $handler->display->display_options['path'] = 'si7_articolo_tnid_0';

  /* Display: articolo tnid no 0 */
  $handler = $view->new_display('services', 'articolo tnid no 0', 'services_6');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['operator'] = '!=';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 1;
  $handler->display->display_options['path'] = 'si7_articolo_tnid_no_0';

  /* Display: sardegnasuap tnid0 */
  $handler = $view->new_display('services', 'sardegnasuap tnid0', 'services_7');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sardegnasuap_notizia' => 'sardegnasuap_notizia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 2;
  /* Filter criterion: Traduzione dei contenuti: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 2;
  $handler->display->display_options['path'] = 'si7_sardegnasuapnotizia_tnid_0';

  /* Display: sardegnasuap tnid no 0 */
  $handler = $view->new_display('services', 'sardegnasuap tnid no 0', 'services_8');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sardegnasuap_notizia' => 'sardegnasuap_notizia',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['operator'] = '!=';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 1;
  $handler->display->display_options['path'] = 'si7_sardegnasuapnotizia_tnid_no_0';

  /* Display: pagina statica tnid0 */
  $handler = $view->new_display('services', 'pagina statica tnid0', 'services_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Pagine collegate */
  $handler->display->display_options['fields']['field_pagine_collegate']['id'] = 'field_pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['table'] = 'field_data_field_pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['field'] = 'field_pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['label'] = 'pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_pagine_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_pagine_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid_1']['id'] = 'tnid_1';
  $handler->display->display_options['filters']['tnid_1']['table'] = 'node';
  $handler->display->display_options['filters']['tnid_1']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid_1']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid_1']['group'] = 2;
  /* Filter criterion: Traduzione dei contenuti: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 2;
  $handler->display->display_options['path'] = 'si7_paginastatica_tnid_0';

  /* Display: paginastatica tnid no 0 */
  $handler = $view->new_display('services', 'paginastatica tnid no 0', 'services_10');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['operator'] = '!=';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 1;
  $handler->display->display_options['path'] = 'si7_paginastatica_tnid_no_0';

  /* Display: sardegnasuap pagina tnid0 */
  $handler = $view->new_display('services', 'sardegnasuap pagina tnid0', 'services_11');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Pagine collegate */
  $handler->display->display_options['fields']['field_pagine_collegate']['id'] = 'field_pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['table'] = 'field_data_field_pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['field'] = 'field_pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['label'] = 'pagine_collegate';
  $handler->display->display_options['fields']['field_pagine_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_pagine_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_pagine_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sardegnasuap_pagina' => 'sardegnasuap_pagina',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 2;
  /* Filter criterion: Traduzione dei contenuti: Source translation */
  $handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['table'] = 'node';
  $handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
  $handler->display->display_options['filters']['source_translation']['operator'] = '1';
  $handler->display->display_options['filters']['source_translation']['group'] = 2;
  $handler->display->display_options['path'] = 'si7_sardegnasuappagina_tnid_0';

  /* Display: sardegnasuap pagina tnid no 0 */
  $handler = $view->new_display('services', 'sardegnasuap pagina tnid no 0', 'services_12');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenuto: Titolo */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Contenuto: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Contenuto: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  /* Campo: Contenuto: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'services';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'skip_text_format' => 1,
  );
  /* Campo: Contenuto: Immagine */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'immagine';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'services';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  /* Campo: Contenuto: Risorse collegate */
  $handler->display->display_options['fields']['field_risorse_collegate']['id'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['table'] = 'field_data_field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['field'] = 'field_risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['label'] = 'risorse_collegate';
  $handler->display->display_options['fields']['field_risorse_collegate']['type'] = 'services';
  $handler->display->display_options['fields']['field_risorse_collegate']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_risorse_collegate']['delta_offset'] = '0';
  /* Campo: Contenuto: Documenti allegati */
  $handler->display->display_options['fields']['field_documenti_allegati']['id'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['table'] = 'field_data_field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['field'] = 'field_documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['label'] = 'documenti_allegati';
  $handler->display->display_options['fields']['field_documenti_allegati']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documenti_allegati']['type'] = 'services';
  $handler->display->display_options['fields']['field_documenti_allegati']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
  );
  $handler->display->display_options['fields']['field_documenti_allegati']['delta_offset'] = '0';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'percorso';
  /* Campo: Contenuto: Pubblicato */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'pubblicato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Contenuto: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Campo: Contenuto: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Campo: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['fields']['tnid']['id'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['table'] = 'node';
  $handler->display->display_options['fields']['tnid']['field'] = 'tnid';
  $handler->display->display_options['fields']['tnid']['label'] = 'tnid';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_1']['id'] = 'path_1';
  $handler->display->display_options['fields']['path_1']['table'] = 'node';
  $handler->display->display_options['fields']['path_1']['field'] = 'path';
  $handler->display->display_options['fields']['path_1']['label'] = 'percorso';
  /* Campo: Contenuto: Percorso */
  $handler->display->display_options['fields']['path_2']['id'] = 'path_2';
  $handler->display->display_options['fields']['path_2']['table'] = 'node';
  $handler->display->display_options['fields']['path_2']['field'] = 'path';
  /* Campo: Contenuto: Categoria */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = 'tags';
  $handler->display->display_options['fields']['field_tag']['type'] = 'services';
  $handler->display->display_options['fields']['field_tag']['settings'] = array(
    'data_element_key' => '',
    'skip_safe' => 0,
    'skip_empty_values' => 0,
    'term_name' => 1,
  );
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenuto: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sardegnasuap_pagina' => 'sardegnasuap_pagina',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Traduzione dei contenuti: Translation set node ID */
  $handler->display->display_options['filters']['tnid']['id'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['table'] = 'node';
  $handler->display->display_options['filters']['tnid']['field'] = 'tnid';
  $handler->display->display_options['filters']['tnid']['operator'] = '!=';
  $handler->display->display_options['filters']['tnid']['value']['value'] = '0';
  $handler->display->display_options['filters']['tnid']['group'] = 1;
  $handler->display->display_options['path'] = 'si7_sardegnasuappagina_tnid_no_0';
  $translatables['api_notizia_it'] = array(
    t('Master'),
    t('API_notizia_it'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('created'),
    t('changed'),
    t('lingua'),
    t('it'),
    t('body'),
    t('immagine_principale'),
    t('risorse_collegate'),
    t('documenti_allegati'),
    t('percorso'),
    t('pubblicato'),
    t('uid'),
    t('nid'),
    t('tnid'),
    t('Percorso'),
    t('tags'),
    t('data_evento'),
    t('[field_data_evento-value] 00:00:00'),
    t('notizia tnid0'),
    t('Voci per pagina'),
    t('- Tutto -'),
    t('Scostamento'),
    t('«'),
    t('‹ indietro'),
    t('avanti ›'),
    t('»'),
    t('immagine'),
    t('notizia tnid no 0'),
    t('evento tnid no 0'),
    t('evento tnid0'),
    t('articolo tnid0'),
    t('articolo tnid no 0'),
    t('sardegnasuap tnid0'),
    t('sardegnasuap tnid no 0'),
    t('pagina statica tnid0'),
    t('pagine_collegate'),
    t('paginastatica tnid no 0'),
    t('sardegnasuap pagina tnid0'),
    t('sardegnasuap pagina tnid no 0'),
  );
  $export['api_notizia_it'] = $view;

  $view = new view();
  $view->name = 'api_termini';
  $view->description = '';
  $view->tag = 'si8';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'API_termini';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API_termini';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Termine della tassonomia: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Termine della tassonomia: ID Termine */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'tid';
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Campo: Termine della tassonomia: Descrizione del termine */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['label'] = 'tid_descrizione';
  /* Campo: Vocabolario della tassonomia: Nome */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'vid_name';
  /* Campo: Vocabolario della tassonomia: Nome ad uso interno */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  /* Campo: Vocabolario della tassonomia: ID vocabolario */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = 'vid';
  /* Campo: Vocabolario della tassonomia: Descrizione */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'vid_descrizione';
  /* Campo: Termine della tassonomia: Termine della tassonomia UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Filter criterion: Vocabolario della tassonomia: Nome ad uso interno */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tags' => 'tags',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'si7_termini';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'si7_termini_cvs';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $translatables['api_termini'] = array(
    t('Master'),
    t('API_termini'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('tid'),
    t('.'),
    t('tid_descrizione'),
    t('vid_name'),
    t('Nome ad uso interno'),
    t('vid'),
    t(','),
    t('vid_descrizione'),
    t('uuid'),
    t('Services'),
    t('Data export'),
  );
  $export['api_termini'] = $view;

  $view = new view();
  $view->name = 'api_utenti';
  $view->description = '';
  $view->tag = 'si8';
  $view->base_table = 'users';
  $view->human_name = 'API_utenti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'API_utenti';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'altro';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Applica';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Ripristina';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordina per';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Disc';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  /* Campo: Utente: Utente UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'users';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  /* Campo: Utente: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'email';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Campo: Utente: Nome */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['fields']['name']['format_username'] = FALSE;
  /* Campo: Utente: Attivo */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'stato';
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Campo: Utente: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Utente: Ultimo accesso */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['label'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'custom';
  $handler->display->display_options['fields']['access']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Utente: Ultimo login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['label'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'custom';
  $handler->display->display_options['fields']['login']['custom_date_format'] = 'U';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'privatemsg_current_day';
  /* Campo: Utente: Lingua */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'users';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lingua';
  $handler->display->display_options['fields']['language']['link_to_user'] = FALSE;
  /* Campo: Utente: Ruoli */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Campo: Utente: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Sort criterion: Utente: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Utente: Attivo */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Utente: Ruoli */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Utente: Nome */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['operator'] = 'not in';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => 0,
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'si7_utenti_page';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'si7_utenti';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'users_export';
  $translatables['api_utenti'] = array(
    t('Master'),
    t('API_utenti'),
    t('altro'),
    t('Applica'),
    t('Ripristina'),
    t('Ordina per'),
    t('Asc'),
    t('Disc'),
    t('uuid'),
    t('email'),
    t('name'),
    t('stato'),
    t('created'),
    t('access'),
    t('login'),
    t('lingua'),
    t('Ruoli'),
    t('uid'),
    t('Page'),
    t('Services'),
    t('Data export'),
  );
  $export['api_utenti'] = $view;

  return $export;
}
