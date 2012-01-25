<?php

/**
 * @file
 * Main help definition.
 */

function _security_review_help() {
  drupal_add_js(drupal_get_path('module', 'security_review') . '/security_review.js', 'module', 'header');
  $output = '';
  $output .= '<p>';
  $output .= t('You should take the security of your site very seriously.
    Fortunately, Drupal is fairly secure by default.
    The Security Review module automates many of the easy-to-make mistakes that render your site insecure, however it does not automatically make your site impenetrable.
    You should give care to what modules you install and how you configure your site and server.
    Be mindful of who visits your site and what features you expose for their use.');
  $output .= '</p>';
  $output .= '<p>';
  $output .= t('You can read more about securing your site in the <a href="!do">drupal.org handbooks</a> and on <a href="!cd">DrupalScout.com</a>.
    There are also additional modules you can install to secure or protect your site. Be aware though that the more modules you have running on your site the greater (usually) attack area you expose.',
    array('!do' => 'http://drupal.org/security/secure-configuration', '!cd' => 'http://drupalscout.com'));
  $output .= '</p>';
  $output .= '<p>' . l(t('Drupal.org Handbook: Introduction to security-related contrib modules'), 'http://drupal.org/node/382752') . '</p>';
  /*$output .= '<h3>' . t('Contrib modules for additional security and strength') . '</h3>';
  $output .= '<p>' . t('There are a wealth of modules on drupal.org.') . '</p>';
  $items[] = _security_review_help_ssl();
  $items[] = _security_review_help_spam();
  $output .= theme('item_list', $items);*/
  return $output;
}

function _security_review_help_ssl() {
  $description = t('The transfer of data between the visitor on your site and you Drupal installation can be secured through encryption.');
  $element = array(
    'problem' => t("Secure and private communication"),
    'type' => 'ssl',
    'description' => $description,
    'options' => array(
      array(
        'name' => 'Secure Pages',
        'href' => 'http://drupal.org/project/securepages',
      ),
    ),
  );
  return theme('security_review_help_options', $element);
}

function _security_review_help_spam() {
  $element = array(
    'problem' => t("Spammers and spam content"),
    'type' => 'spam',
    'description' => t('Spammers use automated tools and systems to bombarge your site with unsollicited content. You can use modules to prevent the submission of such content.'),
    'options' => array(
      array(
        'name' => 'CAPTCHA',
        'href' => 'http://drupal.org/project/captcha',
      ),
    ),
  );
  return theme('security_review_help_options', $element);
}

function theme_security_review_help_options($element) {
  $output .= '<div class="sec-rev-help-option">';
  $output .= l($element['problem'], 'admin/reports/security-review/help', array('fragment' => $element['type'], 'attributes' => array('class' => 'sec-rev-help-dyn')));
  $output .= '<div class="sec-rev-help-content">';
  $output .= '<p>' . $element['description'] . '</p>';
  foreach ($element['options'] as $option) {
    $items[] = l($option['name'], $option['href']);
  }
  $output .= theme('item_list', $items);
  $output .= '</div>';
  $output .= '</div>';
  return $output;
}

function security_review_check_file_perms_help($result = NULL) {
  $element['title'] =  t("Web server file system permissions");
  $element['descriptions'][] = t("It is dangerous to allow the web server to write to files inside the document root of your server. Doing so would allow Drupal to write files that could then be executed. An attacker might use such a vulnerability to take control of your site. An exception is the files directory which Drupal needs permission to write to in order to provide features like file attachments.");
  $element['descriptions'][] = t("In addition to inspecting files, this test attempts to create and write to files. Look in your security_review module directory on the server for files named file_write_test.YYYYMMDDHHMMSS and for a file called IGNOREME.txt which gets a timestamp appended to it if it is writeable.</p>");
  $element['descriptions'][] = t("<a href='!link'>Read more about file system permissions in the handbooks.</a>", array('!link' => url('http://drupal.org/node/244924')));

  $last_check = security_review_get_last_check('security_review', 'file_perms');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($result)) {
      $result = security_review_check_file_perms();
    }
    $element['findings']['descriptions'][] = t('It is recommended that the following files or directories be corrected.');
    foreach ($result['value'] as $file) {
      $element['findings']['items'][] = array(
        'safe' => check_plain($file),
        'raw' => $file,
      );
    }
  }
  return $element;
}

