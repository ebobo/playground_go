
IZ_ControllerAttributes_a IZ_ControllerAttributes_AZ_CTRL_1001 = { 0x02, 0xe101 
};

static IZ_UnitAttributesId_a IZ_UnitAttributesId_AZ_CTRL_1002[1] = {
	{ 0xc801 /* ALLE ALARMORGAN */,
	{ 0x0000026c, 0x0000026c, 0x0000026c, 0x01   } } 
};

AttributeDirectory_a AttributeDirectory_AZ_CTRL_1000 = {
	&IZ_ControllerAttributes_AZ_CTRL_1001, 
	1, IZ_UnitAttributesId_AZ_CTRL_1002, 
0x00000000, 0x010013a0, 0xfefefefe  
};

FaultClearConditionEntry_a	FaultClearConditionEntry_a_AC_408_1 [162] = 
{
	{
		6 /* DZ */,
		14 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1418> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		12 /* IZ */,
		14 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1474> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		526 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2839> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		532 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1856> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1558 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1846> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1559 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1847> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1560 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1848> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1561 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1849> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		18 /* OP */,
		1565 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2369> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		18 /* OP */,
		1570 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2813> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1793 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1475> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1794 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1476> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1795 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1477> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1796 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1478> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1797 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1479> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1798 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1480> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1799 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1481> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1800 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1482> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1801 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1483> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1802 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1484> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1803 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1485> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		22 /* POWER */,
		1804 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1486> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		18 /* OP */,
		1805 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2814> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1806 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2642> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1807 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1488> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1808 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1489> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1809 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1490> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1810 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1491> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1811 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2643> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1812 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2644> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1813 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2645> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1814 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2646> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1815 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <21226> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1817 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <21227> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1818 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <21228> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1819 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2656> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1821 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <21229> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1822 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2647> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1826 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70413> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1827 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70405> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1828 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70406> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1829 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70407> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1830 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70408> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1831 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70409> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1832 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70411> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1833 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70412> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1834 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70410> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2049 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1493> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2050 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1523> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2051 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <2370> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2056 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2463> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2057 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2464> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2058 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1525> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2059 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2475> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2060 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2465> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2062 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2466> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2063 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2467> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2064 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2468> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2065 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2469> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2066 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2470> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2067 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2471> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2068 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2472> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2070 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1542> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2071 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2473> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2074 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2840> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2079 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70261> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2085 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <2874> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		8 /* FAD */,
		2086 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2841> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2093 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70381> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2305 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1526> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2309 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1527> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2310 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1528> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2311 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1529> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2312 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1530> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2313 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1531> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2314 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1532> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2315 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1533> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2316 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1534> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2317 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1535> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2318 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <1536> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		6 /* DZ */,
		2319 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <1537> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2320 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2815> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2321 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2816> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2322 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2817> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2323 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2818> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2324 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2819> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2325 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2820> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2326 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2821> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2327 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2822> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2328 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2823> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2329 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2824> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2330 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2825> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2331 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2826> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2332 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <2588> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2333 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2827> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2334 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2828> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2335 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2829> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		2378 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <2474> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2409 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70272> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2410 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70273> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2413 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70397> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2414 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70398> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2415 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70399> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2416 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70400> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2417 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70401> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2418 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70402> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2419 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70403> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2420 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70404> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2561 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <22800> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2568 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70274> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2570 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70275> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		10 /* FPE */,
		3072 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <2289> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		10 /* FPE */,
		3073 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <2439> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		10 /* FPE */,
		3074 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <2440> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		4608 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70277> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4609 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70278> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4610 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70279> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4611 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70280> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4612 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70281> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4613 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70282> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4614 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70283> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4615 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70284> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4616 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70285> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4617 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70286> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4618 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70287> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4630 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70367> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4631 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70368> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4632 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70369> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		5120 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70378> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		5121 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70379> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		5122 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70380> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2421 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70433> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2422 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70434> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2423 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70435> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2572 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70436> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2080 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70437> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4634 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70470> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4636 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70471> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2424 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70472> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1835 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70521> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1836 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70522> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1837 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70523> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1838 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70524> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1839 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70525> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		30 /* UNIT_TYPE_ANY */,
		1840 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70526> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2081 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70562> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2082 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70563> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4640 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70601> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4641 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70602> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		2 /* COMPUTER */,
		4642 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70603> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2083 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70604> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2084 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70605> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		14 /* LOOP */,
		2092 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70613> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2431 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70614> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2432 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70615> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		8 /* FAD */,
		1849 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70616> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		18 /* OP */,
		1850 /* int UnitFaultType */,
		0 /* OK_FS */,
		0 /* FAULT_TYPE_DATA_FMR_A */
	}/* ElementNo 0 UnitNo <70617> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2456 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70618> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2457 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70619> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2458 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70620> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		20 /* POINT */,
		2459 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70621> UnitName <>  EntityName <Fault Clear Condition Entry> */,
	{
		8 /* FAD */,
		1851 /* int UnitFaultType */,
		0 /* OK_FS */,
		1 /* FAULT_TYPE_ONLY_FMR_A */
	}/* ElementNo 0 UnitNo <70622> UnitName <>  EntityName <Fault Clear Condition Entry> */
};


