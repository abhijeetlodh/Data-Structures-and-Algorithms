// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
     bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(checkForCycle(it, node, vis, adj)) 
                    return true; 
            }
            else if(it!=parent) 
                return true; 
        }
        
        return false; 
    }
public:
	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V+1, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, -1, vis, adj)) return true; 
	        }
	    }
	    
	    return false; 
	}
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends
/*
1
1805 829
1 321
1 499
1 694
1 1360
2 115
2 881
3 1592
4 846
5 1085
6 1654
7 691
7 872
7 1172
7 1243
7 1721
9 844
9 984
12 724
13 353
13 895
13 1107
15 1514
20 1679
22 329
22 759
23 124
23 1003
24 1239
30 1032
31 1004
31 1342
31 1641
33 466
34 393
35 518
38 1666
39 831
40 362
41 1615
42 1006
43 886
45 428
46 1084
47 178
48 1177
49 1564
51 1283
52 1042
54 593
55 1456
57 1460
58 806
64 521
64 741
65 86
65 1325
66 759
66 1773
67 704
67 769
67 1541
69 244
70 896
70 1470
72 263
72 1460
73 1013
74 465
74 496
75 733
77 218
77 436
77 1105
79 1664
82 221
82 577
82 714
84 485
84 1768
85 1313
87 166
88 510
88 1266
90 139
92 679
92 1196
93 441
93 1157
94 1417
96 441
96 1716
97 768
97 1578
100 1047
102 1508
105 724
106 1356
106 1756
110 801
114 862
114 1188
115 892
115 1787
116 782
117 1178
118 572
118 1593
120 1156
121 128
123 494
127 456
127 1591
129 659
131 444
133 1352
134 146
134 1319
135 1049
136 735
137 349
137 1799
138 1042
139 375
139 887
140 170
142 453
142 1703
143 911
144 976
145 1415
146 1548
148 1581
149 396
149 546
149 1602
150 1548
150 1703
151 828
151 1404
153 406
158 513
160 187
161 292
164 1009
164 1465
165 786
166 817
168 1493
169 1320
170 211
170 615
174 1798
175 1300
176 1079
177 599
177 715
177 747
178 999
179 691
179 869
179 870
180 883
181 1318
183 233
186 1323
188 837
188 1089
189 720
189 1799
192 891
192 1514
195 913
198 1604
199 926
201 1004
201 1239
203 1109
204 841
204 1088
206 1110
207 1523
209 584
209 1649
210 738
211 773
212 915
212 1060
214 623
214 1313
215 318
215 1082
217 303
218 241
221 1247
223 1740
225 1351
226 353
229 1298
232 1558
233 1287
234 1309
236 624
238 1539
239 911
241 1145
242 787
243 991
244 1234
245 1195
246 657
246 1113
247 1339
248 342
249 454
252 1781
253 619
254 1354
254 1531
255 1508
258 1617
261 419
261 1728
262 530
262 1678
263 562
263 984
263 1288
263 1631
263 1683
265 738
265 982
265 1454
266 1613
271 828
276 1486
279 1719
280 549
280 1259
283 1722
284 1117
289 1301
290 419
291 494
291 1180
291 1738
292 527
294 686
294 1667
294 1702
294 1752
296 1318
300 1597
303 356
305 425
305 1071
305 1726
306 780
307 1098
307 1236
308 469
308 662
311 1520
313 1386
315 1374
323 888
326 1062
330 839
330 1586
336 415
337 645
338 1606
340 1443
341 1572
343 1380
344 569
344 1062
345 1227
346 1026
346 1066
347 1685
348 1404
349 1470
351 407
353 780
355 748
357 1532
358 1610
359 551
359 1674
360 1013
361 1443
362 726
362 768
362 1430
366 509
366 1617
370 1318
370 1334
377 1582
378 933
380 556
383 1553
385 470
385 1493
389 986
389 1738
390 1071
391 1268
392 941
393 1793
394 1504
394 1537
398 1022
398 1089
399 1540
400 1124
400 1619
401 1086
404 1585
410 491
410 561
410 856
413 1651
417 1260
418 1425
418 1723
420 1595
421 1063
423 559
423 1383
424 1572
425 861
425 1775
427 1584
428 1672
432 708
435 783
435 1037
435 1576
436 856
436 1022
437 1731
442 635
443 835
444 629
445 1135
446 743
446 836
448 918
450 1582
454 1136
455 767
458 1769
459 928
459 1448
462 1745
463 1161
466 789
466 1144
468 1799
470 971
472 565
472 709
472 810
474 542
474 854
477 654
479 848
482 1385
484 642
485 1207
489 1476
489 1788
490 1569
494 1087
495 617
498 1594
500 571
501 1747
506 720
506 1069
507 912
507 962
508 921
508 1343
509 1143
511 1291
514 1557
515 849
517 554
518 1141
520 1022
520 1354
520 1607
522 907
523 902
527 972
527 1170
527 1254
528 1051
531 606
531 860
535 1177
536 957
539 913
541 698
541 1213
543 1782
544 1242
544 1429
544 1575
547 789
548 1086
550 560
554 1759
555 801
557 1706
559 1551
561 1163
569 1167
571 859
571 1336
572 1135
573 1704
576 990
579 847
579 1684
580 1153
580 1794
581 1123
581 1201
582 1226
586 1315
588 1135
589 1414
594 1084
594 1284
595 1766
598 1650
602 1715
604 1168
605 1337
607 1429
610 816
610 1263
616 1435
619 1281
620 1180
624 704
625 860
625 1242
626 959
626 1171
627 1425
629 1382
630 878
630 1211
631 1494
633 916
638 927
638 975
638 1773
639 842
640 695
640 787
642 802
644 1333
645 900
650 890
653 1724
654 890
654 1214
655 1226
655 1712
657 1388
658 1208
659 840
659 1519
663 892
664 1523
668 1336
672 1062
675 745
677 1561
678 1060
680 1255
681 1475
681 1655
682 708
682 781
683 1486
687 1609
690 1618
690 1679
691 903
693 1084
695 719
696 1310
696 1357
699 908
705 758
714 1745
718 782
718 978
719 1682
723 978
723 1762
724 1454
731 1017
732 1393
736 1730
739 1764
740 1674
742 1618
748 1068
748 1071
748 1202
748 1569
749 853
749 1427
751 1625
754 1506
755 1615
757 1663
759 1132
760 789
760 1024
760 1575
760 1771
764 819
766 1021
766 1369
767 1424
770 1751
773 1363
773 1402
775 1372
777 1515
779 1519
780 1702
781 1170
782 1137
782 1353
785 1058
786 983
786 1080
787 1721
789 929
792 1392
792 1784
793 1246
795 1782
799 937
801 959
804 1480
805 1776
809 941
812 1275
813 1554
814 1388
817 904
817 1290
817 1345
818 1044
819 1014
820 1346
821 1607
822 1093
831 1209
835 1555
836 1138
844 1004
846 1223
852 974
852 1177
853 1121
858 870
860 1079
863 1261
867 1442
873 1763
876 1704
877 1301
877 1501
877 1643
883 1342
884 1745
889 1723
890 1376
894 1016
896 1132
896 1340
901 1628
903 1586
906 1388
910 1057
910 1082
912 1206
912 1413
912 1536
917 1670
918 1295
919 1105
925 1110
926 1716
927 1442
928 1335
931 1751
934 1337
939 1573
941 1559
948 1646
950 1314
951 1504
953 1675
954 1563
955 1522
955 1648
956 1229
956 1309
960 1232
962 1406
962 1672
964 998
964 1420
965 1661
967 1650
969 1771
972 1494
972 1744
973 1544
975 1464
977 1055
977 1226
978 1377
978 1790
979 1326
979 1545
980 1450
981 1157
982 1605
983 1130
986 1292
986 1769
987 1692
990 1788
994 1460
1000 1337
1003 1549
1008 1528
1009 1277
1009 1465
1013 1301
1013 1512
1013 1671
1014 1094
1017 1572
1025 1507
1025 1666
1032 1613
1033 1590
1035 1213
1037 1304
1039 1139
1040 1349
1044 1460
1046 1497
1058 1601
1067 1178
1067 1403
1069 1724
1070 1722
1071 1299
1072 1299
1073 1132
1079 1602
1081 1281
1082 1211
1088 1359
1091 1171
1092 1745
1107 1441
1109 1248
1109 1524
1109 1574
1113 1157
1116 1611
1116 1671
1117 1194
1119 1340
1120 1507
1120 1511
1124 1238
1127 1152
1127 1450
1129 1722
1133 1409
1133 1707
1135 1242
1135 1530
1137 1503
1139 1672
1142 1716
1143 1219
1144 1246
1149 1654
1153 1599
1156 1533
1157 1584
1174 1197
1174 1676
1175 1555
1176 1396
1176 1797
1182 1476
1185 1736
1192 1589
1198 1791
1199 1732
1206 1561
1206 1765
1218 1242
1219 1695
1220 1722
1223 1314
1224 1484
1235 1245
1237 1547
1239 1727
1239 1769
1251 1431
1251 1453
1253 1459
1255 1415
1255 1474
1255 1785
1256 1794
1258 1365
1260 1700
1265 1535
1271 1441
1281 1544
1291 1732
1302 1379
1308 1326
1308 1773
1313 1431
1318 1414
1323 1657
1324 1730
1333 1597
1337 1411
1337 1804
1343 1575
1345 1508
1353 1753
1356 1711
1358 1750
1359 1523
1361 1796
1368 1539
1369 1514
1378 1400
1382 1755
1383 1550
1389 1464
1391 1520
1398 1702
1399 1550
1404 1507
1410 1778
1412 1764
1417 1441
1421 1608
1422 1439
1427 1511
1431 1610
1438 1509
1441 1461
1442 1506
1445 1626
1445 1649
1446 1507
1446 1622
1450 1660
1453 1756
1459 1603
1462 1546
1463 1646
1463 1755
1475 1799
1478 1595
1484 1629
1488 1702
1493 1762
1494 1656
1497 1629
1497 1804
1520 1724
1523 1666
1528 1790
1529 1681
1530 1614
1533 1735
1549 1621
1550 1589
1553 1672
1556 1688
1569 1698
1570 1621
1570 1747
1582 1629
1584 1622
1600 1657
1611 1699
1621 1768
1632 1794
1634 1648
1640 1644
1653 1792
1656 1765
1671 1672
1684 1735
1686 1783
1711 1803
1728 1756
1738 1777
1761 1766
1772 1780
*/