function security_review_check_input_formats_help($result = NULL) {
  $element['title'] = t('Allowed HTML tags in input formats');
  $element['descriptions'][] = t("Certain HTML tags can allow an attacker to take control of your site. Drupal's input format system makes use of a set filters to run on incoming text. The 'HTML Filter' strips out harmful tags and Javascript events and should be used on all formats accessible by untrusted users.");
  $element['descriptions'][] = t("<a href='!link'>Read more about Drupal's input formats in the handbooks.</a>", array('!link' => url('http://drupal.org/node/224921')));
  $last_check = security_review_get_last_check('security_review', 'input_formats');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($result)) {
      $result = security_review_check_input_formats();
    }
    if (!empty($result['value']['tags'])) {
      $element['findings']['descriptions'][] = t('<a href="!link">Review your input formats.</a>', array('!link' => url('admin/settings/filters')));
      $element['findings']['descriptions'][] = t('It is recommended you remove the following tags from roles accessible by untrusted users.');
      foreach ($result['value']['tags'] as $tag) {
        $element['findings']['items'][] = array(
          'safe' => $tag, // Tag doesn't need filtering cause it's not user-defined.
          'raw' => $tag,
        );
      }
    }
    elseif (!empty($result['value']['formats'])) {
      $element['findings']['descriptions'][] = t('The following formats are usable by untrusted roles and do not filter allowed HTML tags. The default filter will have all roles checked.');
      foreach ($result['value']['formats'] as $id => $name) {
        $element['findings']['items'][] = array(
          'html' => l($name, 'admin/settings/filters/' . $id),
          'safe' => check_plain($name),
          'raw' => $name,
        );
      }
    }
  }
  return $element;
}

function security_review_check_php_filter_help($result = NULL) {
  $element['title'] = t('PHP Input Format');
  $element['descriptions'][] = t("Drupal's PHP Input Format allows for the interpretation and execution of PHP code via user-supplied input. Because this input runs in the context of Drupal itself it has access to everything Drupal does.");
  $last_check = security_review_get_last_check('security_review', 'untrusted_php');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($result)) {
      $result = security_review_check_php_filter();
    }
    if (!empty($result['value']['formats'])) {
      $element['findings']['descriptions'][] = t('The following formats are usable by untrusted roles and allow use of the PHP evaluator. The default filter will have all roles checked. You should edit the format to remove PHP use.');
      foreach ($result['value']['formats'] as $id => $name) {
        $element['findings']['items'][] = array(
          'html' => l($name, 'admin/settings/filters/' . $id),
          'safe' => check_plain($name),
          'raw' => $name,
        );
      }
    }
  }
  return $element;
}

function security_review_check_private_files_help($result = NULL) {
  $element['title'] = t('Private files');
  $element['descriptions'][] = t("If you have Drupal's private files feature enabled you should move the files directory outside of the web server's document root. While Drupal will control serving files when requested by way of content if a user knows the actual system path they can circumvent Drupal's private files feature. You can protect against this by specifying a files directory outside of the webserver root.");
  $last_check = security_review_get_last_check('security_review', 'private_files');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('Your files directory is not outside of the server root.');
    $element['findings']['descriptions'][] = t('<a href="!link">Edit the files directory path.</a>', array('!link' => url('admin/settings/file-system')));
  }
  return $element;
}

