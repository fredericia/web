<?php

define("DATE_FORMAT", variable_get('date_format_os2web_base_date_only', 'd-m-Y'));


function bellcom_elasticsearch_kle_settings_page(){
    drupal_add_library('system', 'ui.datepicker');
    drupal_add_js(array('bellcom_elasticsearch' => array(
        'dateFormat' => bellcom_elasticsearch_get_js_date_format()
    )), 'setting');
    drupal_add_js(drupal_get_path('module', 'bellcom_elasticsearch') .'/js/bellcom_elasticsearch.js', 'file');

    return views_embed_view("bellcom_elasticsearch_kle_terms");
}

function bellcom_elasticsearch_kle_settings_page_weight_form($tid){
    $kle = bellcom_elasticsearch_get_kle_by_tid($tid);

    if ($kle) {
	$weight = $kle->weight;
	if ($kle->from_date){
	    $from_date = date_create_from_format('Y-m-d H:i:s', $kle->from_date);
	    $from_date = date(DATE_FORMAT, date_timestamp_get($from_date));
	}
	if ($kle->until_date){
	    $until_date = date_create_from_format('Y-m-d H:i:s', $kle->until_date);
	    $until_date = date(DATE_FORMAT, date_timestamp_get($until_date));
	}
    } else {
	$weight = 1;
	$from_date = '';
	$until_date = '';
    }

    $html = '<div class="row_kle">
	    <input type="hidden" class="tid_id" value="' . $tid . '" >
	    From&nbsp;&nbsp;&nbsp;
	    <input type="text" class="form-text datepicker from locked" size="10" value="' . $from_date . '" disabled>
	    Until&nbsp;&nbsp;&nbsp;
	    <input type="text" class="form-text datepicker until locked" size="10" value="' . $until_date . '" disabled>
	    Weight&nbsp;&nbsp;&nbsp;
	    <input type="text" class="weight form-text locked" size="5" value="' . $weight . '" disabled>&nbsp;&nbsp;&nbsp;
	    <a class="edit-link" href="#">Edit</a>
	    <a class="submit-link" style="display: none;" href="#">Submit</a><span class="submitted" style="display: none;">OK</span>
	    </div>';
    print $html;
}

function bellcom_elasticsearch_update_kle($tid, $weight, $from, $until){
    $fields = array('weight' => $weight);

    if ($from && $from != 0){
	$from_date = date_create_from_format(DATE_FORMAT, $from);
	if (is_object($from_date))
	    $fields['from_date'] = date("Y-m-d 0:0:0", date_timestamp_get($from_date));
    } else
	$fields['from_date'] = null;

    if ($until && $until != 0){
	$until_date = date_create_from_format(DATE_FORMAT, $until);
	if (is_object($until_date))
	    $fields['until_date'] = date("Y-m-d 23:59:59", date_timestamp_get($until_date));
    } else
	$fields['until_date'] = null;

    if (bellcom_elasticsearch_get_kle_by_tid($tid)) { //not found, means that it was neven added
	$rowCount = db_update('bellcom_elasticsearch_kle')
	    ->fields($fields)
	    ->condition('tid', $tid)
	    ->execute();
    } else {
	$fields['tid'] = $tid;
	$rowCount = db_insert('bellcom_elasticsearch_kle')
	    ->fields($fields)
	    ->execute();
    }
}

function bellcom_elasticsearch_get_kle_by_tid($tid){
    $kle = db_select('bellcom_elasticsearch_kle', 'i')
	->fields('i')
	->condition('tid', $tid)
	->execute()
	->fetchAll();

    return array_pop($kle);
}

