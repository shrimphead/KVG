query="UPDATE drupal_users SET pass = MD5('$__ADMINPASSWORD__') WHERE uid =1 limit  1";
echo ${query} | mysql -u$__DBUSERNAME__ -p$__DBPASSWORD__ -hmysqlhost $__DBNAME__