function security_review_check_upload_extensions_help($result = NULL) {
  $element['title'] = t('Allowed upload extensions');
  $element['descriptions'][] = t("The upload module allows users to attach files to content. Some extensions are considered dangerous because the files can be evaluated and then executued in the browser. A malicious user could use this opening to gain control of your site.");
  $last_check = security_review_get_last_check('security_review', 'upload_extensions');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($result)) {
      $result = security_review_check_upload_extensions();
    }
    $element['findings']['descriptions'][] = t('<a href="!link">Alter file upload settings.</a>', array('!link' => url('admin/settings/uploads')));
    $element['findings']['descriptions'][] = t('The following extensions are considered unsafe and should be removed or limited from use. Or, be sure you are not granting untrusted users the ability to upload files.');
    foreach ($result['value'] as $extension) {
      $element['findings']['items'][] = array(
        'raw' => $extension,
        'safe' => check_plain($extension),
      );
    }
  }
  return $element;
}

function security_review_check_query_errors_help($result = NULL) {
  $element['title'] = t('Abundant query errors from the same IP');
  $element['descriptions'][] = t("Database errors triggered from the same IP may be an artifact of a malicious user attempting to probe the system for weaknesses like SQL injection or information disclosure.");
  $last_check = security_review_get_last_check('security_review', 'query_errors');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following IPs were observed with an abundance of query errors.');
    if (is_null($result)) {
      $result = security_review_check_query_errors();
    }
    foreach ($result['value'] as $ip) {
      $element['findings']['items'][] = array(
        'safe' => check_plain($ip),
        'raw' => $ip,
      );
    }
  }
  return $element;
}

function security_review_check_failed_logins_help($results = NULL) {
  $element['title'] = t('Abundant failed logins from the same IP');
  $element['descriptions'][] = t("Failed login attempts from the same IP may be an artifact of a malicous user attempting to brute-force their way onto your site as an authenticated user to carry out nefarious deeds. ");

  $last_check = security_review_get_last_check('security_review', 'failed_logins');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following IPs were observed with an abundance of failed login attempts.');
    if (is_null($results)) {
      $results = security_review_check_failed_logins();
    }
    foreach ($results['value'] as $ip) {
      $element['findings']['items'][] = array(
        'safe' => check_plain($ip),
        'raw' => $ip,
      );
    }
  }
  return $element;
}

function security_review_check_admin_permissions_help($results = NULL) {
  $element['title'] = t('Admin permissions');
  $element['descriptions'][] = t("Drupal's permission system is extensive and allows for varying degrees of control. Certain permissions would allow a user total control, or the ability to escalate their control, over your site and should only be granted to trusted users.");
  $element['descriptions'][] = t('<a href="!link">Read more about trusted vs. untrusted roles and permissions on DrupalScout.com.</a>', array('!link' => url('http://drupalscout.com/knowledge-base/importance-user-roles-and-permissions-site-security')));
  $last_check = security_review_get_last_check('security_review', 'admin_permissions');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($results)) {
      $results = security_review_check_admin_permissions();
    }
    $element['findings']['descriptions'][] = t('You have granted untrusted roles the following administrative permissions that you should revoke.');
    foreach ($results['value'] as $rid => $permissions) {
      $role = db_fetch_array(db_query("SELECT name FROM {role} WHERE rid = %d", $rid));
      $permissions = implode(', ', $permissions);
      $item = t('<a href="!link">@name</a> has %permissions', array('!link' => url('admin/user/permissions/' . $rid), '@name' => $role['name'], '%permissions' => $permissions));
      $safe = t('@name has %permissions', array('@name' => $role['name'], $permissions));
      $element['findings']['items'][] = array(
        'html' => $item,
        'safe' => $safe,
        'raw' => $role['name'] . ':' . $permissions,
      );
    }
  }
  return $element;
}