FaultClearCondition_a	FaultClearCondition_a_0 = 
{
	162 /* int FaultClearConditionEntryCount */,
	FaultClearConditionEntry_a_AC_408_1 /* Ptr to array of type FaultClearConditionEntry_a */
};

static UnitId_a UnitId_AZ_CTRL_1008[2] = {
	0xc801 /* ALLE ALARMORGAN */, /* (2) */
	0xe101 /* KOLHEIVEGEN 10 */  /* (2) */
};

static IsOperatedByEntry_a IsOperatedByEntry_AZ_CTRL_1007[1] = {
	{ 0xe101 /* KOLHEIVEGEN 10 */,
	2, UnitId_AZ_CTRL_1008  } 
};

static IsOperatedBy_a IsOperatedBy_AZ_CTRL_1004 = {
	1, IsOperatedByEntry_AZ_CTRL_1007  
};

static IsLocalToDZ_EntryIZ_a IsLocalToDZ_EntryIZ_AZ_CTRL_1011[1] = {
	{ 0xc801 /* ALLE ALARMORGAN */,0x00, 
	{ 0x00, 0x00000000   } } 
};

static IsLocalToDZ_Entry_a IsLocalToDZ_Entry_AZ_CTRL_1010[25] = {
	{ 0x6001 /* BAD LEILIGHET 1 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6002 /* SOVEROM LEILIGHET 1 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6003 /* STUE LEILIGHET 1 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6004 /* STUE LEILIGHET 2 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6005 /* SOVEROM LEILIGHET 2 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6006 /* BAD LEILIGHET 2 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6007 /* BAD LEILIGHET 3 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6008 /* SOVEROM LEILIGHET 3 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6009 /* STUE LEILIGHET 3 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x600a /* STUE LEILIGHET 4 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x600b /* SOVEROM LEILIGHET 4 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x600c /* BAD LEILIGHET 4 */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x600d /* MANUELL MELDER GANG NORD */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x600e /* GARDEROBE */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x600f /* KONTOR-OPPHOLDSROM */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6010 /* GANG NORD */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6011 /* MANUELL MELDER HOVEDINNGANG */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6012 /* VASKEROM */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6013 /* KJØKKEN */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6014 /* BOD */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6015 /* GANG SØR */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6016 /* STUE-SPISEROM */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6017 /* MANUELL MELDER GANG SØR */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6018 /* TEKN ROM LOFT */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  },
	{ 0x6019 /* SPRINKLER */,
	1, IsLocalToDZ_EntryIZ_AZ_CTRL_1011  } 
};

static IsLocalToDZ_a IsLocalToDZ_AZ_CTRL_1009 = {
	25, IsLocalToDZ_Entry_AZ_CTRL_1010  
};

static UnitId_a UnitId_AZ_CTRL_1040[6] = {
	0xa001 /* A1 004 */, /* (2) */
	0xa002 /* A1 008 */, /* (2) */
	0xa003 /* A1 014 */, /* (2) */
	0xa004 /* A1 018 */, /* (2) */
	0xa005 /* A2 005 */, /* (2) */
	0xa006 /* A2 011 */  /* (2) */
};