function bellcom_elasticsearch_phrase_catcher_settings_page(){
    drupal_add_library('system', 'ui.datepicker');
    drupal_add_js(array('bellcom_elasticsearch' => array(
        'dateFormat' => bellcom_elasticsearch_get_js_date_format()
    )), 'setting');
    drupal_add_js(drupal_get_path('module', 'bellcom_elasticsearch') .'/js/bellcom_elasticsearch.js', 'file');

    $html = '';

    //add form
    $form = drupal_get_form('bellcom_elasticsearch_phrase_catcher_form');
    $html .= drupal_render($form);

    //display table
    $header = array(
      array(
	'data' => t('Phrase'),
	'field' => 't.phrase',
      ),
      array(
	'data' => t('Exclusive'),
	'field' => 't.exclusive',
      ),
      array(
	'data' => t('Nid'),
	'field' => 't.nid',
      ),
      array(
	'data' => t('From'),
	'field' => 't.from_date',
      ),
      array(
	'data' => t('Until'),
	'field' => 't.until_date',
      ),
    array(
	'data' => t('Weight'),
	'field' => 't.weight',
      ),
    );

    $query = db_select('bellcom_elasticsearch_phrase_catcher', 't')->extend('TableSort');
    $query->fields('t');

    $result = $query->orderByHeader($header)->execute();

    $rows = array();
    foreach ($result as $row) {
	$from_date = '';
	$until_date = '';
	if ($row->from_date){
	    $from_date = date_create_from_format('Y-m-d H:i:s', $row->from_date);
	    $from_date = date(DATE_FORMAT, date_timestamp_get($from_date));
	}
	if ($row->until_date){
	    $until_date = date_create_from_format('Y-m-d H:i:s', $row->until_date);
	    $until_date = date(DATE_FORMAT, date_timestamp_get($until_date));
	}
	$exclusive = $row->exclusive ? 'checked' : '';

	$data = array();
	$data[] = '<span class="display-field display-phrase">' . $row->phrase . '</span><input type="text" value="' . $row->phrase . '" class="form-text edit-field phrase" style="display: none;">';
	$data[] = '<input type="checkbox" class="display-input exclusive" disabled ' . $exclusive  . '>';
	$data[] = '<span class="display-field display-nid">' . $row->nid . '</span><input type="text" value="' . $row->nid . '" class="form-text edit-field nid" style="display: none;">';
	$data[] = '<span class="display-field display-from">' . $from_date . '</span><input type="text" value="' . $from_date . '" class="form-text edit-field from datepicker" style="display: none;">';
	$data[] = '<span class="display-field display-until">' . $until_date . '</span><input type="text" value="' . $until_date . '" class="form-text edit-field until datepicker" style="display: none;">';
	$data[] = '<span class="display-field display-weight">' . $row->weight . '</span><input type="text" value="' . $row->weight . '" class="form-text edit-field weight" style="display: none;">';
	$data[] .= '<a href="#" class="edit-link">Edit</a><a class="submit-link" style="display: none;" href="#">Submit</a><span class="submitted" style="display: none;">OK</span>';
	$rows[] = array('data' => $data, 'class' => array('row_phrase'), 'data-id' => array($row->id));
    }

    $header[] = array('data' => 'Edit');

    // Build the table for the nice output.
    $build['tablesort_table'] = array(
      '#theme' => 'table',
      '#header' => $header,
      '#rows' => $rows,
    );
    $html .= drupal_render($build);

    return $html;
}

function bellcom_elasticsearch_phrase_catcher_form($form, &$form_state){
    // Provide a text field.
    $form['phrase'] = array(
      '#title' => t('New phrase'),
      '#type' => 'textfield',
      '#required' => TRUE,
    );

    // Provide a submit button.
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => 'Add phrase',
    );

    return $form;
}

function bellcom_elasticsearch_phrase_catcher_form_submit($form, $form_state){
    $rowCount = db_insert('bellcom_elasticsearch_phrase_catcher')
	    ->fields(array(
		    'phrase' => $form_state['values']['phrase']
	    ))
	    ->execute();
}

function bellcom_elasticsearch_update_phrase($id){
    $fields = array(
	'phrase' => $_GET['phrase'],
	'exclusive' => ($_GET['exclusive'] === 'true')? 1 : 0,
	'nid' => $_GET['nid'],
	'weight' => $_GET['weight']
    );

    $from = $_GET['from'];
    if ($from && $from != 0){
	$from_date = date_create_from_format(DATE_FORMAT, $from);
	if (is_object($from_date))
	    $fields['from_date'] = date("Y-m-d 0:0:0", date_timestamp_get($from_date));
    } else
	$fields['from_date'] = null;

    $until = $_GET['until'];
    if ($until && $until != 0){
	$until_date = date_create_from_format(DATE_FORMAT, $until);
	if (is_object($until_date))
	    $fields['until_date'] = date("Y-m-d 23:59:59", date_timestamp_get($until_date));
    } else
	$fields['until_date'] = null;

    db_update('bellcom_elasticsearch_phrase_catcher')
	    ->fields($fields)
	    ->condition('id', $id)
	    ->execute();
}

function bellcom_elasticsearch_synonyms_settings_page($form, &$form_state) {
    $form['bellcom_elasticsearch_synonyms_active'] = array(
	'#type' => 'checkbox',
	'#title' => t('Use synonyms'),
	'#default_value' => variable_get('bellcom_elasticsearch_synonyms_active', false),
    );

    $form['bellcom_elasticsearch_synonyms'] = array(
	'#title' => t('Synonyms'),
	'#type' => 'textarea',
	'#description' => t('One synomym group per line, look at %link for help in formatting', array('%link' => 'https://www.elastic.co/guide/en/elasticsearch/guide/current/synonym-formats.html')),
	'#states' => array(
	    'visible' => array(
		':input[name="bellcom_elasticsearch_synonyms_active"]' => array('checked' => TRUE),
	    ),
	),
	'#default_value' => variable_get('bellcom_elasticsearch_synonyms')
    );

    $default_cluster = elasticsearch_connector_get_default_connector();
    $cluster_indicies = elasticsearch_connector_get_indices_options($default_cluster);

    $form['bellcom_elasticsearch_synonyms_cluser'] = array(
	'#type' => 'hidden',
	'#value' => $default_cluster
    );

    $form['bellcom_elasticsearch_synonyms_index'] = array(
	'#type' => 'select',
	'#title' => t('Select index'),
	'#options' => $cluster_indicies,
	'#default_value' => variable_get('bellcom_elasticsearch_synonyms_index'),
	'#description' => t('Select index, which the synonyms should be applied to'),
    );

    $form['bellcom_elasticsearch_synonyms_file_path'] = array(
	'#type' => 'textfield',
	'#title' => t('Synonyms file path'),
	'#default_value' => variable_get('bellcom_elasticsearch_synonyms_file_path', 'public://'),
	'#description' => t('File with filename "synonyms.txt" will be saved in this path. Must be writtable'),
	'#field_suffix' => '/synonyms.txt',
    );

    $form['#submit'][] = 'bellcom_elasticsearch_synonyms_submit';

    return system_settings_form($form);
}