function security_review_check_nodes_help($results = NULL) {
  $element['title'] = t('Dangerous tags in nodes');
  $element['descriptions'][] = t("Script and PHP code in the body of nodes does not align with Drupal best practices and may be a vulnerability if an untrusted user is allowed to edit such content. It is recommended you remove such content from the body of nodes.");

  $last_check = security_review_get_last_check('security_review', 'nodes');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following nodes potentially have dangerous tags. The links go to the edit page.');
    if (is_null($results)) {
      $results = security_review_check_nodes(); // Don't pass $last_check because timestamp is wrong now.
    }
    $destination = drupal_get_destination();
    foreach ($results['value'] as $problem_nid) {
      // There is no access checking. We state that the use of this module should be granted to trusted users only.
      $node = node_load(current($problem_nid));
      $description = key($problem_nid);
      $html = t('@description found in <a href="!link">@title</a>', array('@description' => $description, '!link' => url('node/' . $node->nid . '/edit', array('query' => $destination)), '@title' => $node->title));
      $url = url('node/' . $node->nid . '/edit');
      $element['findings']['items'][] = array(
        'html' => $html,
        'safe' => t('@description in !url', array('@description' => $description, '!url' => $url)),
        'raw' => $description . ':' . $url,
      );
    }
    $element['findings']['pager'] = theme('pager', NULL, 50);
  }

  return $element;
}

function security_review_check_comments_help($results = NULL) {
  $element['title'] = t('Dangerous tags in comments');
  $element['descriptions'][] = t("There is little reason for script and PHP tags to be in comments (unless they are code examples) and could be in use maliciously.");

  $last_check = security_review_get_last_check('security_review', 'comments');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following comments have dangerous tags. The links go to the edit page.');
    if (is_null($results)) {
      $results = security_review_check_comments(); // Don't pass $last_check because timestamp is wrong now.
    }
    $destination = drupal_get_destination();
    foreach ($results['value'] as $cid => $nid) {
      $comment = _comment_load($cid);
      // There is no access checking. We state that the use of this module should be granted to trusted users only.
      $node = node_load($nid);
      $title = t('!subject on !title', array('!subject' => $comment->subject, '!title' => $node->title));
      $element['findings']['items'][] = array(
        'html' => l($title, 'comment/edit/' . $cid, array('query' => $destination)),
        'safe' => check_plain($title),
        'raw' => $title . ':' . url('comment/edit/' . $cid),
      );
    }
    $element['findings']['pager'] = theme('pager', NULL, 20);
  }

  return $element;
}

function security_review_check_name_passwords_help($results = NULL) {
  $element['title'] = t('Username as password');
  $element['descriptions'][] = t("Users with elevated access on the site (trusted users) who have a their account password the same as their username. It is recommended you enforce a password strength policy to avoid an attacker easily gaining access to your site.");

  $last_check = security_review_get_last_check('security_review', 'name_passwords');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following users have extremely weak passwords. The links go to the edit page.');
    if (is_null($results)) {
      $results = security_review_check_name_passwords(); // Don't pass $last_check because timestamp is wrong now.
    }
    foreach ($results['value'] as $uid => $name) {
      $element['findings']['items'][] = array(
        'html' => l($name, 'user/' . $uid . '/edit'),
        'safe' => check_plain($name),
        'raw' => $name,
      );
    }
    $element['findings']['pager'] = theme('pager', NULL, 20);
  }

  return $element;
}

/**
 * Help for the Security Review check for allowed extensions on Filefield fields.
 */
