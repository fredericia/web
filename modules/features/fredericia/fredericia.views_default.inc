<?php
/**
 * @file
 * fredericia.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fredericia_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'a_aa_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'a-å index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'a-å index';
  $handler->display->display_options['css_class'] = 'hvidbg';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/a-aa-index">Alle</a> - <a href="/a-aa-index/a">A</a> - <a href="/a-aa-index/b">B</a> - <a href="/a-aa-index/c,d">CD</a> - <a href="/a-aa-index/e">E</a> - <a href="/a-aa-index/f">F</a> - <a href="/a-aa-index/g">G</a> - <a href="/a-aa-index/h">H</a> - <a href="/a-aa-index/i">I</a> - <a href="/a-aa-index/j">J</a> - <a href="/a-aa-index/k">K</a> - <a href="/a-aa-index/l">L</a> - <a href="/a-aa-index/m">M</a> - <a href="/a-aa-index/n">N</a> - <a href="/a-aa-index/o">O</a> - <a href="/a-aa-index/p">P</a> - <a href="/a-aa-index/q,r">QR</a> - <a href="/a-aa-index/s">S</a> - <a href="/a-aa-index/t">T</a> - <a href="/a-aa-index/u,v,w">UVW</a> - <a href="/a-aa-index/x,y,z,æ,ø,å">XYZÆØÅ</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Titel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Indhold: Titel */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['title']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['title'] = 'Index - %1';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['break_phrase'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_borger_dk_article' => 'os2web_borger_dk_article',
    'os2web_base_contentpage' => 'os2web_base_contentpage',
    'webform' => 'webform',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'a-aa-index';
  $translatables['a_aa_index'] = array(
    t('Master'),
    t('a-å index'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<a href="/a-aa-index">Alle</a> - <a href="/a-aa-index/a">A</a> - <a href="/a-aa-index/b">B</a> - <a href="/a-aa-index/c,d">CD</a> - <a href="/a-aa-index/e">E</a> - <a href="/a-aa-index/f">F</a> - <a href="/a-aa-index/g">G</a> - <a href="/a-aa-index/h">H</a> - <a href="/a-aa-index/i">I</a> - <a href="/a-aa-index/j">J</a> - <a href="/a-aa-index/k">K</a> - <a href="/a-aa-index/l">L</a> - <a href="/a-aa-index/m">M</a> - <a href="/a-aa-index/n">N</a> - <a href="/a-aa-index/o">O</a> - <a href="/a-aa-index/p">P</a> - <a href="/a-aa-index/q,r">QR</a> - <a href="/a-aa-index/s">S</a> - <a href="/a-aa-index/t">T</a> - <a href="/a-aa-index/u,v,w">UVW</a> - <a href="/a-aa-index/x,y,z,æ,ø,å">XYZÆØÅ</a>'),
    t('Alle'),
    t('Index - %1'),
    t('Page'),
  );
  $export['a_aa_index'] = $view;

  $view = new view();
  $view->name = 'fredericia_news_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fredericia News view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Arkiveringsdato (field_os2web_news_page_archive) */
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['id'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['field'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['group'] = 2;
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Arkiveringsdato (field_os2web_news_page_archive) */
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['id'] = 'field_os2web_news_page_archive_value_1';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['field'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-6 col-xs-12 switch_elements all';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['type'] = 'convert';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '7';

  /* Display: Block_tab_udbud */
  $handler = $view->new_display('block', 'Block_tab_udbud', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-primary" href="/nyheder/udbud">Alle</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. M. Y';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Primære billede */
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['id'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['field'] = 'field_os2web_base_field_lead_img';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['alter']['text'] = '<div class="col-md-3 col-sm-6 col-xs-4">
[field_os2web_base_field_lead_img]
</div>
<div class="col-md-9 col-sm-6 col-xs-8">
<div>[created]</div>
<h4>[title]</h4>
</div>
<div class="clearfix">';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['empty'] = '<div>[created]</div>
<h4>[title]</h4>
<div class="clearfix">';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_lead_img']['separator'] = '';
  /* Felt: Indhold: Intro / Resume (maks 2 linier!) */
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['id'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['table'] = 'field_data_field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['field'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-12 col-sm-12 col-xs-12 quicktabs-nyheder-row">
   <div class="col-md-12 quicktabs-row-border">
     <div>[created]</div>
     <h4>[title]</h4>
      [field_os2web_base_field_summary]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['text'] = 'Alle ';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['path'] = 'nyheder/[field_os2web_news_page_type] ';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_class'] = 'btn btn-primary';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['block_description'] = 'tab';

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'day';
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'month';
  /* Felt: Indhold: Intro / Resume (maks 2 linier!) */
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['id'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['table'] = 'field_data_field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['field'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="front-s-news-item front-s-news-item-">
  <div class="front-s-news-item-text clearfix">
       <div class="col-md-2 col-sm-2 col-xs-2">
            <div class="news-text-date">
                  <span class="news-date-day">[created]</span>
                   <span class="news-date-month">[created_1]</span>
             </div>
        </div>

       <div class="col-md-10 col-sm-10 col-xs-10">
               [title]
              <div>
                    [field_os2web_base_field_summary]      
              </div>
        </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['path'] = 'nyheder/%';

  /* Display: Block_tab_Byrådsmøde */
  $handler = $view->new_display('block', 'Block_tab_Byrådsmøde', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-primary" href="http://portal.svendborg.dk/SitePages/Home.aspx?RootFolder=%2Fdagsordener%2FByr%C3%A5det%20%28%C3%85ben%29&FolderCTID=0x01200064623F16242C5144BA0C582FFB25C83700D598BBF91722064299CA3465D8735E1E&View={3793E986-5C71-40A7-8019-F38A3E43F653}c" target="_blank">Alle byrådsmøder</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. M. Y';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Intro / Resume (maks 2 linier!) */
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['id'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['table'] = 'field_data_field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['field'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-12 col-sm-12 col-xs-12 quicktabs-nyheder-row">
   <div class="col-md-12 quicktabs-row-border">
     <div>[created]</div>
     <h4>[title]</h4>
      [field_os2web_base_field_summary]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['text'] = 'Se Alle';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['path'] = 'nyheder/[field_os2web_news_page_type] ';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['block_description'] = 'tab';

  /* Display: frontpage and carousel */
  $handler = $view->new_display('block', 'frontpage and carousel', 'front');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-6 col-xs-12 switch_elements all';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Primære billede (field_os2web_base_field_lead_img:fid) */
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['id'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['field'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['group'] = 1;
  /* Filterkriterie: Indhold: Arkiveringsdato (field_os2web_news_page_archive) */
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['id'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['field'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['group'] = 2;
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Arkiveringsdato (field_os2web_news_page_archive) */
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['id'] = 'field_os2web_news_page_archive_value_1';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['field'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['group'] = 2;
  /* Filterkriterie: Indhold: Forfremmet til forsiden */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 3;
  $handler->display->display_options['block_description'] = 'frontpage and carousel';

  /* Display: frontpage and carousel small */
  $handler = $view->new_display('block', 'frontpage and carousel small', 'block_3');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-4 col-sm-4 col-xs-12 switch_elements all';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Primære billede (field_os2web_base_field_lead_img:fid) */
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['id'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['table'] = 'field_data_field_os2web_base_field_lead_img';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['field'] = 'field_os2web_base_field_lead_img_fid';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_os2web_base_field_lead_img_fid']['group'] = 1;
  /* Filterkriterie: Indhold: Arkiveringsdato (field_os2web_news_page_archive) */
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['id'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['field'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['group'] = 2;
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Arkiveringsdato (field_os2web_news_page_archive) */
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['id'] = 'field_os2web_news_page_archive_value_1';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['table'] = 'field_data_field_os2web_news_page_archive';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['field'] = 'field_os2web_news_page_archive_value';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_os2web_news_page_archive_value_1']['group'] = 2;
  /* Filterkriterie: Indhold: Forfremmet til forsiden */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 3;
  /* Filterkriterie: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['value'] = array(
    5188 => '5188',
  );
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['vocabulary'] = 'os2web_news_page_newstypes';
  $handler->display->display_options['block_description'] = 'frontpage and carousel';

  /* Display: Block_tab_høringer */
  $handler = $view->new_display('block', 'Block_tab_høringer', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-primary" href="/nyheder/hoeringer">Alle</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. M. Y';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Intro / Resume (maks 2 linier!) */
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['id'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['table'] = 'field_data_field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['field'] = 'field_os2web_base_field_summary';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_summary']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="col-md-12 col-sm-12 col-xs-12 quicktabs-nyheder-row">
   <div class="col-md-12 quicktabs-row-border">
     <div>[created]</div>
     <h4>[title]</h4>
      [field_os2web_base_field_summary]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Nyhedstype */
  $handler->display->display_options['fields']['field_os2web_news_page_type']['id'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['field'] = 'field_os2web_news_page_type';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['text'] = 'Alle ';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['path'] = 'nyheder/[field_os2web_news_page_type] ';
  $handler->display->display_options['fields']['field_os2web_news_page_type']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_news_page_type']['settings'] = array(
    'linked_field' => array(
      'linked' => 0,
      'destination' => '',
      'advanced' => array(
        'title' => '',
        'target' => '',
        'class' => '',
        'rel' => '',
        'text' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['block_description'] = 'tab';
  $translatables['fredericia_news_view'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Block'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Block_tab_udbud'),
    t('<a class="btn btn-primary" href="/nyheder/udbud">Alle</a>'),
    t('<div class="col-md-3 col-sm-6 col-xs-4">
[field_os2web_base_field_lead_img]
</div>
<div class="col-md-9 col-sm-6 col-xs-8">
<div>[created]</div>
<h4>[title]</h4>
</div>
<div class="clearfix">'),
    t('<div>[created]</div>
<h4>[title]</h4>
<div class="clearfix">'),
    t('<div class="col-md-12 col-sm-12 col-xs-12 quicktabs-nyheder-row">
   <div class="col-md-12 quicktabs-row-border">
     <div>[created]</div>
     <h4>[title]</h4>
      [field_os2web_base_field_summary]
  </div>
</div>'),
    t('Alle '),
    t('tab'),
    t('Side'),
    t('<div class="front-s-news-item front-s-news-item-">
  <div class="front-s-news-item-text clearfix">
       <div class="col-md-2 col-sm-2 col-xs-2">
            <div class="news-text-date">
                  <span class="news-date-day">[created]</span>
                   <span class="news-date-month">[created_1]</span>
             </div>
        </div>

       <div class="col-md-10 col-sm-10 col-xs-10">
               [title]
              <div>
                    [field_os2web_base_field_summary]      
              </div>
        </div>
  </div>
</div>'),
    t('Block_tab_Byrådsmøde'),
    t('<a class="btn btn-primary" href="http://portal.svendborg.dk/SitePages/Home.aspx?RootFolder=%2Fdagsordener%2FByr%C3%A5det%20%28%C3%85ben%29&FolderCTID=0x01200064623F16242C5144BA0C582FFB25C83700D598BBF91722064299CA3465D8735E1E&View={3793E986-5C71-40A7-8019-F38A3E43F653}c" target="_blank">Alle byrådsmøder</a>'),
    t('Se Alle'),
    t('frontpage and carousel'),
    t('frontpage and carousel small'),
    t('Block_tab_høringer'),
    t('<a class="btn btn-primary" href="/nyheder/hoeringer">Alle</a>'),
  );
  $export['fredericia_news_view'] = $view;

  $view = new view();
  $view->name = 'meeting';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Meeting';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_os2web_meetings_type']['id'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['table'] = 'field_data_field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['field'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Felt: Indhold: Full doc */
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['id'] = 'field_os2web_meetings_full_doc';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['table'] = 'field_data_field_os2web_meetings_full_doc';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['field'] = 'field_os2web_meetings_full_doc';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['label'] = 'Hent som fil';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['type'] = 'track_da_files_file_default';
  $handler->display->display_options['fields']['field_os2web_meetings_full_doc']['settings'] = array(
    'force_download' => 0,
    'custom_link_text' => '',
  );
  /* Felt: Indhold: Lokation */
  $handler->display->display_options['fields']['field_os2web_meetings_location']['id'] = 'field_os2web_meetings_location';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['table'] = 'field_data_field_os2web_meetings_location';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['field'] = 'field_os2web_meetings_location';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_location']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Dagsorden publishing date */
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['id'] = 'field_os2web_meetings_dags_date';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['table'] = 'field_data_field_os2web_meetings_dags_date';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['field'] = 'field_os2web_meetings_dags_date';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['label'] = 'Dagsorden publiceret';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_dags_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Felt: Indhold: Referat publishing date */
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['id'] = 'field_os2web_meetings_ref_date';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['table'] = 'field_data_field_os2web_meetings_ref_date';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['field'] = 'field_os2web_meetings_ref_date';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['label'] = 'Referat publiceret';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['element_class'] = 'col-sm-8';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['element_label_class'] = 'col-sm-4';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['element_wrapper_class'] = 'row';
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_ref_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Nid',
    ),
  );
  $translatables['meeting'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Udvalg'),
    t('Dato'),
    t('Hent som fil'),
    t('Lokation'),
    t('Dagsorden publiceret'),
    t('Referat publiceret'),
    t('Alle'),
    t('Content pane'),
    t('View panes'),
  );
  $export['meeting'] = $view;

  $view = new view();
  $view->name = 'os2web_term_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2Web Term News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Se flere nyheder';
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="col-xs-12 text-right">
  <a class="btn btn-success" title="Se nyheder publiceret under %1" href="/aktuelt/nyheder/!1">Se flere %1 nyheder</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID (med dybde) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '9';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filterkriterie: Indhold: Forfrem til (field_os2web_base_field_promote) */
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['id'] = 'field_os2web_base_field_promote_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['table'] = 'field_data_field_os2web_base_field_promote';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['field'] = 'field_os2web_base_field_promote_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['value'] = array(
    5220 => '5220',
  );
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['expose']['operator_id'] = 'field_os2web_base_field_promote_tid_op';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['expose']['label'] = 'Forfrem til (field_os2web_base_field_promote)';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['expose']['operator'] = 'field_os2web_base_field_promote_tid_op';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['expose']['identifier'] = 'field_os2web_base_field_promote_tid';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_base_field_promote_tid']['vocabulary'] = 'os2web_base_tax_promoteto';

  /* Display: News */
  $handler = $view->new_display('panel_pane', 'News', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Har taksonomiterm ID (med dybde)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['os2web_term_news'] = array(
    t('Master'),
    t('Se flere nyheder'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div class="col-xs-12 text-right">
  <a class="btn btn-success" title="Se nyheder publiceret under %1" href="/aktuelt/nyheder/!1">Se flere %1 nyheder</a>
</div>'),
    t('Alle'),
    t('Forfrem til (field_os2web_base_field_promote)'),
    t('News'),
    t('mere'),
    t('View panes'),
  );
  $export['os2web_term_news'] = $view;

  $view = new view();
  $view->name = 'os2web_term_promoted_nodes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OS2Web Term Promoted Nodes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-4 col-md-3';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Felt: Unikke relaterede links */
  $handler->display->display_options['fields']['field_os2web_base_field_related']['id'] = 'field_os2web_base_field_related';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['table'] = 'field_data_field_os2web_base_field_related';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['field'] = 'field_os2web_base_field_related';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_related']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['settings'] = array(
    'node_reference_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_related']['delta_offset'] = '0';
  /* Felt: Felt: Spotboxe */
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['id'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['table'] = 'field_data_field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['field'] = 'field_os2web_base_field_spotbox';
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Term promoted nodes */
  $handler = $view->new_display('panel_pane', 'Term promoted nodes', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Unikke relaterede links */
  $handler->display->display_options['fields']['field_os2web_base_field_related']['id'] = 'field_os2web_base_field_related';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['table'] = 'field_data_field_os2web_base_field_related';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['field'] = 'field_os2web_base_field_related';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_related']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_os2web_base_field_related']['settings'] = array(
    'node_reference_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_related']['delta_offset'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );
  $translatables['os2web_term_promoted_nodes'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Spotboxe'),
    t('Alle'),
    t('Term promoted nodes'),
    t('View panes'),
  );
  $export['os2web_term_promoted_nodes'] = $view;

  $view = new view();
  $view->name = 'os2web_term_subterms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OS2Web Term Subterms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Ord i ordforråd: Overordnet ord */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'parent';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';

  /* Display: Subterms */
  $handler = $view->new_display('panel_pane', 'Subterms', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-6 col-sm-3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['os2web_term_subterms'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Overordnet element'),
    t('Alle'),
    t('Subterms'),
    t('View panes'),
  );
  $export['os2web_term_subterms'] = $view;

  return $export;
}