function bellcom_elasticsearch_synonyms_submit($form, &$form_state) {
    module_load_include('inc', 'bellcom_elasticsearch', 'includes/bellcom_elasticsearch.api.index');

    try {
	$cluster_id = $form_state['values']['bellcom_elasticsearch_synonyms_cluser'];
	$cluster = elasticsearch_connector_cluster_load($cluster_id);
	if ($cluster) {
	    $client = elasticsearch_connector_load_library($cluster);
	    $index_id = $form_state['values']['bellcom_elasticsearch_synonyms_index'];

	    if ($form_state['values']['bellcom_elasticsearch_synonyms_active']) {

		//saving file
		$data = $form_state['values']['bellcom_elasticsearch_synonyms'];
		$path = $form_state['values']['bellcom_elasticsearch_synonyms_file_path'];
		if (substr($path, -1) !== '/') {
		    $path .= '/';
		}
		$path .= 'synonyms.txt';

		file_save_data($data, $path, FILE_EXISTS_REPLACE);

		//activated
		try {
		    bellcom_elasticsearch_api_index_close($client, $index_id);
		    if ($path) {
			bellcom_elasticsearch_api_add_analyzer($client, $index_id, drupal_realpath($path));
		    }
		}  catch (Exception $e) {
		    drupal_set_message(t('Error while updating index: ') . $e->getMessage(), 'warning');
		    watchdog('bellcom_elasticsearch', $e->getMessage(), WATCHDOG_WARNING);
		} finally {
		    bellcom_elasticsearch_api_index_open($client, $index_id);
		}
	    } else {
		//deactivated
		try {
		    bellcom_elasticsearch_api_index_close($client, $index_id);
		    bellcom_elasticsearch_api_add_analyzer($client, $index_id, '');
		} catch (Exception $e) {
		    drupal_set_message(t('Error while updating index: ') . $e->getMessage(), 'warning');
		    watchdog('bellcom_elasticsearch', $e->getMessage(), WATCHDOG_WARNING);
		} finally {
		    bellcom_elasticsearch_api_index_open($client, $index_id);
		}
	    }
	    drupal_set_message('Index is updated');
	}
    } catch (Exception $e) {
	drupal_set_message(t('Could not update synonyms: ') . $e->getMessage(), 'warning');
	watchdog('bellcom_elasticsearch', $e->getMessage(), WATCHDOG_WARNING);
    }
}

function bellcom_elasticsearch_get_js_date_format(){
    $SYMBOLS_MATCHING = array(
        // Day
        'd' => 'dd',
        'D' => 'D',
        'j' => 'd',
        'l' => 'DD',
        'N' => '',
        'S' => '',
        'w' => '',
        'z' => 'o',
        // Week
        'W' => '',
        // Month
        'F' => 'MM',
        'm' => 'mm',
        'M' => 'M',
        'n' => 'm',
        't' => '',
        // Year
        'L' => '',
        'o' => '',
        'Y' => 'yy',
        'y' => 'y',
        // Time
        'a' => '',
        'A' => '',
        'B' => '',
        'g' => '',
        'G' => '',
        'h' => '',
        'H' => '',
        'i' => '',
        's' => '',
        'u' => ''
    );
    $jqueryui_format = "";
    $escaping = false;
    $php_format = DATE_FORMAT;
    for($i = 0; $i < strlen($php_format); $i++)
    {
        $char = $php_format[$i];
        if($char === '\\') // PHP date format escaping character
        {
            $i++;
            if($escaping) $jqueryui_format .= $php_format[$i];
            else $jqueryui_format .= '\'' . $php_format[$i];
            $escaping = true;
        }
        else
        {
            if($escaping) { $jqueryui_format .= "'"; $escaping = false; }
            if(isset($SYMBOLS_MATCHING[$char]))
                $jqueryui_format .= $SYMBOLS_MATCHING[$char];
            else
                $jqueryui_format .= $char;
        }
    }
    return $jqueryui_format;
}