function security_review_check_filefield_extensions_help($results = NULL) {
  $element['title'] = t('Filefield allowed uploads');
  $element['descriptions'][] = t("The Filefield module allows users to attach files to content. Some extensions are considered dangerous because the files can be evaluated and then executued in the browser. A malicious user could use this opening to gain control of your site.");
  $last_check = security_review_get_last_check('filefield', 'filefield_extensions');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following Filefield fields have unsafe extensions allowed for uploaded files.');
    if (is_null($results)) {
      $results = security_review_check_filefield_extensions();
    }
    $fields = filefield_get_field_list();
    foreach ($results['value'] as $field_name => $value) {
      $edit_url = "admin/content/node-type/" . str_replace('_', '-', $fields[$field_name]['type_name']) . "/fields/$field_name";
      if (isset($value['empty']) && $value['empty'] == TRUE) {
        $html = t('<a href="!url">%field_name</a> has all extensions allowed and should be corrected to limit uploads to safe extensions only', array('%field_name' => $field_name, '!url' => url($edit_url)));
        $item = t('%field_name has all extensions allowed and should be corrected to limit uploads to safe extensions only', array('%field_name' => $field_name));
        $element['findings']['items'][] = array(
          'html' => $html, 
          'safe' => $item,
          'raw' => $field_name
        );
      }
      else {
        $extensions = implode(', ', $value['extensions']);
        $html = t('<a href="!url">%field_name</a> has the unsafe extensions: @extensions', array('%field_name' => $field_name, '@extensions' => $extensions, '!url' => url($edit_url)));
        $item = t('%field_name has the unsafe extensions: @extensions', array('%field_name' => $field_name, '@extensions' => $extensions));
        $element['findings']['items'][] = array(
          'html' => $html,
          'safe' => $item,
          'raw' => $field_name . ' : ' . $extensions 
        );
      }
    }
  }
  return $element;
}

function security_review_check_views_access_help($results = NULL) {
  $element['title'] = t('Views access');
  $element['descriptions'][] = t("Views can check if the user is allowed access to the content. It is recommended that all Views implement some amount of access control, at a minimum checking for the permission 'access content'.");

  $last_check = security_review_get_last_check('views', 'access');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    $element['findings']['descriptions'][] = t('The following View displays do not check access.');
    if (is_null($results)) {
      $results = security_review_check_views_access();
    }
    foreach ($results['value'] as $view => $displays) {
      $url = 'admin/build/views/edit/' . $view;
      foreach ($displays as $display) {
        $item = $view . ': ' . $display;
        $element['findings']['items'][] = array(
          'html' => l($item, $url, array('fragment' => $display)),
          'safe' => $item, // View names are safe.
          'raw' => $item,
        );
      }
    }
  }

  return $element;
}

function security_review_check_email_passwords_help($results = NULL) {
  $element['title'] = t('Password included in user emails');
  $element['descriptions'][] = t("Drupal offers a '!password' token that can be included in email templates, but it should not be used because it can be stolen.");

  $last_check = security_review_get_last_check('security_review', 'password_in_emails');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($results)) {
      $results = security_review_check_email_passwords();
    }

    if (empty($results['value'])) {
      $element['findings']['descriptions'][] = t('No user email templates include the !password token.');
    }
    else {
      $element['findings']['descriptions'][] = t('The following email templates include the !password token. Visit the !user_settings page to modify these templates.', array('!user_settings' => l('User Settings', 'admin/user/settings')));
      // It'd be best to print non-machine names for these templates.
      foreach ($results['value'] as $template_name) {
        $element['findings']['items'][] = array(
          'safe' => $template_name,
          'raw' => $template_name,
        );
      }
    }
  }
  return $element;
}

function security_review_check_error_reporting_help($result = NULL) {
  $element['title'] = t('Error reporting');
  $element['descriptions'][] = t('As a form of hardening your site you should avoid information disclosure. Drupal by default prints errors to the screen and writes them to the log. Error messages disclose the full path to the file where the error occured.');
  
  $last_check = security_review_get_last_check('security_review', 'error_reporting');
  if ($last_check['skip'] == '1') {
    $element['findings']['descriptions'][] = _security_review_check_skipped($last_check);
  }
  elseif ($last_check['result'] == '0') {
    if (is_null($result)) {
      $result = security_review_check_error_reporting();
    }
    $element['findings']['descriptions'][] = t('You have error reporting set to both the screen and the log.');
    $element['findings']['descriptions'][] = t('<a href="!link">Alter error reporting settings.</a>', array('!link' => url('admin/settings/error-reporting')));
  }
  return $element;
}