static IsLocalToEntry_a IsLocalToEntry_AZ_CTRL_1039[1] = {
	{ 0xc801 /* ALLE ALARMORGAN */,
	6, UnitId_AZ_CTRL_1040  } 
};

static IsLocalToFAD_a IsLocalToFAD_AZ_CTRL_1036 = {
	1, IsLocalToEntry_AZ_CTRL_1039  
};

static IsNeighbourTo_a IsNeighbourTo_AZ_CTRL_1041 = {
	0, NULL  
};
IZ_ActState_a	IZ_ActState_a_AC_191_1 [7] = 
{
	3 /* General Alarm *//* ElementNo 27130017 UnitNo <27> UnitName <>  EntityName <IZ Act State Priority> */,
	2 /* Evacuate *//* ElementNo 27130017 UnitNo <264> UnitName <>  EntityName <IZ Act State Priority> */,
	0 /* Alert *//* ElementNo 27130017 UnitNo <265> UnitName <>  EntityName <IZ Act State Priority> */,
	6 /* STEADY_ON *//* ElementNo 27130017 UnitNo <2706> UnitName <>  EntityName <IZ Act State Priority> */,
	1 /* BELL_TEST *//* ElementNo 27130017 UnitNo <266> UnitName <>  EntityName <IZ Act State Priority> */,
	5 /* SILENCED *//* ElementNo 27130017 UnitNo <267> UnitName <>  EntityName <IZ Act State Priority> */,
	4 /* OFF *//* ElementNo 27130017 UnitNo <1406> UnitName <>  EntityName <IZ Act State Priority> */
};


IZ_ActStatePriorities_a	IZ_ActStatePriorities_a_0 = 
{
	7 /* int IZ_ActStateCount */,
	IZ_ActState_a_AC_191_1 /* Ptr to array of type IZ_ActState_a */
};

static DZ_Coincidences_a DZ_Coincidences_AZ_CTRL_1044 = {
	0, NULL  
};

FaultIndDelayEntry_a FaultIndDelayEntry_AZ_CTRL_1047[2] = {
	{0x0016, 0x070e, 0x0000   },
	{0x0016, 0x0b03, 0x0000   } 
};

static FaultIndDelays_a FaultIndDelays_AZ_CTRL_1046 = {
	2, FaultIndDelayEntry_AZ_CTRL_1047  
};

IZ_SCD_Directory_a IZ_SCD_Directory_AZ_CTRL_1003 = {
	&FaultClearCondition_a_0, 
	&IsOperatedBy_AZ_CTRL_1004, 
	&IsLocalToDZ_AZ_CTRL_1009, 
	&IsLocalToFAD_AZ_CTRL_1036, 
	&IsNeighbourTo_AZ_CTRL_1041, 
	&IZ_ActStatePriorities_a_0, 
	&DZ_Coincidences_AZ_CTRL_1044, 
	&FaultIndDelays_AZ_CTRL_1046, 
0x00000000, 0x03f3114c, 0xfefefefe  
};


static CompIdUnitId_a CompIdUnitId_AZ_CTRL_1052[1] = {
	{ 0xf801 /* Computer Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_AZ_CTRL_1053[6] = {
	{ 0xeb01 /* FAD Controller */,0xa001  /* A1 004 */},
	{ 0xeb01 /* FAD Controller */,0xa002  /* A1 008 */},
	{ 0xeb01 /* FAD Controller */,0xa003  /* A1 014 */},
	{ 0xeb01 /* FAD Controller */,0xa004  /* A1 018 */},
	{ 0xeb01 /* FAD Controller */,0xa005  /* A2 005 */},
	{ 0xeb01 /* FAD Controller */,0xa006  /* A2 011 */} 
};

