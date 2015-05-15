 1067  wget -q -O - https://dl-ssl.google.com/linux/linux_signing_key.pub | sudo apt-key add -
 1068  sudo sh -c 'echo "deb http://dl.google.com/linux/chrome/deb/ stable main" >> /etc/apt/sources.list.d/google-chrome.list'
 1069  sudo apt-get update
 1070  sudo apt-get install google-chrome-unstable 
 1071  ./test-coverage-report.pl --input-file quux.t --browser-cmd=/usr/bin/google-chrome --browser-args '--new-window'
 1072  cd POD2-RU/
 1073  perl /home/mishin/github/vim_plus_devel_cover/vim_plus_devel_cover_files/test-coverage-report.pl -f lib/POD2/RU.pm  --browser-cmd=/usr/bin/google-chrome --browser-args '--new-window'
 1074  type /usr/bin/google-chrome
 1075  type google-chrome
 1076  export HARNESS_PERL_SWITCHES="-MDevel::Cover"
 1077  prove -Ilib
 1078  prove -Ilib t
 1079  prove -Ilib t/*
 1080  vim t/001_basic/05_print_pods.t
 1081  vim lib/POD2/RU.pm 
 1082  vim /home/mishin/github/vim_plus_devel_cover/vim_plus_devel_cover_files/test-coverage-report.pl 
 1083  perl /home/mishin/github/vim_plus_devel_cover/vim_plus_devel_cover_files/test-coverage-report.pl -f lib/POD2/RU.pm  --browser-cmd=/usr/bin/google-chrome --browser-args '--new-window'
 1084  сщмук
 1085  cover
 1086  cover -ignore_re '[.]t$'
 1087  cover -test
 1088  cover -delete
 1089  HARNESS_PERL_SWITCHES=-MDevel::Cover make test
 1090  cover
 1091  ./Build testcover
 1092  lt
 1093  perl Build.PL 
 1094  ./Build testcover
 1095  cd --
 1096  cd -3
 1097  git status 
 1098  git commit -a -m 'change path to prove'
 1099  git push
 1100  git pull
 1101  git push
 1102  cd --
 1103  cd -1
 1104  lt
 1105  perl -v
 1106  lt
 1107  milla clean
 1108  lt
 1109  vim Build
 1110  rm Build
 1111  lt
 1112  git status 
 1113  rm t/001_basic/01_search_perlfunc.t.ERR t/001_basic/01_search_perlfunc.t.tdy
 1114  git status 
 1115  perl -v
 1116  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1117  cover
 1118  cover -ignore_re '[.]t$'
 1119  cover -report coveralls
 1120  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1121  vim t/001_basic/05_print_pods.t
 1122  perl t/001_basic/05_print_pods.t
 1123  prove t/001_basic/05_print_pods.t
 1124  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1125  cover
 1126  cover -ignore_re '[.]t$'
 1127  cover -ignore_re '[.]t$|prove'
 1128  vim lib/POD2/RU.pm 
 1129  perl -MPOD2::RU -e 'print_pods'
 1130  vim lib/POD2/RU.pm 
 1131  perl -MPOD2::RU -e 'print_pod'
 1132  perl -MPOD2::RU -E 'say print_pod'
 1133  perl -MPOD2::RU -E '  print_pod('pod_foo', 'pod_baz');'
 1134  perl -MPOD2::RU -E 'print_pod('pod_foo', 'pod_baz')'
 1135  perl -Ilib t/001_basic/04_print_pod.t 
 1136  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1137  cover -ignore_re '[.]t$|prove'
 1138  vim lib/POD2/RU.pm 
 1139  grep -R 'unless' *
 1140  vim lib/POD2/RU.pm 
 1141  vim t/001_basic/03_prepare_encoding_console.t 
 1142  lt
 1143  lt t/001_basic/0
 1144  lt t/001_basic/0*
 1145  де
 1146  lt
 1147  cd github/
 1148  cd Devel--Cover/
 1149  git pull
 1150  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1151  milla dist
 1152  lt
 1153  vim dist.ini 
 1154  milla test
 1155  cover
 1156  grep -R 'Coverage Summary' *
 1157  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -Ilib -lrsv t
 1158  cover -ignore_re '[.]t$|prove'
 1159  cover -ignore_re '[.]t$'
 1160  grep -R 'Coverage Summary' *
 1161  grep -R 'subroutine' *
 1162  grep -R 'Coverage Summary' *
 1163  sudo cpanm  POD2-RU
 1164  sudo cpanm  POD2::RU
 1165  perldoc -L RU perlre
 1166  perldoc -L RU perlrequick
 1167  perldoc  perlrequick
 1168  perldoc  -f map
 1169  cd github/POD-to-RU/
 1170  git pull
 1171  lt
 1172  vim Changes 
 1173  prove
 1174  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -Ilib -lrsv t
 1175  cover -ignore_re '[.]t$|prove'
 1176  vim +52 lib/POD2/RU.pm 
 1177  vim t/001_basic/04_print_pod.t 
 1178  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -Ilib -lrsv t
 1179  cover -ignore_re '[.]t$|prove'
 1180  git status 
 1181  vim Changes 
 1182  rm 0rf cover_db/
 1183  rm -rf cover_db/
 1184  git sta
 1185  git status 
 1186  git add .
 1187  git commit -m 'поправил utf тесты'
 1188  git push
 1189  milla release
 1190  vim README.md 
 1191  git status 
 1192  git add .
 1193  git commit -m 'add LICENSE META.json README.md странный глюк'
 1194  git push
 1195  milla release
 1196  git push origin :refs/tags/5.18.0.1.30
 1197  git pull
 1198  export PERLDOC_POD2="ru"
 1199  perldoc perl
 1200  perldoc perlre
 1201  perldoc perlretut
 1202  perlbug
 1203  cd github/POD-to-RU/
 1204  git pull
 1205  git diff
 1206  git status
 1207  cd ../presentation/
 1208  git pull
 1209  vim check_utf.t
 1210  vim check_utf.t 
 1211  cd ../POD-to-RU/
 1212  lt
 1213  vim t/001_basic/03_prepare_encoding_console.t 
 1214  perl t/001_basic/03_prepare_encoding_console.t 
 1215  vim t/001_basic/03_prepare_encoding_console.t 
 1216  perl t/001_basic/03_prepare_encoding_console.t 
 1217  prove -Ilib -lrsv t
 1218  vim t/001_basic/03_prepare_encoding_console.t 
 1219  vim t/001_basic/04_print_pod.t 
 1220  prove -Ilib -lrsv t
 1221  set LANG = C
 1222  set LC_ALL = C
 1223  prove -Ilib -lrsv t
 1224  vim t/001_basic/04_print_pod.t 
 1225  vim t/001_basic/03_prepare_encoding_console.t 
 1226  prove -Ilib -lrsv t
 1227  git status
 1228  vim t/001_basic/03_prepare_encoding_console.t 
 1229  vim t/001_basic/04_print_pod.t 
 1230  prove -Ilib -lrsv t
 1231  lt
 1232  git status
 1233  vim Changes 
 1234  git status 
 1235  git commit -a -m 'борьба с кодировкой из-за которой падают тесты при неправильной локали, не utf'
 1236  git push
 1237  milla clean
 1238  milla test
 1239  milla release
 1240  milla clean
 1241  git status
 1242  git add .
 1243  git status
 1244  git commit -m 'new release'
 1245  git push
 1246  milla release
 1247  lt
 1248  cd t
 1249  cd 001_basic/
 1250  lt
 1251  vim 02_pod_info.t 
 1252  vim 03_prepare_encoding_console.t 
 1253  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1254  ..
 1255  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1256  ..
 1257  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1258  cd --
 1259  cd -2
 1260  vim 03_prepare_encoding_console.t 
 1261  vim 04_print_pod.t 
 1262  ...
 1263  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1264  milla test
 1265  vim t/001_basic/03_prepare_encoding_console.t 
 1266  perl -Ilib t/001_basic/04_print_pod.t 
 1267  sudo cpanm  PerlIO::locale
 1268  perl -Ilib t/001_basic/04_print_pod.t 
 1269  perl -Ilib t/001_basic/03_prepare_encoding_console.t 
 1270  perl -Ilib t/001_basic/04_print_pod.t 
 1271  perl -Ilib t/001_basic/03_prepare_encoding_console.t 
 1272  perl -Ilib t/001_basic/04_print_pod.t 
 1273  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1274  cover
 1275  prove
 1276  milla test
 1277  vim Changes 
 1278  git status 
 1279  milla clean
 1280  git status 
 1281  rm t/001_basic/cover_db/
 1282  rm -rf t/001_basic/cover_db/
 1283  git status 
 1284  rm -rf cover_db/ t/cover_db/
 1285  git status 
 1286  git add .
 1287  git commit -m 'бог со 100% test coverage'
 1288  milla
 1289  milla perltidy:
 1290  git status 
 1291  milla 
 1292  milla  build
 1293  milla 
 1294  milla  perltidy
 1295  vim ./t/001_basic/01_search_perlfunc.t.ERR
 1296  vim ./t/001_basic/01_search_perlfunc.t
 1297  rm ./t/001_basic/01_search_perlfunc.t.ERR
 1298  rm ./t/001_basic/02_pod_info.t.ERR
 1299  git status 
 1300  milla test
 1301  milla clean
 1302  git status 
 1303  git add .
 1304  git commit -m 'perltidy не дружит с utf'
 1305  perl -MIPC::Open3 -e 'print '
 1306  vim Changes 
 1307  milla releas
 1308  milla release
 1309  perl -MIPC::Open3 -e 'print IPC::Open3:;version'
 1310  perl -MIPC::Open3 -e 'print IPC::Open3::version'
 1311  perl -MIPC::Open3 -e 'print IPC::Open3::VERSION'
 1312  perl -e 'use IPC::Open3 9e9'
 1313  perl -e 'use PerlIO::locale 9e9'
 1314  perl -MIPC::Open3 -e 'print PerlIO::locale::VERSION'
 1315  perl -MPerlIO::locale -e 'print PerlIO::locale::VERSION'
 1316  perldoc -l PerlIO::locale
 1317  vim /usr/local/lib/perl/5.18.2/PerlIO/locale.pm
 1318  perl -e 'use I18N::Langinfo 9e9'
 1319  git status 
 1320  git add cpanfile 
 1321  git commit -m 'add dependencies'
 1322  git push
 1323  git status 
 1324  git add .
 1325  git commit -m 'add Test::Output to cpanfile'
 1326  git push
 1327  git status 
 1328  git add cpanfile 
 1329  git commit -m 'cpanf'
 1330  git push
 1331  git commit -a -m 'cpanf'
 1332  git push
 1333  git commit -a -m 'cpanf'
 1334  git push
 1335  git commit -a -m 'cpanf';git push
 1336  git push
 1337  git commit -a -m 'cpanf';git push
 1338  vim Changes 
 1339  git status 
 1340  git add Changes 
 1341  git commit -m 'поправил версии требуемых модулей'
 1342  пше згыр
 1343  git push
 1344  milla release
 1345  vim lib/POD2/RU.pm 
 1346  git commit -a -m 'change email';git push
 1347  git push
 1348  vim g_and_p_trans.pl
 1349  cd github/
 1350  find . -name scandeps.pl
 1351  де
 1352  lt
 1353  cd POD2-RU/
 1354  git pull
 1355  vim t/000_compile.t 
 1356  vim t/001_basic/01_search_perlfunc.t 
 1357  vim t/000_compile.t 
 1358  vim t/001_basic/01_search_perlfunc.t 
 1359  vim t/001_basic/02_pod_info.t 
 1360  PERL5OPT=-MDevel::Cover=-coverage,statement,branch,condition,path,subroutine prove -lrsv t
 1361  lt
 1362  cd ~/Downloads/
 1363  lt
 1364  find . -name scandeps.pl
 1365  extract Module-ScanDeps-1.18.tar.gz 
 1366  lt
 1367  cd Module-ScanDeps-1.18/
 1368  lt
 1369  perl -c script/scandeps.pl 
 1370  perl -Ilib -c script/scandeps.pl 
 1371  vim script/scandeps.pl
 1372  cd ~/github/
 1373  cp -R ~/Downloads/Module-ScanDeps-1.18 .
 1374  lt
 1375  cd POD2-RU/
 1376  lt ../Module-ScanDeps-1.18/script/
 1377  lt ../Module-ScanDeps-1.18/script/scandeps.pl
 1378  perl -c ../Module-ScanDeps-1.18/script/scandeps.pl
 1379  perl  ../Module-ScanDeps-1.18/script/scandeps.pl
 1380  perl  ../Module-ScanDeps-1.18/script/scandeps.pl *.pm
 1381  perl  ../Module-ScanDeps-1.18/script/scandeps.pl lib/POD2/RU.pm 
 1382  vim li
 1383  perl  ../Module-ScanDeps-1.18/script/scandeps.pl t/000_compile.t 
 1384  perl  ../Module-ScanDeps-1.18/script/scandeps.pl t/001_basic/01_search_perlfunc.t 
 1385  perl  ../Module-ScanDeps-1.18/script/scandeps.pl t/001_basic/02_pod_info.t 
 1386  perl  ../Module-ScanDeps-1.18/script/scandeps.pl xt/01_synopsis.t 
 1387  perl  ../Module-ScanDeps-1.18/script/scandeps.pl xt/02_pod.t 
 1388  perl  ../Module-ScanDeps-1.18/script/scandeps.pl xt/*.t 
 1389  perl  ../Module-ScanDeps-1.18/script/scandeps.pl xt/07_kwalitee.t 
 1390  perltidy -b cpanfile 
 1391  lt
 1392  rm cpanfile.bak 
 1393  lt
 1394  milla clean
 1395  milla 
 1396  milla perltify
 1397  milla perltidy
 1398  rm ./t/001_basic/01_search_perlfunc.t.ERR ./t/001_basic/02_pod_info.t.ERR
 1399  git status
 1400  vim Changes 
 1401  git status
 1402  git add .
 1403  git commit -m 'почистил зависимости'
 1404  milla release
 1405  git rm cover_db/
 1406  rm -rf cover_db/
 1407  git status
 1408  git rm cover_db/*
 1409  git commit -m 'удалил ненужные cover_db'
 1410  git status
 1411  git push
 1412  milla release
 1413  git push origin :refs/tags/5.18.0.1.30
 1414  vim lib/POD2/RU.pm 
 1415  git add lib/POD2/RU.pm
 1416  git commit -m 'удали ненужную доку'
 1417  git push
 1418  cd github/
 1419  lt
 1420  cd www.ruby-lang.org/
 1421  git rebase -i HEAD~8
 1422  ..
 1423  git clone git@github.com:mishin/www.ruby-lang.org.git
 1424  git clone git@github.com:mishin/www.ruby-lang.org.git ruby-lang
 1425  cd ruby-lang/
 1426  git clone git@github.com:mishin/www.ruby-lang.org.git
 1427  lt
 1428  git pull
 1429  lt
 1430  git log
 1431  git rebase -i HEAD~8
 1432  git push
 1433  git push origin master --force
 1434  ..
 1435  lt
 1436  find . -name Critic
 1437  git clone 
 1438  git clone https://github.com/Perl-Critic/Perl-Critic.git
 1439  cd Perl-Critic/
 1440  git remote add upstream git://github.com/Perl-Critic/Perl-Critic.git
 1441  git remote update upstream
 1442  git checkout master
 1443  git rebase upstream/master
 1444  git push -f
 1445  ..
 1446  rm -rf Perl-Critic/
 1447  git pull https://github.com/mishin/Perl-Critic.git
 1448  git clone https://github.com/mishin/Perl-Critic.git
 1449  cd Perl-Critic/
 1450  git remote add upstream git://github.com/Perl-Critic/Perl-Critic.git
 1451  git remote update upstream
 1452  git checkout master
 1453  git rebase upstream/master
 1454  lt
 1455  vim /home/mishin/github/Perl-Critic/.git/rebase-apply/patch
 1456  lt
 1457  cd github/
 1458  lt
 1459  cd ruby-lang/
 1460  git log
 1461  git rebase -i HEAD~8
 1462  git push -f
 1463  ..
 1464  git pull https://github.com/mishin/Dist-Zilla-Plugin-Web.git
 1465  git clone  https://github.com/mishin/Dist-Zilla-Plugin-Web.git
 1466  cd Dist-Zilla-Plugin-Web/
 1467  lt
 1468  prove
 1469  sudo     dzil authordeps --missing | cpanm
 1470  sudo     dzil authordeps --missing | sudo cpanm
 1471  prove -Ilib
 1472  perl -Ilib t/010_bundle.t
 1473  vim t/010_bundle.t
 1474  perl -d -Ilib t/010_bundle.t
 1475  perl -e "112000-59114"
 1476  w
 1477  perl -d -Ilib t/010_bundle.t
 1478  milla
 1479  milla build
 1480  lt
 1481  milla
 1482  milla listdeps
 1483  milla
 1484  milla test
 1485  milla
 1486  Build installdeps
 1487  lt
 1488  lt Dist-Zilla-Plugin-Web-0.0.11
 1489  lt Dist-Zilla-Plugin-Web-0.0.11/META.json 
 1490  vim Dist-Zilla-Plugin-Web-0.0.11/META.json 
 1491  ..
 1492  lt
 1493  cd POD2-RU/
 1494  git pull
 1495  git log
 1496  cd --
 1497  cd ../presentation/
 1498  lt
 1499  git log
 1500  git log --stat
 1501  cp 01_test_git.pl git_commit.pl
 1502  vim git_commit.pl 
 1503  cd 4_trans/
 1504  getopt-example.pl
 1505  perl getopt-example.pl
 1506  perl getopt-example.pl --usage
 1507  perl google_trnslate.pl
 1508  perl -c perl_skel.pl 
 1509  perl perl_skel.pl 
 1510  cp perl_skel.pl > git_cm.pl
 1511  cp perl_skel.pl git_cm.pl
 1512  sudo cpanm  Regexp::Common::time
 1513  vim /home/mishin/.cpanm/work/1430553846.10951/build.log
 1514  sudo cpanm  Regexp::Common::time --force
 1515  lt
 1516  vim git_cm.pl 
 1517  perl -c git_cm.pl 
 1518  perl git_cm.pl 
 1519  perl git_cm.pl -v
 1520  vim git_cm.pl 
 1521  perl git_cm.pl -v
 1522  perl git_cm.pl
 1523  perl git_cm.pl -v
 1524  vim git_cm.pl 
 1525  perltidy -b git_cm.pl 
 1526  vim git_cm.pl 
 1527  perltidy -b git_cm.pl 
 1528  perl -c git_cm.pl
 1529  perl git_cm.pl
 1530  vim git_cm.pl 
 1531  perl git_cm.pl
 1532  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1533  vim git_cm.pl 
 1534  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1535  vim git_cm.pl 
 1536  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1537  vim git_cm.pl 
 1538  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1539  vim git_cm.pl 
 1540  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1541  vim git_cm.pl 
 1542  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1543  vim git_cm.pl 
 1544  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1545  vim git_cm.pl 
 1546  perl git_cm.pl  --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1547  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1548  vim git_cm.pl 
 1549  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1550  vim git_cm.pl 
 1551  perl 
 1552  perl git_cm.pl 
 1553  vim git_cm.pl 
 1554  perl git_cm.pl 
 1555  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1556  perltidy -b git_cm.pl
 1557  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1558  perltidy -b git_cm.pl
 1559  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1560  date
 1561  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1562  perltidy -b git_cm.pl
 1563  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015' -t
 1564  perltidy -b git_cm.pl
 1565  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015' -t
 1566  perl git_cm.pl  --date='15.05.2015' -m 'Hi YAPC Russia 2015'
 1567  git log
 1568  perl git_cm.pl  --date='29.07.2014' -m 'Hi YAPC Russia 2015'
 1569  git status
 1570  mv git_cm.pl git_commit.pl
 1571  perl -c git_commit.pl 
 1572  git add
 1573  git add .
 1574  git status 
 1575  git add ../git_commit.pl ../prove_param ../prove_tips.txt ../tmp_contrib
 1576  git status 
 1577  perl git_commit.pl  --date='30.07.2014' -m 'Hi YAPC Russia 2015'
 1578  git log
 1579  git status 
 1580  git push
 1581  git push -f
 1582  lt
 1583  vim git_commit.pl 
 1584  perl git_commit.pl 
 1585  git status 
 1586  git add git_commit.pl
 1587  git commit -m 'add license and cool author'
 1588  git push
 1589  vim git_commit.pl 
 1590  ltcd 4_trans/
 1591  cd 4_trans/
 1592  lt perl_skel.pl 
 1593  cx git_cm.pl
 1594  ./git_cm.pl 
 1595  ./git_cm.pl --date '15.05.2015' -m 'Hi YAPC Russia 2015'
 1596  perltidy -b git_cm.pl
 1597  vim fr.pl
 1598  perl -c fr.pl 
 1599  perl fr.pl 
 1600  vim fr.pl
 1601  perl fr.pl 
 1602  vim fr.pl
 1603  perl fr.pl 
 1604  vim auto.pl
 1605  perl auto.pl 
 1606  sudo cpanm  autolocale
 1607  perl auto.pl 
 1608  cd --
 1609  cd ...
 1610  ...
 1611  lt
 1612  git clone https://github.com/mishin/Regexp-Common-time.git
 1613  cd Regexp-Common-time/
 1614  prove -Ilib 
 1615  vim t/american.t 
 1616  perl t/american.t 
 1617  vim t/american.t 
 1618  perl t/american.t 
 1619  vim t/american.t 
 1620  perl t/american.t 
 1621  vim t/american.t 
 1622  perl t/american.t 
 1623  perl t/american.t |less
 1624  vim t/american.t 
 1625  perl t/american.t |less
 1626  perl t/american.t
 1627  vim t/american.t 
 1628  locale -a
 1629  nlsinfo
 1630  vim t/american.t 
 1631  perl t/american.t
 1632  echo $LANG
 1633  perl t/american.t
 1634  vim t/american.t 
 1635  perl t/american.t
 1636  vim t/american.t 
 1637  perl t/american.t
 1638  vim t/american.t 
 1639  perl t/american.t
 1640  vim t/american.t 
 1641  perltidy -b  t/american.t 
 1642  cat t/american.t.ERR
 1643  vim +30 t/american.t 
 1644  perltidy -b  t/american.t 
 1645  vim +30 t/american.t 
 1646  perl -c  t/american.t 
 1647  vim +35 t/american.t 
 1648  perl -c  t/american.t 
 1649  perl  t/american.t 
 1650  perl  t/american.t |less
 1651  vim +35 t/american.t 
 1652  perl  t/american.t |less
 1653  vim +35 t/american.t 
 1654  perl  t/american.t |less
 1655  vim +35 t/american.t 
 1656  perl  t/american.t |less
 1657  vim +35 t/american.t 
 1658  sudo cpanm  Locale::Messages
 1659  perl  t/american.t |less
 1660  vim +35 t/american.t 
 1661  perl  t/american.t |less
 1662  vim +35 t/american.t 
 1663  д
 1664  git log --pretty=format:"%h - %an, %ar : %s"
 1665  lt
 1666  vim .travis.yml 
 1667  vim +35 t/american.t 
 1668  git pull
 1669  git log
 1670  lt
 1671  cd t
 1672  git log
 1673  git status
 1674  git checkout american.t
 1675  vim american.t
 1676  perl -c american.t
 1677  ..
 1678  perl -=Ilib t/american.t
 1679  perl -Ilib t/american.t
 1680  perl -Ilib t/american.t|less
 1681  ..
 1682  git clone {
 1683  git clone https://github.com/hideo55/p5-autolocale.git
 1684  cd p5-
 1685  cd p5-autolocale/
 1686  prove
 1687  perl t/01_basic.t 
 1688  vim t/01_basic.t 
 1689  perl -Ilib  t/01_basic.t 
 1690  cd --
 1691  cd ../Regexp-Common-time/
 1692  perl -Ilib t/american.t
 1693  perl -Ilib t/american.t|head
 1694  perl -Ilib t/american.t|tail
 1695  perl -Ilib t/american.t > am.log
 1696  perl -Ilib t/american.t > am.log 2>&2
 1697  perl -Ilib t/american.t > am.log 2>&1
 1698  vim am.log 
 1699  perl -Ilib t/american.t > am.log 2>&1
 1700  vim am.log 
 1701  perl -Ilib t/american.t > am.log 2>&1
 1702  vim am.log 
 1703  perl -Ilib t/american.t
 1704  prove -Ilib t
 1705  git status 
 1706  rm am.log 
 1707  git status 
 1708  git add t/american.t 
 1709  prove -Ilib t
 1710  git status 
 1711  git commit -m 'make test pass, add setlocale'
 1712  git push
 1713  lt
 1714  lt t/
 1715  rm t/american.t.bak 
 1716  git status 
 1717  lt
 1718  vim .gitignore 
 1719  git status perl Makefile.PL
 1720  make
 1721  make test
 1722  make install
 1723  sudo make install
 1724  cd github/
 1725  lt
 1726  cd Regexp-Common-time/
 1727  lt
 1728  vim t/american.t 
 1729  prove -Ilib t
 1730  vim t/american.t 
 1731  prove -Ilib t
 1732  vim t/american.t 
 1733  prove -Ilib t
 1734  git status 
 1735  git add t/american.t 
 1736  git commit -m 'add Modern::Perl'
 1737  git push
 1738  lt
 1739  vim Makefile.PL 
 1740  git push
 1741  vim Makefile.PL 
 1742  git status 
 1743  git add Makefile.PL 
 1744  git commit -m 'add test prereq Modern::Perl'
 1745  git push
 1746  vim Makefile.PL 
 1747  vim t/american.t 
 1748  cd Downloads/
 1749  lt
 1750  extract Regexp-Common-time-0.07.tar.gz
 1751  type extresso
 1752  lt
 1753  cd Regexp-Common-time-0.07/
 1754  prove -Ilib t
 1755  vim t/american.t 
 1756  prove -Ilib t
 1757  ..
 1758  cd github/
 1759  lt
 1760  cd POD2-RU/
 1761  git pull
 1762  git status 
 1763  git add .
 1764  vim Changes 
 1765  git add .
 1766  git status 
 1767  git commit -m 'ох уж и забористы текст в perlre!'
 1768  git push
 1769  git status
 1770  milla clean
 1771  sudo cpan Dist::Zilla::Plugin::GitHubREADME::Badge
 1772  milla
 1773  milla build
 1774  git status
 1775  git add .
 1776  git commit -m 'сгенерили новый README.md'
 1777  git push
 1778  git status 
 1779  git add .
 1780  git commit -m 'change badge, correct link'
 1781  git push
 1782  lt
 1783  git status
 1784  milla clean
 1785  git status
 1786  milla release
 1787  git status
 1788  git add .
 1789  git commit -m 'добавил благодарности mail.ru и Павлу Щербинину'
 1790  git push
 1791  git status 
 1792  git add .
 1793  git commit -m 'fix typos'
 1794  git push
 1795  sudo cpan cpanm Statocles
 1796  sudo cpanm Statocles
 1797  cd Downloads/
 1798  lt
 1799  ..
 1800  cd github/
 1801  lt
 1802  cd Regexp-Common-time/
 1803  lt
 1804  prove -Ilib t
 1805  vim t/american.t 
 1806  prove -Ilib t
 1807  vim t/american.t 
 1808  perl -v
 1809  vim t/american.t 
 1810  prove -Ilib t
 1811  vim t/american.t 
 1812  prove -Ilib t
 1813  vim t/american.t 
 1814  prove -Ilib t
 1815  vim t/american.t 
 1816  prove -Ilib t
 1817  vim t/american.t 
 1818  prove -Ilib t
 1819  perl -v
 1820  vim t/american.t 
 1821  perl -v
 1822  prove -Ilib t
 1823  vim t/american.t 
 1824  prove -Ilib t
 1825  vim t/american.t 
 1826  prove -Ilib t
 1827  ..
 1828  cd 623371/
 1829  lt
 1830  . ./.bash_prompt 
 1831  ..
 1832  cd --
 1833  cd -2
 1834  lt
 1835  prove -Ilib t
 1836  vim t/american.t 
 1837  prove -Ilib t
 1838  ..
 1839  vim check_modules.pl
 1840  perltidy -b  check_modules.pl
 1841  vim check_modules.pl
 1842  perl -c check_
 1843  perl -c check_modules.pl
 1844  sudo cpanm Module::Info
 1845  perl -c check_modules.pl
 1846  perl check_modules.pl
 1847  cd --
 1848  cd -1
 1849  cd --
 1850  cd -2
 1851  vim t/american.t 
 1852  perl -Ilib t/american.t 
 1853  perl -Ilib -d t/american.t 
 1854  vim t/american.t 
 1855  perl -Ilib -d t/american.t 
 1856  prove -Ilib t
 1857  perl -Ilib -d t/american.t 
 1858  vim t/american.t 
 1859  perl -Ilib  t/american.t 
 1860  prove -Ilib t
 1861  vim t/american.t 
 1862  prove -Ilib t
 1863  vim t/american.t 
 1864  prove -Ilib t
 1865  vim t/american.t 
 1866  prove -Ilib t
 1867  perl -Ilib t/american.t 
 1868  perl -MModern::Perl -Ilib t/american.t 
 1869  prove -M'Modern::Perl' -Ilib t
 1870  lt
 1871  ..
 1872  cd presentation/
 1873  lt
 1874  diff loaded_modules_1.pl loaded_modules_2.pl
 1875  vim /usr/share/perl/5.18/dumpvar.pl
 1876  vim /usr/local/share/perl/5.18.2/Modern/Perl.pm
 1877  cd github/
 1878  lt
 1879  cd Dist-Zilla-Plugin-Web/
 1880  git pull
 1881  lt
 1882  git status
 1883  vim dist.ini 
 1884  ...
 1885  cd Downloads/
 1886  lt
 1887  extract App-ModuleBuildTiny-0.009.tar.gz 
 1888  lt
 1889  cd App-ModuleBuildTiny-0.009/
 1890  lt
 1891  lt lib/
 1892  lt script/mbtiny 
 1893  perl -c  script/mbtiny 
 1894  perl -Ilib -c  script/mbtiny 
 1895  sudo cpan .
 1896  perl -Ilib -c  script/mbtiny 
 1897  perl  -c  script/mbtiny 
 1898  perl script/mbtiny 
 1899  perl script/mbtiny listdeps
 1900  sudo cpanm  Perl::PrereqScanner
 1901  scan_prereqs 
 1902  cd --
 1903  cd -3
 1904  scan_prereqs 
 1905  scan-perl-prereqs 
 1906  scan_prereqs 
 1907  scan_prereqs > cpanfile
 1908  vim cpanfile 
 1909  lt
 1910  vim dist.ini 
 1911  git status 
 1912  rm cpanfile 
 1913  lt
 1914  git status 
 1915  git add dist.ini 
 1916  git commit -m 'add prereq File-ShareDir,Moose,namespace-autoclean to increase Kwalitee'
 1917  git push
 1918  cd github/
 1919  lt
 1920  cd Regexp-Common-time/
 1921  prove t
 1922  prove t 2>test
 1923  prove t >test 2>&1
 1924  vim t/american.t 
 1925  prove t >test_succ 2>&1
 1926  perl -MYAPE::Regex::Explain -e "print YAPE::Regex::Explain->new(qr/World/)->explain();"
 1927  cd Downloads/
 1928  lt
 1929  extract YAPE-Regex-Explain-4.01.tar.gz 
 1930  lt
 1931  cd ~/github/
 1932  git clone https://github.com/mishin/YAPE-Regex-Explain.git
 1933  cd --
 1934  cd ~/Downloads/YAPE-Regex-Explain-4.01/
 1935  lt
 1936  cd -R * ~/github/YAPE-Regex-Explain/
 1937  cd * ~/github/YAPE-Regex-Explain/
 1938  cp -R * ~/github/YAPE-Regex-Explain/
 1939  cd ~/github/YAPE-Regex-Explain/
 1940  lt
 1941  git add .
 1942  git status
 1943  git commit 'первоначальная заливка перед переводом на русский язык'
 1944  git commit -m 'первоначальная заливка перед переводом на русский язык'
 1945  git push
 1946  lt
 1947  cd --
 1948  cd -1
 1949  lt
 1950  cp Explain.pm Explain.ru.pm 
 1951  vim Explain.ru.pm 
 1952  perl -c Explain.ru.pm
 1953  vim Explain.ru.pm 
 1954  mv Explain.ru.pm Explain_ru.pm 
 1955  perl -c Explain_ru.pm
 1956  perl -I. -c Explain_ru.pm
 1957  lt
 1958  perl -Ilib -c Explain_ru.pm
 1959  perl -I.. -c Explain_ru.pm
 1960  perl -I -c Explain_ru.pm
 1961  vim Explain_ru.pm 
 1962  lt
 1963  cd ../POD2-RU/
 1964  lt
 1965  git status
 1966  git add lib/POD2/RU/perlre.pod
 1967  git status 
 1968  perl git_commit_in_the_past.pl --date '11.05.2015' -m '\K описываю'
 1969  perl ../YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m '\K описываю'
 1970  git push
 1971  git status 
 1972  git add lib/POD2/RU/perlre.pod
 1973  perl ../YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m '\K описываю'
 1974  git push
 1975  git status
 1976  ~/github/YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m '\K описываю'
 1977  git status 
 1978  ~/github/YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m '\K описываю' -t
 1979  git commit --date 'Mon May 11 08:06 2015 +0300' -m '\K описываю'
 1980  git push
 1981  vim ~/github/YAPC-Russia-2015/git_commit_in_the_past.pl
 1982  git commit --date 'Mon May 11 08:06 2015 +0300' -m '\K описываю'
 1983  vim Changes 
 1984  ~/github/YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m 'служебный тест' -t
 1985  ~/github/YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m 'служебный тест'
 1986  пше ыефегы
 1987  git status
 1988  git add Changes 
 1989  ~/github/YAPC-Russia-2015/git_commit_in_the_past.pl --date '11.05.2015' -m 'служебный тест'
 1990  git status
 1991  git push
 1992  cd github/
 1993  lt
 1994  cd YAPC-Russia-2015/
 1995  git pull
 1996  lt
 1997  git status 
 1998  git log
 1999  git
 2000  git diff
 2001  git status 
 2002  git add git_commit_in_the_past.pl
 2003  git checkout git_commit_in_the_past.pl
 2004  git status 
 2005  git reset HEAD git_commit_in_the_past.pl
 2006  git status 
 2007  git pull
 2008  git add .
 2009  git commit -m 'cwd'
 2010  git pull
 2011  lt
 2012  vim git_commit_in_the_past.pl 
 2013  git add .
 2014  git commit -m 'решил конфликт'
 2015  git push
 2016  perl -c git_commit_in_the_past.pl 
 2017  lt
 2018  perltidy  -b git_commit_in_the_past.pl 
 2019  lt
 2020  vim git_commit_in_the_past.pl
 2021  cx git_commit_in_the_past.pl
 2022  ./git_commit_in_the_past.pl
 2023  ./git_commit_in_the_past.pl -m 'commit'
 2024  git status 
 2025  vim git_commit_in_the_past.pl
 2026  ./git_commit_in_the_past.pl
 2027  ./git_commit_in_the_past.pl -date today -m 'тест'
 2028  ./git_commit_in_the_past.pl -date эtodayэ -m 'тест'
 2029  ./git_commit_in_the_past.pl -date 'today' -m 'тест'
 2030  vim git_commit_in_the_past.pl
 2031  perltidy  -b git_commit_in_the_past.pl 
 2032  vim git_commit_in_the_past.pl
 2033  ./git_commit_in_the_past.pl
 2034  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!'
 2035  vim +110 git_commit_in_the_past.pl
 2036  git status 
 2037  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -f git_commit_in_the_past.pl
 2038  vim +110 git_commit_in_the_past.pl
 2039  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -f git_commit_in_the_past.pl
 2040  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file git_commit_in_the_past.pl
 2041  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2042  cp git_commit_in_the_past.pl git_test.pl
 2043  vim git_test.pl 
 2044  perl git_test.pl 
 2045  vim git_test.pl 
 2046  perl git_test.pl 
 2047  git status 
 2048  vim git_commit_in_the_past.pl
 2049  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2050  vim git_commit_in_the_past.pl
 2051  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2052  vim git_commit_in_the_past.pl
 2053  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2054  vim git_commit_in_the_past.pl
 2055  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2056  vim git_commit_in_the_past.pl
 2057  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2058  vim git_commit_in_the_past.pl
 2059  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2060  vim git_commit_in_the_past.pl
 2061  ./git_commit_in_the_past.pl -date 'today' -m 'с 70-летием победы в Великой отечесвтенной Войне - Ура!!' -file 'git_commit_in_the_past.pl'
 2062  fc -l
 2063  fc -l|less
 2064  fc -l|more
 2065  history 
 2066  history > h