static CompIdUnitId_a CompIdUnitId_AZ_CTRL_1056[1] = {
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_AZ_CTRL_1058[2] = {
	{ 0xeb01 /* FAD Controller */,0xffff  },
	{ 0xec01 /* OP Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_AZ_CTRL_1063[3] = {
	{ 0xea01 /* FPE Controller */,0xffff  },
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_AZ_CTRL_1064[2] = {
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static ACLIB_Object_a ACLIB_Object_AZ_CTRL_1049[14] = {
	{/* FAD_ACT_CMD_ID */ 0xe001,
	6, CompIdUnitId_AZ_CTRL_1053, 
	0, NULL  },
	{/* FAD_ARM_CMD_ID */ 0xe002,
	6, CompIdUnitId_AZ_CTRL_1053, 
	0, NULL  },
	{/* FAD_TEST_CMD_ID */ 0xe006,
	6, CompIdUnitId_AZ_CTRL_1053, 
	0, NULL  },
	{/* IZ_ACK_ID */ 0xea00,
	1, CompIdUnitId_AZ_CTRL_1056, 
	0, NULL  },
	{/* IZ_STATUS_ID */ 0xea05,
	2, CompIdUnitId_AZ_CTRL_1058, 
	0, NULL  },
	{/* IZ_TEST_ACK_ID */ 0xea07,
	1, CompIdUnitId_AZ_CTRL_1056, 
	0, NULL  },
	{/* IZ_ACK_REPORT_ID */ 0xea08,
	1, CompIdUnitId_AZ_CTRL_1056, 
	0, NULL  },
	{/* IZ_TEST_ACK_REPORT_ID */ 0xea09,
	1, CompIdUnitId_AZ_CTRL_1056, 
	0, NULL  },
	{/* COMPONENT_START_UP_ACK_ID */ 0xee8d,
	0, NULL, 
	0, NULL  },
	{/* CONFIGURATION_CRC_CHECK_STATUS_ID */ 0xee95,
	1, CompIdUnitId_AZ_CTRL_1052, 
	0, NULL  },
	{/* OZ_CMD_ACK_ID */ 0xf302,
	0, NULL, 
	0, NULL  },
	{/* UNIT_TEST_STATUS_ID */ 0xfc00,
	2, CompIdUnitId_AZ_CTRL_1064, 
	0, NULL  },
	{/* UNIT_FAULT_STATUS_ID */ 0xfc01,
	3, CompIdUnitId_AZ_CTRL_1063, 
	0, NULL  },
	{/* UNIT_FAULT_ACCEPT_CMD_ACK_ID */ 0xfc04,
	0, NULL, 
	0, NULL  } 
};

static ComponentAddress_a ComponentAddress_AZ_CTRL_1050[5] = {
	{ 0xea01 /* FPE Controller */,
	{ 0x000c, 0x01   } },
	{ 0xeb01 /* FAD Controller */,
	{ 0x000b, 0x01   } },
	{ 0xec01 /* OP Controller */,
	{ 0x000e, 0x01   } },
	{ 0xf601 /* Log Controller */,
	{ 0x0001, 0x01   } },
	{ 0xf801 /* Computer Controller */,
	{ 0x0005, 0x01   } } 
};

ACLIB_ObjectDirectory_a ACLIB_ObjectDirectory_AZ_CTRL_1048 = {
	5, ComponentAddress_AZ_CTRL_1050, 
	14, ACLIB_Object_AZ_CTRL_1049, 
0x00000000, 0x03f316b8, 0xfefefefe  
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_31 = {
	"ekIZ_CTRL_51834_Router"
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_32 = {
	"Router_ekIZ_CTRL_51834"
};

static AcPortData_a AcPortData_AZ_CTRL_1065[1] = {
	{0x00000001, 0x0a, 
	{ 0x0011, 0x01   },
	4, &AcFifoBinAddr_a_AC_13_31   } 
};

static AcRouteData_a AcRouteData_AZ_CTRL_1066[1] = {
	{0x00000001, 0x0a, 
	{ 0x0000, 0x00   },
	4, &AcFifoBinAddr_a_AC_13_32   } 
};

AcBinaryConfigData_a AcBinaryConfigData_AZ_CTRL_1067 = {
	1, AcPortData_AZ_CTRL_1065, 
	1, AcRouteData_AZ_CTRL_1066, 
0x00000000, 0x03f31810, 0xfefefefe  
};

static ComponentDirectory_a ComponentDirectoryAZController = {
	0xe901,
	&AttributeDirectory_AZ_CTRL_1000,
	&IZ_SCD_Directory_AZ_CTRL_1003,
	&ACLIB_ObjectDirectory_AZ_CTRL_1048,
	&AcBinaryConfigData_AZ_CTRL_1067
};
