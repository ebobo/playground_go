
OP_ControllerAttributes_a OP_ControllerAttributes_OP_CTRL_1001 = { 0x00000708, 0x00, 0x00, 0x00, 0xe101 
};

static OP_UnitAttributesId_a OP_UnitAttributesId_OP_CTRL_1002[2] = {
	{ 0xd801 /* OP (Operator Panel) */,
	{ 0x00000262, 0x00, 0x00, 0xffffffff, 0x00000726, 0x0000033e, 0x00000712, 0x00000258, 0x0000003c, 0x00   } },
	{ 0xd802 /* REMOTE PILOT */,
	{ 0x00000262, 0x03, 0x00, 0xffffffff, 0x00000726, 0x0000033e, 0x00000712, 0x00000258, 0x0000003c, 0x00   } } 
};

AttributeDirectory_a AttributeDirectory_OP_CTRL_1000 = {
	&OP_ControllerAttributes_OP_CTRL_1001, 
	2, OP_UnitAttributesId_OP_CTRL_1002, 
0x00000000, 0x01001044, 0xfefefefe  
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

static UnitId_a UnitId_OP_CTRL_1008[3] = {
	0xd801 /* OP (Operator Panel) */, /* (2) */
	0xd802 /* REMOTE PILOT */, /* (2) */
	0xe101 /* KOLHEIVEGEN 10 */  /* (2) */
};

static IsOperatedByEntry_a IsOperatedByEntry_OP_CTRL_1007[1] = {
	{ 0xe101 /* KOLHEIVEGEN 10 */,
	3, UnitId_OP_CTRL_1008  } 
};

static IsOperatedBy_a IsOperatedBy_OP_CTRL_1004 = {
	1, IsOperatedByEntry_OP_CTRL_1007  
};

static UnitId_a UnitId_OP_CTRL_1010[6] = {
	0xa001 /* A1 004 */, /* (2) */
	0xa002 /* A1 008 */, /* (2) */
	0xa003 /* A1 014 */, /* (2) */
	0xa004 /* A1 018 */, /* (2) */
	0xa005 /* A2 005 */, /* (2) */
	0xa006 /* A2 011 */  /* (2) */
};

static IsLocalToEntry_a IsLocalToEntry_OP_CTRL_1011[1] = {
	{0xc801 /* ALLE ALARMORGAN */, 6, &UnitId_OP_CTRL_1010[0]} 
};

static IsLocalToFAD_a IsLocalToFAD_OP_CTRL_1009 = {
	1, IsLocalToEntry_OP_CTRL_1011  
};

static PointRelationEntry_a PointRelationEntry_OP_CTRL_1013[25] = {
	{ 0x0001 /* A1 001 */,0x00, 0xd002, /* SLØYFE-A1 */0x6001  /* BAD LEILIGHET 1 */},
	{ 0x0002 /* A1 003 */,0x02, 0xd002, /* SLØYFE-A1 */0x6002  /* SOVEROM LEILIGHET 1 */},
	{ 0x0003 /* A1 005 */,0x02, 0xd002, /* SLØYFE-A1 */0x6003  /* STUE LEILIGHET 1 */},
	{ 0x0004 /* A1 006 */,0x02, 0xd002, /* SLØYFE-A1 */0x6004  /* STUE LEILIGHET 2 */},
	{ 0x0005 /* A1 007 */,0x02, 0xd002, /* SLØYFE-A1 */0x6005  /* SOVEROM LEILIGHET 2 */},
	{ 0x0006 /* A1 009 */,0x00, 0xd002, /* SLØYFE-A1 */0x6006  /* BAD LEILIGHET 2 */},
	{ 0x0007 /* A1 011 */,0x00, 0xd002, /* SLØYFE-A1 */0x6007  /* BAD LEILIGHET 3 */},
	{ 0x0008 /* A1 013 */,0x02, 0xd002, /* SLØYFE-A1 */0x6008  /* SOVEROM LEILIGHET 3 */},
	{ 0x0009 /* A1 015 */,0x02, 0xd002, /* SLØYFE-A1 */0x6009  /* STUE LEILIGHET 3 */},
	{ 0x000a /* A1 016 */,0x02, 0xd002, /* SLØYFE-A1 */0x600a  /* STUE LEILIGHET 4 */},
	{ 0x000b /* A1 017 */,0x02, 0xd002, /* SLØYFE-A1 */0x600b  /* SOVEROM LEILIGHET 4 */},
	{ 0x000c /* A1 019 */,0x00, 0xd002, /* SLØYFE-A1 */0x600c  /* BAD LEILIGHET 4 */},
	{ 0x000d /* A2 001 */,0x03, 0xd003, /* SLØYFE-A2 */0x600d  /* MANUELL MELDER GANG NORD */},
	{ 0x000e /* A2 002 */,0x00, 0xd003, /* SLØYFE-A2 */0x600e  /* GARDEROBE */},
	{ 0x000f /* A2 003 */,0x01, 0xd003, /* SLØYFE-A2 */0x600f  /* KONTOR-OPPHOLDSROM */},
	{ 0x0010 /* A2 004 */,0x01, 0xd003, /* SLØYFE-A2 */0x6010  /* GANG NORD */},
	{ 0x0011 /* A2 006 */,0x03, 0xd003, /* SLØYFE-A2 */0x6011  /* MANUELL MELDER HOVEDINNGANG */},
	{ 0x0012 /* A2 007 */,0x00, 0xd003, /* SLØYFE-A2 */0x6012  /* VASKEROM */},
	{ 0x0013 /* A2 008 */,0x00, 0xd003, /* SLØYFE-A2 */0x6013  /* KJØKKEN */},
	{ 0x0014 /* A2 009 */,0x01, 0xd003, /* SLØYFE-A2 */0x6014  /* BOD */},
	{ 0x0015 /* A2 010 */,0x01, 0xd003, /* SLØYFE-A2 */0x6015  /* GANG SØR */},
	{ 0x0016 /* A2 012 */,0x01, 0xd003, /* SLØYFE-A2 */0x6016  /* STUE-SPISEROM */},
	{ 0x0017 /* A2 013 */,0x03, 0xd003, /* SLØYFE-A2 */0x6017  /* MANUELL MELDER GANG SØR */},
	{ 0x0018 /* A2 014 */,0x01, 0xd003, /* SLØYFE-A2 */0x6018  /* TEKN ROM LOFT */},
	{ 0x0019 /* A2 015 */,0x0d, 0xd003, /* SLØYFE-A2 */0x6019  /* SPRINKLER */} 
};

static PointRelations_a PointRelations_OP_CTRL_1012 = {
	25, PointRelationEntry_OP_CTRL_1013  
};
OP_BuzzerSignalsDZ_a	OP_BuzzerSignalsDZ_a_AC_295_1 [3] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				1 /* OP_FIRE_ALARM_BST */,
				100 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2191> UnitName <>  EntityName <OP Buzzer Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				3 /* Prewarning */,
				2 /* OP_PREWARNING_BST */,
				99 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2210> UnitName <>  EntityName <OP Buzzer Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				2 /* Early Warning */,
				6 /* OP_EARLY_WARNING_BST */,
				98 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2211> UnitName <>  EntityName <OP Buzzer Signals DZ> */
};
OP_BuzzerSignalsFault_a	OP_BuzzerSignalsFault_a_AC_307_1 [4] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				95 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2193> UnitName <>  EntityName <OP Buzzer Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				95 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2212> UnitName <>  EntityName <OP Buzzer Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				94 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2213> UnitName <>  EntityName <OP Buzzer Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				93 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2434> UnitName <>  EntityName <OP Buzzer Signals Fault> */
};
OP_BuzzerSignalsDZ_a	OP_BuzzerSignalsDZ_a_AC_295_2 [1] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				1 /* OP_FIRE_ALARM_BST */,
				100 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2195> UnitName <>  EntityName <OP Buzzer Signals DZ> */
};
OP_BuzzerSignalsDZ_a	OP_BuzzerSignalsDZ_a_AC_295_5 [1] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				1 /* OP_FIRE_ALARM_BST */,
				100 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <2207> UnitName <>  EntityName <OP Buzzer Signals DZ> */
};
OP_BuzzerSignalsFault_a	OP_BuzzerSignalsFault_a_AC_444_8 [4] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				95 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <70597> UnitName <>  EntityName <OP Buzzer Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				95 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <70598> UnitName <>  EntityName <OP Buzzer Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				94 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <70599> UnitName <>  EntityName <OP Buzzer Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_BST */,
				93 /* int BuzzerPriority */,
				0 /* Allowed */
			}/* ElementNo 0 UnitNo <70600> UnitName <>  EntityName <OP Buzzer Signals Fault> */
};
OP_BuzzerSignalsEntry_a	OP_BuzzerSignalsEntry_a_AC_293_1 [4] = 
{
	{
		57342 /* int OP_Id */,
		0 /* Operator Panel */,
		3 /* Any */,
		3 /* int DZ_Count */,
		OP_BuzzerSignalsDZ_a_AC_295_1 /* Ptr to array of type OP_BuzzerSignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		4 /* int FaultCount */,
		OP_BuzzerSignalsFault_a_AC_307_1 /* Ptr to array of type OP_BuzzerSignalsFault_a */
	}/* ElementNo 0 UnitNo <2183> UnitName <>  EntityName <OP Buzzer Signals Entry> */,
	{
		57342 /* int OP_Id */,
		1 /* Repeater Panel */,
		3 /* Any */,
		1 /* int DZ_Count */,
		OP_BuzzerSignalsDZ_a_AC_295_2 /* Ptr to array of type OP_BuzzerSignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL
	}/* ElementNo 0 UnitNo <2184> UnitName <>  EntityName <OP Buzzer Signals Entry> */,
	{
		57342 /* int OP_Id */,
		2 /* Information Panel */,
		3 /* Any */,
		1 /* int DZ_Count */,
		OP_BuzzerSignalsDZ_a_AC_295_5 /* Ptr to array of type OP_BuzzerSignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		4 /* int FaultCount */,
		OP_BuzzerSignalsFault_a_AC_444_8 /* Ptr to array of type OP_BuzzerSignalsFault_a */
	}/* ElementNo 0 UnitNo <2187> UnitName <>  EntityName <OP Buzzer Signals Entry> */,
	{
		57342 /* int OP_Id */,
		3 /* AutroCom */,
		3 /* Any */,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL
	}/* ElementNo 0 UnitNo <2188> UnitName <>  EntityName <OP Buzzer Signals Entry> */
};


OP_BuzzerSignals_a	OP_BuzzerSignals_a_0 = 
{
	4 /* int OP_BuzzerSignalsEntryCount */,
	OP_BuzzerSignalsEntry_a_AC_293_1 /* Ptr to array of type OP_BuzzerSignalsEntry_a */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_21 [4] = 
{
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				3 /* DZ_ACT_DELAYED_T1_BLOCK */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2445> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				0 /* DZ_ACT_ON */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2456> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				98 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2524> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				97 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2525> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_14 [3] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2477> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					11 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70322> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					14 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70324> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_19 [6] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2480> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				10 /* OP_FAD_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2485> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				11 /* OP_FARE_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2486> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2487> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2765> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				3 /* char UnitSubType */,
				5 /* DISABLED */,
				7 /* EQUIPMENT_OPERATION */,
				34 /* OP_EXTINGUISHING_ISOLATED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70326> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_14 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2482> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_16 [20] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2484> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2488> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2489> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2490> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2492> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2493> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2494> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2495> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				9 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2496> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2497> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2498> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2499> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2789> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2791> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2790> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70327> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70328> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70329> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70460> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				255 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70461> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsPoint_a	OP_LED_SignalsPoint_a_AC_449_8 [4] = 
{
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				0 /* POINT_INHIBITED_PAS_A */,
				4 /* ANY_STATE_POC */,
				2 /* SMOKE_VOID_PSS */,
				19 /* OP_POINT_INHIBITED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70371> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				2 /* MULTISENSOR_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70420> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				3 /* HEAT_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70421> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				4 /* ANY_STATE_POC */,
				1 /* SMOKE_IN_DETECTOR_PSS */,
				25 /* OP_ACTIVE_SENSOR_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70548> UnitName <>  EntityName <OP LED Signals POINT> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_312_1 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2072> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2123> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_316_1 [3] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2166> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					11 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70330> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					14 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70332> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_320_1 [6] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2077> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				10 /* OP_FAD_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2126> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				11 /* OP_FARE_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2127> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2128> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2764> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				3 /* char UnitSubType */,
				5 /* DISABLED */,
				7 /* EQUIPMENT_OPERATION */,
				34 /* OP_EXTINGUISHING_ISOLATED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70334> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_322_1 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2079> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_324_1 [20] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2081> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2129> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2130> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2131> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2133> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2134> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2135> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2136> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				9 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2291> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2292> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2293> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2294> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2792> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2793> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2794> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70335> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70336> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70337> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70462> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				255 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70463> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsPoint_a	OP_LED_SignalsPoint_a_AC_449_7 [4] = 
{
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				0 /* POINT_INHIBITED_PAS_A */,
				4 /* ANY_STATE_POC */,
				2 /* SMOKE_VOID_PSS */,
				19 /* OP_POINT_INHIBITED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70365> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				2 /* MULTISENSOR_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70422> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				3 /* HEAT_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70423> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				4 /* ANY_STATE_POC */,
				1 /* SMOKE_IN_DETECTOR_PSS */,
				25 /* OP_ACTIVE_SENSOR_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70549> UnitName <>  EntityName <OP LED Signals POINT> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_22 [4] = 
{
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				3 /* DZ_ACT_DELAYED_T1_BLOCK */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70270> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				0 /* DZ_ACT_ON */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70271> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				98 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2526> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				97 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2527> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_15 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2501> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_20 [3] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2504> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2514> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2771> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_17 [5] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2506> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2515> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2648> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2649> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2798> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_312_2 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2083> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2137> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_316_2 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2170> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_320_2 [3] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2088> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2138> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2773> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_324_2 [5] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2090> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2139> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2652> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2653> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2804> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_23 [4] = 
{
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				3 /* DZ_ACT_DELAYED_T1_BLOCK */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2453> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				0 /* DZ_ACT_ON */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2458> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				98 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2528> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				97 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2529> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_22 [3] = 
{
			{
				65535 /* int UnitId */,
				2 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2517> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				2 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2522> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2774> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_15 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2519> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_19 [5] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2521> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2523> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2781> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2782> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70457> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_312_6 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2105> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2150> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_320_4 [3] = 
{
			{
				65535 /* int UnitId */,
				2 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2107> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				2 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2151> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2775> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_322_4 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2109> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_324_4 [5] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2111> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2152> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2783> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2784> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70458> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_28 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2845> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2855> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_19 [3] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2847> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					11 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70354> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					14 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70356> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_27 [6] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2850> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				10 /* OP_FAD_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2856> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				11 /* OP_FARE_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2857> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2858> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2859> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				3 /* char UnitSubType */,
				5 /* DISABLED */,
				7 /* EQUIPMENT_OPERATION */,
				34 /* OP_EXTINGUISHING_ISOLATED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70358> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_19 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2852> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_24 [20] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2854> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2860> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2861> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2862> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2863> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2864> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2865> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2866> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				9 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2867> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2868> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2869> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2870> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2871> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2872> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2873> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70359> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70360> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70361> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70464> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				255 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70465> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsPoint_a	OP_LED_SignalsPoint_a_AC_449_6 [4] = 
{
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				0 /* POINT_INHIBITED_PAS_A */,
				4 /* ANY_STATE_POC */,
				2 /* SMOKE_VOID_PSS */,
				19 /* OP_POINT_INHIBITED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70363> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				2 /* MULTISENSOR_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70424> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				3 /* HEAT_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70425> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				4 /* ANY_STATE_POC */,
				1 /* SMOKE_IN_DETECTOR_PSS */,
				25 /* OP_ACTIVE_SENSOR_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70550> UnitName <>  EntityName <OP LED Signals POINT> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_312_7 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2113> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2153> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_316_4 [3] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2180> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					11 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70429> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					14 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70417> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_320_5 [6] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2118> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				10 /* OP_FAD_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2154> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				11 /* OP_FARE_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2155> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2156> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2776> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				3 /* char UnitSubType */,
				5 /* DISABLED */,
				7 /* EQUIPMENT_OPERATION */,
				34 /* OP_EXTINGUISHING_ISOLATED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70416> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_322_5 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2120> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_324_5 [20] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2122> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2807> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2808> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2157> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2160> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2809> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2810> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2161> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				9 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2811> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2162> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2812> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2163> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70453> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70454> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70455> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70431> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70432> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70419> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70466> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				255 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70467> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsPoint_a	OP_LED_SignalsPoint_a_AC_449_9 [4] = 
{
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				0 /* POINT_INHIBITED_PAS_A */,
				4 /* ANY_STATE_POC */,
				2 /* SMOKE_VOID_PSS */,
				19 /* OP_POINT_INHIBITED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70415> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				2 /* MULTISENSOR_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70426> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				3 /* HEAT_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70427> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				4 /* ANY_STATE_POC */,
				1 /* SMOKE_IN_DETECTOR_PSS */,
				25 /* OP_ACTIVE_SENSOR_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70552> UnitName <>  EntityName <OP LED Signals POINT> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_20 [3] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2374> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				9 /* DZ Any State */,
				2 /* DZ_ACT_DELAYED_T1_DELAY */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2380> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				98 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2381> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_13 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2376> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_16 [1] = 
{
			{
				57854 /* int UnitId */,
				5 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				3 /* VOID_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2379> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsEvent_a	OP_LED_SignalsEvent_a_AC_457_4 [1] = 
{
			{
				2 /* RESET_IN_PROGRESS */,
				0 /* Void */,
				18 /* OP_RESET_IN_PROGRESS_LED */,
				3 /* VOID_LC */,
				4 /* INDICATE_EVENT */,
				0 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2425> UnitName <>  EntityName <OP LED Signals Event> */
};
OP_LED_SignalsEvent_a	OP_LED_SignalsEvent_a_AC_457_3 [1] = 
{
			{
				1 /* SILENCE_IN_PROGRESS */,
				0 /* Void */,
				17 /* OP_SILENCE_IN_PROGRESS_LED */,
				3 /* VOID_LC */,
				4 /* INDICATE_EVENT */,
				0 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2420> UnitName <>  EntityName <OP LED Signals Event> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_18 [2] = 
{
			{
				65535 /* int UnitId */,
				10 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2423> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				0 /* ACT_CMD */,
				9 /* OP_FUNC_DISABLED_LED */,
				0 /* GREEN_LC */,
				0 /* BLINK */,
				0 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2777> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_24 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2593> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2626> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_16 [3] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2595> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					11 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70438> UnitName <>  EntityName <OP LED Signals Status> */,
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					3 /* char UnitSubType */,
					8 /* char UnitState1 */,
					14 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				33 /* OP_EXTINGUISHING_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70440> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_23 [6] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2598> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				10 /* OP_FAD_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2627> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				11 /* OP_FARE_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2628> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				255 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2629> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2778> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				49150 /* int UnitId */,
				3 /* char UnitSubType */,
				5 /* DISABLED */,
				7 /* EQUIPMENT_OPERATION */,
				34 /* OP_EXTINGUISHING_ISOLATED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70442> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_16 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2600> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_20 [20] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2602> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2630> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2631> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2632> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2634> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2635> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2636> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2637> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				9 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2638> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2639> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2640> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2641> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70443> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				45054 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				7 /* OP_FAD_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70444> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				49150 /* int UnitId */,
				9 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				8 /* OP_FARE_FAULT_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70445> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70446> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70447> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				3 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70448> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70468> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				57342 /* int UnitId */,
				255 /* char UnitSubType */,
				1570 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				35 /* OP_LOCAL_MODE_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70469> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsPoint_a	OP_LED_SignalsPoint_a_AC_449_10 [4] = 
{
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				0 /* POINT_INHIBITED_PAS_A */,
				4 /* ANY_STATE_POC */,
				2 /* SMOKE_VOID_PSS */,
				19 /* OP_POINT_INHIBITED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70450> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				2 /* MULTISENSOR_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70451> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				3 /* HEAT_ONLY_POC */,
				2 /* SMOKE_VOID_PSS */,
				24 /* OP_REDUCED_DETECTION_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70452> UnitName <>  EntityName <OP LED Signals POINT> */,
			{
				24574 /* int PointId */,
				12 /* POINT_ANY_STATE */,
				2 /* POINT_ANY_STATE_PAS */,
				4 /* ANY_STATE_POC */,
				1 /* SMOKE_IN_DETECTOR_PSS */,
				25 /* OP_ACTIVE_SENSOR_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70551> UnitName <>  EntityName <OP LED Signals POINT> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_25 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2604> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2623> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_17 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2606> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_24 [3] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2609> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2624> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2779> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_21 [5] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2611> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2625> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2654> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2655> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70456> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_26 [2] = 
{
			{
				40958 /* int DZ_Id */,
				4 /* Alarm */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2613> UnitName <>  EntityName <OP LED Signals DZ> */,
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				99 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2622> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_25 [3] = 
{
			{
				65535 /* int UnitId */,
				2 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2615> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				57854 /* int UnitId */,
				2 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2621> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2780> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_17 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2617> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_22 [5] = 
{
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2619> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2620> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2785> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <2786> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70459> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_20 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70475> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_21 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70480> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_29 [2] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70528> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70529> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_26 [5] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70531> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70532> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70533> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70534> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70535> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_20 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70495> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_22 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70483> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_28 [2] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70486> UnitName <>  EntityName <OP LED Signals Arm> */,
			{
				54270 /* int UnitId */,
				255 /* char UnitSubType */,
				0 /* ENABLE_IN_PROGRESS */,
				30 /* SOURCE_VOID */,
				9 /* OP_FUNC_DISABLED_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70487> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsFault_a	OP_LED_SignalsFault_a_AC_463_25 [5] = 
{
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				35583 /* int UnitFaultType */,
				5 /* VOID_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70489> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				1 /* FAULT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70490> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				3 /* OK_NOT_ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70491> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				1 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				2 /* ACCEPTED_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				90 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70492> UnitName <>  EntityName <OP LED Signals Fault> */,
			{
				65535 /* int UnitId */,
				255 /* char UnitSubType */,
				32767 /* int UnitFaultType */,
				7 /* ACCEPT_TIMEOUT_FS */,
				5 /* OP_FAULT_WARNING_LED */,
				1 /* YELLOW_LC */,
				0 /* BLINK */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70493> UnitName <>  EntityName <OP LED Signals Fault> */
};
OP_LED_SignalsTest_a	OP_LED_SignalsTest_a_AC_461_21 [1] = 
{
			{
				65535 /* int UnitId */,
				4 /* IN_ZONE_TEST */,
				13 /* OP_TEST_LED */,
				1 /* YELLOW_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70497> UnitName <>  EntityName <OP LED Signals Test> */
};
OP_LED_SignalsStatus_a	OP_LED_SignalsStatus_a_AC_455_23 [1] = 
{
			{
				49150 /* int UnitId */,
				{	/* Unit OP Act State Struct 2 */
					10 /* FPE */,
					9 /* char UnitSubType */,
					1 /* char UnitState1 */,
					17 /* char UnitState2 */
				},
				0 /* char DummyPadding */,
				3 /* OP_FARE_FWRE_ACTIVATED_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70583> UnitName <>  EntityName <OP LED Signals Status> */
};
OP_LED_SignalsDZ_a	OP_LED_SignalsDZ_a_AC_451_29 [1] = 
{
			{
				40958 /* int DZ_Id */,
				5 /* Alarm Acc */,
				7 /* DZ_ACT_ANY_STATE */,
				3 /* ANY_LADS */,
				4 /* OP_ALARM_LED */,
				2 /* RED_LC */,
				1 /* STEADY */,
				98 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70586> UnitName <>  EntityName <OP LED Signals DZ> */
};
OP_LED_SignalsArm_a	OP_LED_SignalsArm_a_AC_459_30 [1] = 
{
			{
				57854 /* int UnitId */,
				5 /* char UnitSubType */,
				5 /* DISABLED */,
				30 /* SOURCE_VOID */,
				12 /* OP_OUTPUTS_DELAYED_LED */,
				3 /* VOID_LC */,
				1 /* STEADY */,
				100 /* int LED_SignalPriority */
			}/* ElementNo 0 UnitNo <70588> UnitName <>  EntityName <OP LED Signals Arm> */
};
OP_LED_SignalsEntry_a	OP_LED_SignalsEntry_a_AC_310_1 [22] = 
{
	{
		57342 /* int OP_Id */,
		0 /* Operator Panel */,
		5 /* Solas */,
		4 /* int POINT_Count */,
		OP_LED_SignalsPoint_a_AC_449_8 /* Ptr to array of type OP_LED_SignalsPoint_a */,
		4 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_21 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		3 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_14 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		6 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_19 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_14 /* Ptr to array of type OP_LED_SignalsTest_a */,
		20 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_16 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2441> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		0 /* Operator Panel */,
		0 /* Standard */,
		4 /* int POINT_Count */,
		OP_LED_SignalsPoint_a_AC_449_7 /* Ptr to array of type OP_LED_SignalsPoint_a */,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_312_1 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		3 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_316_1 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		6 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_320_1 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_322_1 /* Ptr to array of type OP_LED_SignalsTest_a */,
		20 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_324_1 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2065> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		1 /* Repeater Panel */,
		5 /* Solas */,
		0 /* int POINT_Count */,
		NULL,
		4 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_22 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_15 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		3 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_20 /* Ptr to array of type OP_LED_SignalsArm_a */,
		0 /* int TestCount */,
		NULL,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_17 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2442> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		1 /* Repeater Panel */,
		0 /* Standard */,
		0 /* int POINT_Count */,
		NULL,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_312_2 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_316_2 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		3 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_320_2 /* Ptr to array of type OP_LED_SignalsArm_a */,
		0 /* int TestCount */,
		NULL,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_324_2 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2066> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		2 /* Information Panel */,
		5 /* Solas */,
		0 /* int POINT_Count */,
		NULL,
		4 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_23 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		3 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_22 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_15 /* Ptr to array of type OP_LED_SignalsTest_a */,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_19 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2443> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		2 /* Information Panel */,
		0 /* Standard */,
		0 /* int POINT_Count */,
		NULL,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_312_6 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		3 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_320_4 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_322_4 /* Ptr to array of type OP_LED_SignalsTest_a */,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_324_4 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2069> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		0 /* Operator Panel */,
		4 /* OilAndGas */,
		4 /* int POINT_Count */,
		OP_LED_SignalsPoint_a_AC_449_6 /* Ptr to array of type OP_LED_SignalsPoint_a */,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_28 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		3 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_19 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		6 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_27 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_19 /* Ptr to array of type OP_LED_SignalsTest_a */,
		20 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_24 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2843> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		3 /* AutroCom */,
		3 /* Any */,
		4 /* int POINT_Count */,
		OP_LED_SignalsPoint_a_AC_449_9 /* Ptr to array of type OP_LED_SignalsPoint_a */,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_312_7 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		3 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_316_4 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		6 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_320_5 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_322_5 /* Ptr to array of type OP_LED_SignalsTest_a */,
		20 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_324_5 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2070> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		4 /* DID */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2290> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		5 /* LARM_LAGRINGS_PANEL */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		3 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_20 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_13 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		1 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_16 /* Ptr to array of type OP_LED_SignalsArm_a */,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2372> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		9 /* RESET_INDICATOR */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		1 /* int EventCount */,
		OP_LED_SignalsEvent_a_AC_457_4 /* Ptr to array of type OP_LED_SignalsEvent_a */,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2413> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		8 /* SILENCE_INDICATOR */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		1 /* int EventCount */,
		OP_LED_SignalsEvent_a_AC_457_3 /* Ptr to array of type OP_LED_SignalsEvent_a */,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2418> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		10 /* DISABLE_INDICATOR */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		2 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_18 /* Ptr to array of type OP_LED_SignalsArm_a */,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2421> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		0 /* Operator Panel */,
		3 /* Any */,
		4 /* int POINT_Count */,
		OP_LED_SignalsPoint_a_AC_449_10 /* Ptr to array of type OP_LED_SignalsPoint_a */,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_24 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		3 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_16 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		6 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_23 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_16 /* Ptr to array of type OP_LED_SignalsTest_a */,
		20 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_20 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2589> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		1 /* Repeater Panel */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_25 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_17 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		3 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_24 /* Ptr to array of type OP_LED_SignalsArm_a */,
		0 /* int TestCount */,
		NULL,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_21 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2590> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		2 /* Information Panel */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		2 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_26 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		3 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_25 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_17 /* Ptr to array of type OP_LED_SignalsTest_a */,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_22 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2591> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		12 /* EDNC */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <2720> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		17 /* LOCAL ALARM DELAY */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		0 /* int StatusCount */,
		NULL,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <70428> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		18 /* BU-110AUS Fire Brigade Panel */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_20 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		0 /* int ArmCount */,
		NULL,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <70473> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		19 /* BV-110 Information Panel */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_21 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		2 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_29 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_20 /* Ptr to array of type OP_LED_SignalsTest_a */,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_26 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <70477> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		20 /* BU-110 Fire Brigade Panel */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		0 /* int DZ_Count */,
		NULL,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_22 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		2 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_28 /* Ptr to array of type OP_LED_SignalsArm_a */,
		1 /* int TestCount */,
		OP_LED_SignalsTest_a_AC_461_21 /* Ptr to array of type OP_LED_SignalsTest_a */,
		5 /* int FaultCount */,
		OP_LED_SignalsFault_a_AC_463_25 /* Ptr to array of type OP_LED_SignalsFault_a */,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <70478> UnitName <>  EntityName <OP LED Signals Entry> */,
	{
		57342 /* int OP_Id */,
		24 /* BU-111 Larmlagringspanel */,
		3 /* Any */,
		0 /* int POINT_Count */,
		NULL,
		1 /* int DZ_Count */,
		OP_LED_SignalsDZ_a_AC_451_29 /* Ptr to array of type OP_LED_SignalsDZ_a */,
		0 /* int IZ_Count */,
		NULL,
		1 /* int StatusCount */,
		OP_LED_SignalsStatus_a_AC_455_23 /* Ptr to array of type OP_LED_SignalsStatus_a */,
		0 /* int EventCount */,
		NULL,
		1 /* int ArmCount */,
		OP_LED_SignalsArm_a_AC_459_30 /* Ptr to array of type OP_LED_SignalsArm_a */,
		0 /* int TestCount */,
		NULL,
		0 /* int FaultCount */,
		NULL,
		0 /* int GroupDisableCount */,
		NULL
	}/* ElementNo 0 UnitNo <70581> UnitName <>  EntityName <OP LED Signals Entry> */
};


OP_LED_Signals_a	OP_LED_Signals_a_0 = 
{
	22 /* int OP_LED_SignalsEntryCount */,
	OP_LED_SignalsEntry_a_AC_310_1 /* Ptr to array of type OP_LED_SignalsEntry_a */
};

static OP_LED_Signals_a OP_LED_Signals_OP_CTRL_1014 = {
	0, NULL  
};

static PresentsLogsInEntry_a PresentsLogsInEntry_OP_CTRL_1017[2] = {
	{ 0xd801 /* OP (Operator Panel) */,0xf601  /* Log Controller */},
	{ 0xd802 /* REMOTE PILOT */,0xf601  /* Log Controller */} 
};

static PresentsLogsIn_a PresentsLogsIn_OP_CTRL_1016 = {
	2, PresentsLogsInEntry_OP_CTRL_1017  
};
UnitTypeActOpEqState_a	UnitTypeActOpEqState_a_AC_564_1 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				0 /* char SubType */,
				0 /* char UnitState1 */,
				0 /* char UnitState2 */
			}/* ElementNo 0 UnitNo <1876> UnitName <>  EntityName <Gives OP Textual Indication On Comp Status Event> */
};
UnitTypeActOpEqState_a	UnitTypeActOpEqState_a_AC_564_4 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				0 /* char SubType */,
				0 /* char UnitState1 */,
				0 /* char UnitState2 */
			}/* ElementNo 0 UnitNo <1882> UnitName <>  EntityName <Gives OP Textual Indication On Comp Status Event> */
};
GivesOP_TextualIndicationOnCompStatusEventsEntry_a	GivesOP_TextualIndicationOnCompStatusEventsEntry_a_AC_421_1 [2] = 
{
	{
		0 /* Operator Panel */,
		3 /* Any */,
		1 /* int UnitTypeOpActStateCount */,
		UnitTypeActOpEqState_a_AC_564_1 /* Ptr to array of type UnitTypeActOpEqState_a */
	}/* ElementNo 0 UnitNo <1863> UnitName <>  EntityName <Gives OP Textual Indication On Comp Status Event Entry> */,
	{
		3 /* AutroCom */,
		3 /* Any */,
		1 /* int UnitTypeOpActStateCount */,
		UnitTypeActOpEqState_a_AC_564_4 /* Ptr to array of type UnitTypeActOpEqState_a */
	}/* ElementNo 0 UnitNo <1874> UnitName <>  EntityName <Gives OP Textual Indication On Comp Status Event Entry> */
};


GivesOP_TextualIndicationOnCompStatusEvents_a	GivesOP_TextualIndicationOnCompStatusEvents_a_0 = 
{
	2 /* int GivesOP_TextualIndicationOnCompStatusEventsEntryCount */,
	GivesOP_TextualIndicationOnCompStatusEventsEntry_a_AC_421_1 /* Ptr to array of type GivesOP_TextualIndicationOnCompStatusEventsEntry_a */
};
GivesOP_TextualIndicationOnArmEvent_a	GivesOP_TextualIndicationOnArmEvent_a_AC_428_1 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				7 /* ANY_STATE_ARM */
			}/* ElementNo 0 UnitNo <1886> UnitName <>  EntityName <Gives OP Textual Indication On Arm Entry> */
};
GivesOP_TextualIndicationOnArmEvent_a	GivesOP_TextualIndicationOnArmEvent_a_AC_428_2 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				7 /* ANY_STATE_ARM */
			}/* ElementNo 0 UnitNo <1888> UnitName <>  EntityName <Gives OP Textual Indication On Arm Entry> */
};
GivesOP_TextualIndicationOnArmEvent_a	GivesOP_TextualIndicationOnArmEvent_a_AC_428_3 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				7 /* ANY_STATE_ARM */
			}/* ElementNo 0 UnitNo <1890> UnitName <>  EntityName <Gives OP Textual Indication On Arm Entry> */
};
GivesOP_TextualIndicationOnArmEvent_a	GivesOP_TextualIndicationOnArmEvent_a_AC_569_4 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				7 /* ANY_STATE_ARM */
			}/* ElementNo 0 UnitNo <70504> UnitName <>  EntityName <Gives OP Textual Indication On Arm Entry> */
};
GivesOP_TextualIndicationOnArmEvent_a	GivesOP_TextualIndicationOnArmEvent_a_AC_569_5 [1] = 
{
			{
				6 /* DZ */,
				7 /* ANY_STATE_ARM */
			}/* ElementNo 0 UnitNo <70555> UnitName <>  EntityName <Gives OP Textual Indication On Arm Entry> */
};
GivesOP_TextualIndicationOnArmEventsEntry_a	GivesOP_TextualIndicationOnArmEventsEntry_a_AC_426_1 [5] = 
{
	{
		0 /* Operator Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnArmEventCount */,
		GivesOP_TextualIndicationOnArmEvent_a_AC_428_1 /* Ptr to array of type GivesOP_TextualIndicationOnArmEvent_a */
	}/* ElementNo 0 UnitNo <1865> UnitName <>  EntityName <Gives OP Textual Indication On Arm Events Entry> */,
	{
		2 /* Information Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnArmEventCount */,
		GivesOP_TextualIndicationOnArmEvent_a_AC_428_2 /* Ptr to array of type GivesOP_TextualIndicationOnArmEvent_a */
	}/* ElementNo 0 UnitNo <1883> UnitName <>  EntityName <Gives OP Textual Indication On Arm Events Entry> */,
	{
		3 /* AutroCom */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnArmEventCount */,
		GivesOP_TextualIndicationOnArmEvent_a_AC_428_3 /* Ptr to array of type GivesOP_TextualIndicationOnArmEvent_a */
	}/* ElementNo 0 UnitNo <1884> UnitName <>  EntityName <Gives OP Textual Indication On Arm Events Entry> */,
	{
		19 /* BV-110 Information Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnArmEventCount */,
		GivesOP_TextualIndicationOnArmEvent_a_AC_569_4 /* Ptr to array of type GivesOP_TextualIndicationOnArmEvent_a */
	}/* ElementNo 0 UnitNo <70502> UnitName <>  EntityName <Gives OP Textual Indication On Arm Events Entry> */,
	{
		18 /* BU-110AUS Fire Brigade Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnArmEventCount */,
		GivesOP_TextualIndicationOnArmEvent_a_AC_569_5 /* Ptr to array of type GivesOP_TextualIndicationOnArmEvent_a */
	}/* ElementNo 0 UnitNo <70553> UnitName <>  EntityName <Gives OP Textual Indication On Arm Events Entry> */
};


GivesOP_TextualIndicationOnArmEvents_a	GivesOP_TextualIndicationOnArmEvents_a_0 = 
{
	5 /* int GivesOP_TextualIndicationOnArmEventsEntryCount */,
	GivesOP_TextualIndicationOnArmEventsEntry_a_AC_426_1 /* Ptr to array of type GivesOP_TextualIndicationOnArmEventsEntry_a */
};
GivesOP_TextualIndicationOnRedundancyEvent_a	GivesOP_TextualIndicationOnRedundancyEvent_a_AC_574_1 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				2 /* ANY_STATE_REDUNDANCY_RS_A */
			}/* ElementNo 0 UnitNo <70297> UnitName <>  EntityName <Gives OP Textual Indication On Redundancy Entry> */
};
GivesOP_TextualIndicationOnRedundancyEvent_a	GivesOP_TextualIndicationOnRedundancyEvent_a_AC_574_2 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				2 /* ANY_STATE_REDUNDANCY_RS_A */
			}/* ElementNo 0 UnitNo <70301> UnitName <>  EntityName <Gives OP Textual Indication On Redundancy Entry> */
};
GivesOP_TextualIndicationOnRedundancyEvent_a	GivesOP_TextualIndicationOnRedundancyEvent_a_AC_574_3 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				2 /* ANY_STATE_REDUNDANCY_RS_A */
			}/* ElementNo 0 UnitNo <70303> UnitName <>  EntityName <Gives OP Textual Indication On Redundancy Entry> */
};
GivesOP_TextualIndicationOnRedundancyEventsEntry_a	GivesOP_TextualIndicationOnRedundancyEventsEntry_a_AC_572_1 [3] = 
{
	{
		0 /* Operator Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnRedundancyEventCount */,
		GivesOP_TextualIndicationOnRedundancyEvent_a_AC_574_1 /* Ptr to array of type GivesOP_TextualIndicationOnRedundancyEvent_a */
	}/* ElementNo 0 UnitNo <70295> UnitName <>  EntityName <Gives OP Textual Indication On Redundancy Events Entry> */,
	{
		2 /* Information Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnRedundancyEventCount */,
		GivesOP_TextualIndicationOnRedundancyEvent_a_AC_574_2 /* Ptr to array of type GivesOP_TextualIndicationOnRedundancyEvent_a */
	}/* ElementNo 0 UnitNo <70298> UnitName <>  EntityName <Gives OP Textual Indication On Redundancy Events Entry> */,
	{
		3 /* AutroCom */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnRedundancyEventCount */,
		GivesOP_TextualIndicationOnRedundancyEvent_a_AC_574_3 /* Ptr to array of type GivesOP_TextualIndicationOnRedundancyEvent_a */
	}/* ElementNo 0 UnitNo <70299> UnitName <>  EntityName <Gives OP Textual Indication On Redundancy Events Entry> */
};


GivesOP_TextualIndicationOnRedundancyEvents_a	GivesOP_TextualIndicationOnRedundancyEvents_a_0 = 
{
	3 /* int GivesOP_TextualIndicationOnRedundancyEventsEntryCount */,
	GivesOP_TextualIndicationOnRedundancyEventsEntry_a_AC_572_1 /* Ptr to array of type GivesOP_TextualIndicationOnRedundancyEventsEntry_a */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_14 [1] = 
{
			{
				9 /* DZ Any State */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <2561> UnitName <>  EntityName <DZ Alarm State Entry> */
};
IZ_OpState_a	IZ_OpState_a_AC_479_10 [1] = 
{
			12 /* FAD_IZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2563> UnitName <>  EntityName <IZ OP State Entry> */
};
OZ_OpState_a	OZ_OpState_a_AC_481_13 [1] = 
{
			6 /* OZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2565> UnitName <>  EntityName <OZ OP State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_7 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <2567> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_15 [3] = 
{
			{
				4 /* Alarm */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <2569> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				5 /* Alarm Acc */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70262> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				7 /* Quiescent */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70263> UnitName <>  EntityName <DZ Alarm State Entry> */
};
OZ_OpState_a	OZ_OpState_a_AC_481_14 [1] = 
{
			6 /* OZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2571> UnitName <>  EntityName <OZ OP State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_9 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <70267> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_16 [1] = 
{
			{
				9 /* DZ Any State */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <2573> UnitName <>  EntityName <DZ Alarm State Entry> */
};
IZ_OpState_a	IZ_OpState_a_AC_479_11 [1] = 
{
			12 /* FAD_IZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2575> UnitName <>  EntityName <IZ OP State Entry> */
};
OZ_OpState_a	OZ_OpState_a_AC_481_15 [1] = 
{
			6 /* OZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2577> UnitName <>  EntityName <OZ OP State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_10 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <70269> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_17 [1] = 
{
			{
				9 /* DZ Any State */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <2579> UnitName <>  EntityName <DZ Alarm State Entry> */
};
IZ_OpState_a	IZ_OpState_a_AC_479_12 [1] = 
{
			12 /* FAD_IZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2581> UnitName <>  EntityName <IZ OP State Entry> */
};
OZ_OpState_a	OZ_OpState_a_AC_481_16 [1] = 
{
			6 /* OZ_ANY_STATE *//* ElementNo 27130017 UnitNo <2583> UnitName <>  EntityName <OZ OP State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_8 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <2585> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_19 [3] = 
{
			{
				4 /* Alarm */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70507> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				5 /* Alarm Acc */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70508> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				7 /* Quiescent */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70518> UnitName <>  EntityName <DZ Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_20 [3] = 
{
			{
				4 /* Alarm */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70512> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				5 /* Alarm Acc */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70513> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				7 /* Quiescent */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70519> UnitName <>  EntityName <DZ Alarm State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_12 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <70559> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_21 [3] = 
{
			{
				4 /* Alarm */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70516> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				5 /* Alarm Acc */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70517> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				7 /* Quiescent */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70520> UnitName <>  EntityName <DZ Alarm State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_13 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <70561> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventDZ_a	GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_22 [3] = 
{
			{
				4 /* Alarm */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70591> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				5 /* Alarm Acc */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70592> UnitName <>  EntityName <DZ Alarm State Entry> */,
			{
				7 /* Quiescent */,
				10 /* VOID_SMAC */,
				2 /* VOID_SMIN_A */
			}/* ElementNo 0 UnitNo <70593> UnitName <>  EntityName <DZ Alarm State Entry> */
};
PointAlarmState_a	PointAlarmState_a_AC_475_14 [1] = 
{
			12 /* POINT_ANY_STATE *//* ElementNo 27130017 UnitNo <70595> UnitName <>  EntityName <Point Alarm State Entry> */
};
GivesOP_TextualIndicationOnAlarmEventsEntry_a	GivesOP_TextualIndicationOnAlarmEventsEntry_a_AC_577_2 [9] = 
{
	{
		0 /* Operator Panel */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_7 /* Ptr to array of type PointAlarmState_a */,
		1 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_14 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		1 /* int IZ_OpStateCount */,
		IZ_OpState_a_AC_479_10 /* Ptr to array of type IZ_OpState_a */,
		1 /* int OZ_OpStateCount */,
		OZ_OpState_a_AC_481_13 /* Ptr to array of type OZ_OpState_a */
	}/* ElementNo 0 UnitNo <2555> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		1 /* Repeater Panel */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_9 /* Ptr to array of type PointAlarmState_a */,
		3 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_15 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		0 /* int IZ_OpStateCount */,
		NULL,
		1 /* int OZ_OpStateCount */,
		OZ_OpState_a_AC_481_14 /* Ptr to array of type OZ_OpState_a */
	}/* ElementNo 0 UnitNo <2556> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		2 /* Information Panel */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_10 /* Ptr to array of type PointAlarmState_a */,
		1 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_16 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		1 /* int IZ_OpStateCount */,
		IZ_OpState_a_AC_479_11 /* Ptr to array of type IZ_OpState_a */,
		1 /* int OZ_OpStateCount */,
		OZ_OpState_a_AC_481_15 /* Ptr to array of type OZ_OpState_a */
	}/* ElementNo 0 UnitNo <2557> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		3 /* AutroCom */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_8 /* Ptr to array of type PointAlarmState_a */,
		1 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_17 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		1 /* int IZ_OpStateCount */,
		IZ_OpState_a_AC_479_12 /* Ptr to array of type IZ_OpState_a */,
		1 /* int OZ_OpStateCount */,
		OZ_OpState_a_AC_481_16 /* Ptr to array of type OZ_OpState_a */
	}/* ElementNo 0 UnitNo <2558> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		5 /* LARM_LAGRINGS_PANEL */,
		3 /* Any */,
		0 /* int PointAlarmStateCount */,
		NULL,
		0 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		NULL,
		0 /* int IZ_OpStateCount */,
		NULL,
		0 /* int OZ_OpStateCount */,
		NULL
	}/* ElementNo 0 UnitNo <2559> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		18 /* BU-110AUS Fire Brigade Panel */,
		3 /* Any */,
		0 /* int PointAlarmStateCount */,
		NULL,
		3 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_19 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		0 /* int IZ_OpStateCount */,
		NULL,
		0 /* int OZ_OpStateCount */,
		NULL
	}/* ElementNo 0 UnitNo <70505> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		19 /* BV-110 Information Panel */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_12 /* Ptr to array of type PointAlarmState_a */,
		3 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_20 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		0 /* int IZ_OpStateCount */,
		NULL,
		0 /* int OZ_OpStateCount */,
		NULL
	}/* ElementNo 0 UnitNo <70510> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		20 /* BU-110 Fire Brigade Panel */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_13 /* Ptr to array of type PointAlarmState_a */,
		3 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_21 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		0 /* int IZ_OpStateCount */,
		NULL,
		0 /* int OZ_OpStateCount */,
		NULL
	}/* ElementNo 0 UnitNo <70514> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */,
	{
		24 /* BU-111 Larmlagringspanel */,
		3 /* Any */,
		1 /* int PointAlarmStateCount */,
		PointAlarmState_a_AC_475_14 /* Ptr to array of type PointAlarmState_a */,
		3 /* int GivesOP_TextualIndicationOnAlarmEventDZ_Count */,
		GivesOP_TextualIndicationOnAlarmEventDZ_a_AC_477_22 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventDZ_a */,
		0 /* int IZ_OpStateCount */,
		NULL,
		0 /* int OZ_OpStateCount */,
		NULL
	}/* ElementNo 0 UnitNo <70589> UnitName <>  EntityName <Gives OP Textual Indication On Alarm Events Entry> */
};


GivesOP_TextualIndicationOnAlarmEvents_a	GivesOP_TextualIndicationOnAlarmEvents_a_0 = 
{
	9 /* int GivesOP_TextualIndicationOnAlarmEventsEntryCount */,
	GivesOP_TextualIndicationOnAlarmEventsEntry_a_AC_577_2 /* Ptr to array of type GivesOP_TextualIndicationOnAlarmEventsEntry_a */
};
GivesOP_TextualIndicationOnTestEvent_a	GivesOP_TextualIndicationOnTestEvent_a_AC_582_5 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				6 /* ANY_STATE_TEST */
			}/* ElementNo 0 UnitNo <2549> UnitName <>  EntityName <Gives OP Textual Indication On Test Event Entry> */
};
GivesOP_TextualIndicationOnTestEvent_a	GivesOP_TextualIndicationOnTestEvent_a_AC_582_6 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				6 /* ANY_STATE_TEST */
			}/* ElementNo 0 UnitNo <2551> UnitName <>  EntityName <Gives OP Textual Indication On Test Event Entry> */
};
GivesOP_TextualIndicationOnTestEvent_a	GivesOP_TextualIndicationOnTestEvent_a_AC_582_7 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				6 /* ANY_STATE_TEST */
			}/* ElementNo 0 UnitNo <2553> UnitName <>  EntityName <Gives OP Textual Indication On Test Event Entry> */
};
GivesOP_TextualIndicationOnTestEventsEntry_a	GivesOP_TextualIndicationOnTestEventsEntry_a_AC_580_2 [3] = 
{
	{
		0 /* Operator Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnTestEventCount */,
		GivesOP_TextualIndicationOnTestEvent_a_AC_582_5 /* Ptr to array of type GivesOP_TextualIndicationOnTestEvent_a */
	}/* ElementNo 0 UnitNo <2545> UnitName <>  EntityName <Gives OP Textual Indication On Test Events Entry> */,
	{
		2 /* Information Panel */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnTestEventCount */,
		GivesOP_TextualIndicationOnTestEvent_a_AC_582_6 /* Ptr to array of type GivesOP_TextualIndicationOnTestEvent_a */
	}/* ElementNo 0 UnitNo <2546> UnitName <>  EntityName <Gives OP Textual Indication On Test Events Entry> */,
	{
		3 /* AutroCom */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnTestEventCount */,
		GivesOP_TextualIndicationOnTestEvent_a_AC_582_7 /* Ptr to array of type GivesOP_TextualIndicationOnTestEvent_a */
	}/* ElementNo 0 UnitNo <2547> UnitName <>  EntityName <Gives OP Textual Indication On Test Events Entry> */
};


GivesOP_TextualIndicationOnTestEvents_a	GivesOP_TextualIndicationOnTestEvents_a_0 = 
{
	3 /* int GivesOP_TextualIndicationOnTestEventsEntryCount */,
	GivesOP_TextualIndicationOnTestEventsEntry_a_AC_580_2 /* Ptr to array of type GivesOP_TextualIndicationOnTestEventsEntry_a */
};
GivesOP_TextualIndicationOnFaultEvent_a	GivesOP_TextualIndicationOnFaultEvent_a_AC_587_6 [2] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				35583 /* int FaultType */
			}/* ElementNo 0 UnitNo <2536> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */,
			{
				30 /* UNIT_TYPE_ANY */,
				32767 /* int FaultType */
			}/* ElementNo 0 UnitNo <2537> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */
};
GivesOP_TextualIndicationOnFaultEvent_a	GivesOP_TextualIndicationOnFaultEvent_a_AC_587_7 [2] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				35583 /* int FaultType */
			}/* ElementNo 0 UnitNo <2539> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */,
			{
				30 /* UNIT_TYPE_ANY */,
				32767 /* int FaultType */
			}/* ElementNo 0 UnitNo <2540> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */
};
GivesOP_TextualIndicationOnFaultEvent_a	GivesOP_TextualIndicationOnFaultEvent_a_AC_587_8 [1] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				32767 /* int FaultType */
			}/* ElementNo 0 UnitNo <2543> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */
};
GivesOP_TextualIndicationOnFaultEvent_a	GivesOP_TextualIndicationOnFaultEvent_a_AC_587_9 [2] = 
{
			{
				30 /* UNIT_TYPE_ANY */,
				35583 /* int FaultType */
			}/* ElementNo 0 UnitNo <70500> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */,
			{
				30 /* UNIT_TYPE_ANY */,
				32767 /* int FaultType */
			}/* ElementNo 0 UnitNo <70501> UnitName <>  EntityName <Gives OP Textual Indication On Fault Event Entry> */
};
GivesOP_TextualIndicationOnFaultEventsEntry_a	GivesOP_TextualIndicationOnFaultEventsEntry_a_AC_585_2 [4] = 
{
	{
		0 /* Operator Panel */,
		3 /* Any */,
		2 /* int GivesOP_TextualIndicationOnFaulteventCount */,
		GivesOP_TextualIndicationOnFaultEvent_a_AC_587_6 /* Ptr to array of type GivesOP_TextualIndicationOnFaultEvent_a */
	}/* ElementNo 0 UnitNo <2532> UnitName <>  EntityName <Gives OP Textual Indication On Fault Events Entry> */,
	{
		2 /* Information Panel */,
		3 /* Any */,
		2 /* int GivesOP_TextualIndicationOnFaulteventCount */,
		GivesOP_TextualIndicationOnFaultEvent_a_AC_587_7 /* Ptr to array of type GivesOP_TextualIndicationOnFaultEvent_a */
	}/* ElementNo 0 UnitNo <2533> UnitName <>  EntityName <Gives OP Textual Indication On Fault Events Entry> */,
	{
		3 /* AutroCom */,
		3 /* Any */,
		1 /* int GivesOP_TextualIndicationOnFaulteventCount */,
		GivesOP_TextualIndicationOnFaultEvent_a_AC_587_8 /* Ptr to array of type GivesOP_TextualIndicationOnFaultEvent_a */
	}/* ElementNo 0 UnitNo <2534> UnitName <>  EntityName <Gives OP Textual Indication On Fault Events Entry> */,
	{
		19 /* BV-110 Information Panel */,
		3 /* Any */,
		2 /* int GivesOP_TextualIndicationOnFaulteventCount */,
		GivesOP_TextualIndicationOnFaultEvent_a_AC_587_9 /* Ptr to array of type GivesOP_TextualIndicationOnFaultEvent_a */
	}/* ElementNo 0 UnitNo <70498> UnitName <>  EntityName <Gives OP Textual Indication On Fault Events Entry> */
};


GivesOP_TextualIndicationOnFaultEvents_a	GivesOP_TextualIndicationOnFaultEvents_a_0 = 
{
	4 /* int GivesOP_TextualIndicationOnFaultEventsEntryCount */,
	GivesOP_TextualIndicationOnFaultEventsEntry_a_AC_585_2 /* Ptr to array of type GivesOP_TextualIndicationOnFaultEventsEntry_a */
};
UnitTypeActOpEqState_a	UnitTypeActOpEqState_a_AC_487_2 [18] = 
{
	{
		0 /* BLC */,
		0 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <440> UnitName <>  EntityName <Unit OP Act State> */,
	{
		2 /* COMPUTER */,
		3 /* char SubType */,
		4 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <441> UnitName <>  EntityName <Unit OP Act State> */,
	{
		4 /* DOMAIN_NETW */,
		0 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <442> UnitName <>  EntityName <Unit OP Act State> */,
	{
		6 /* DZ */,
		3 /* char SubType */,
		1 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <443> UnitName <>  EntityName <Unit OP Act State> */,
	{
		8 /* FAD */,
		4 /* char SubType */,
		4 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <444> UnitName <>  EntityName <Unit OP Act State> */,
	{
		10 /* FPE */,
		3 /* char SubType */,
		0 /* char UnitState1 */,
		10 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <445> UnitName <>  EntityName <Unit OP Act State> */,
	{
		10 /* FPE */,
		6 /* char SubType */,
		0 /* char UnitState1 */,
		4 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <447> UnitName <>  EntityName <Unit OP Act State> */,
	{
		10 /* FPE */,
		7 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <448> UnitName <>  EntityName <Unit OP Act State> */,
	{
		10 /* FPE */,
		8 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <449> UnitName <>  EntityName <Unit OP Act State> */,
	{
		10 /* FPE */,
		14 /* char SubType */,
		0 /* char UnitState1 */,
		18 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <450> UnitName <>  EntityName <Unit OP Act State> */,
	{
		12 /* IZ */,
		0 /* char SubType */,
		4 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <452> UnitName <>  EntityName <Unit OP Act State> */,
	{
		14 /* LOOP */,
		0 /* char SubType */,
		3 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <453> UnitName <>  EntityName <Unit OP Act State> */,
	{
		16 /* OZ */,
		0 /* char SubType */,
		4 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <454> UnitName <>  EntityName <Unit OP Act State> */,
	{
		18 /* OP */,
		14 /* char SubType */,
		5 /* char UnitState1 */,
		1 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <455> UnitName <>  EntityName <Unit OP Act State> */,
	{
		20 /* POINT */,
		23 /* char SubType */,
		1 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <456> UnitName <>  EntityName <Unit OP Act State> */,
	{
		22 /* POWER */,
		0 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <3402> UnitName <>  EntityName <Unit OP Act State> */,
	{
		26 /* LOG_CTRL */,
		0 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <3404> UnitName <>  EntityName <Unit OP Act State> */,
	{
		32 /* CARRIER */,
		1 /* char SubType */,
		0 /* char UnitState1 */,
		0 /* char UnitState2 */
	}/* ElementNo 0 UnitNo <70396> UnitName <>  EntityName <Unit OP Act State> */
};


UnitActOpEqStateDefaults_a	UnitActOpEqStateDefaults_a_0 = 
{
	18 /* int UnitOpActStateCount */,
	UnitTypeActOpEqState_a_AC_487_2 /* Ptr to array of type UnitTypeActOpEqState_a */
};

static DisablementGroups_a DisablementGroups_OP_CTRL_1018 = {
	0, NULL  
};

static UnitActivationGroups_a UnitActivationGroups_OP_CTRL_1020 = {
	0, NULL  
};

static PointCommandGroups_a PointCommandGroups_OP_CTRL_1022 = {
	0, NULL  
};

static LocalAlarmDelay_a LocalAlarmDelay_OP_CTRL_1024 = {
	0, NULL  
};

FaultIndDelayEntry_a FaultIndDelayEntry_OP_CTRL_1027[2] = {
	{0x0016, 0x070e, 0x0000   },
	{0x0016, 0x0b03, 0x0000   } 
};

static FaultIndDelays_a FaultIndDelays_OP_CTRL_1026 = {
	2, FaultIndDelayEntry_OP_CTRL_1027  
};

OP_SCD_Directory_a OP_SCD_Directory_OP_CTRL_1003 = {
	&FaultClearCondition_a_0, 
	&IsOperatedBy_OP_CTRL_1004, 
	&IsLocalToFAD_OP_CTRL_1009, 
	&PointRelations_OP_CTRL_1012, 
	&OP_BuzzerSignals_a_0, 
	&OP_LED_Signals_a_0, 
	&OP_LED_Signals_OP_CTRL_1014, 
	&PresentsLogsIn_OP_CTRL_1016, 
	&GivesOP_TextualIndicationOnCompStatusEvents_a_0, 
	&GivesOP_TextualIndicationOnArmEvents_a_0, 
	&GivesOP_TextualIndicationOnRedundancyEvents_a_0, 
	&GivesOP_TextualIndicationOnAlarmEvents_a_0, 
	&GivesOP_TextualIndicationOnTestEvents_a_0, 
	&GivesOP_TextualIndicationOnFaultEvents_a_0, 
	&UnitActOpEqStateDefaults_a_0, 
	&DisablementGroups_OP_CTRL_1018, 
	&UnitActivationGroups_OP_CTRL_1020, 
	&PointCommandGroups_OP_CTRL_1022, 
	&LocalAlarmDelay_OP_CTRL_1024, 
	&FaultIndDelays_OP_CTRL_1026, 
0x00000000, 0x03f2d878, 0xfefefefe  
};


static CompIdUnitId_a CompIdUnitId_OP_CTRL_1031[1] = {
	{ 0xfb01 /* OZ Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1032[1] = {
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1037[1] = {
	{ 0xf801 /* Computer Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1043[1] = {
	{ 0xe701 /* Domain Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1048[1] = {
	{ 0xe801 /* DZ Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1056[1] = {
	{ 0xeb01 /* FAD Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1061[1] = {
	{ 0xea01 /* FPE Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1066[1] = {
	{ 0xe901 /* AZ Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1079[1] = {
	{ 0xef01 /* Loop Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1085[1] = {
	{ 0xec01 /* OP Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1087[2] = {
	{ 0xd801 /* Operator Panel Equipment */,0xd801  /* OP (Operator Panel) */},
	{ 0xd802 /* REMOTE PILOT */,0xd802  /* REMOTE PILOT */} 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1103[1] = {
	{ 0xd802 /* REMOTE PILOT */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1117[2] = {
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1128[1] = {
	{ 0xee01 /* Point Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1136[1] = {
	{ 0xf901 /* Power Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1144[85] = {
	{ 0xe701 /* Domain Controller */,0xd601  /* Domain Network */},
	{ 0xe701 /* Domain Controller */,0xe701  /* Domain Controller */},
	{ 0xe801 /* DZ Controller */,0x6001  /* BAD LEILIGHET 1 */},
	{ 0xe801 /* DZ Controller */,0x6002  /* SOVEROM LEILIGHET 1 */},
	{ 0xe801 /* DZ Controller */,0x6003  /* STUE LEILIGHET 1 */},
	{ 0xe801 /* DZ Controller */,0x6004  /* STUE LEILIGHET 2 */},
	{ 0xe801 /* DZ Controller */,0x6005  /* SOVEROM LEILIGHET 2 */},
	{ 0xe801 /* DZ Controller */,0x6006  /* BAD LEILIGHET 2 */},
	{ 0xe801 /* DZ Controller */,0x6007  /* BAD LEILIGHET 3 */},
	{ 0xe801 /* DZ Controller */,0x6008  /* SOVEROM LEILIGHET 3 */},
	{ 0xe801 /* DZ Controller */,0x6009  /* STUE LEILIGHET 3 */},
	{ 0xe801 /* DZ Controller */,0x600a  /* STUE LEILIGHET 4 */},
	{ 0xe801 /* DZ Controller */,0x600b  /* SOVEROM LEILIGHET 4 */},
	{ 0xe801 /* DZ Controller */,0x600c  /* BAD LEILIGHET 4 */},
	{ 0xe801 /* DZ Controller */,0x600d  /* MANUELL MELDER GANG NORD */},
	{ 0xe801 /* DZ Controller */,0x600e  /* GARDEROBE */},
	{ 0xe801 /* DZ Controller */,0x600f  /* KONTOR-OPPHOLDSROM */},
	{ 0xe801 /* DZ Controller */,0x6010  /* GANG NORD */},
	{ 0xe801 /* DZ Controller */,0x6011  /* MANUELL MELDER HOVEDINNGANG */},
	{ 0xe801 /* DZ Controller */,0x6012  /* VASKEROM */},
	{ 0xe801 /* DZ Controller */,0x6013  /* KJØKKEN */},
	{ 0xe801 /* DZ Controller */,0x6014  /* BOD */},
	{ 0xe801 /* DZ Controller */,0x6015  /* GANG SØR */},
	{ 0xe801 /* DZ Controller */,0x6016  /* STUE-SPISEROM */},
	{ 0xe801 /* DZ Controller */,0x6017  /* MANUELL MELDER GANG SØR */},
	{ 0xe801 /* DZ Controller */,0x6018  /* TEKN ROM LOFT */},
	{ 0xe801 /* DZ Controller */,0x6019  /* SPRINKLER */},
	{ 0xe801 /* DZ Controller */,0xe801  /* DZ Controller */},
	{ 0xe901 /* AZ Controller */,0xc801  /* ALLE ALARMORGAN */},
	{ 0xe901 /* AZ Controller */,0xe901  /* AZ Controller */},
	{ 0xea01 /* FPE Controller */,0xb001  /* BRANNVESENET */},
	{ 0xea01 /* FPE Controller */,0xb002  /* RESERVE-1 */},
	{ 0xea01 /* FPE Controller */,0xb003  /* HOLDEMAGNET */},
	{ 0xea01 /* FPE Controller */,0xb004  /* FEILUTGANG */},
	{ 0xea01 /* FPE Controller */,0xea01  /* FPE Controller */},
	{ 0xeb01 /* FAD Controller */,0xa001  /* A1 004 */},
	{ 0xeb01 /* FAD Controller */,0xa002  /* A1 008 */},
	{ 0xeb01 /* FAD Controller */,0xa003  /* A1 014 */},
	{ 0xeb01 /* FAD Controller */,0xa004  /* A1 018 */},
	{ 0xeb01 /* FAD Controller */,0xa005  /* A2 005 */},
	{ 0xeb01 /* FAD Controller */,0xa006  /* A2 011 */},
	{ 0xeb01 /* FAD Controller */,0xeb01  /* FAD Controller */},
	{ 0xec01 /* OP Controller */,0xd801  /* OP (Operator Panel) */},
	{ 0xec01 /* OP Controller */,0xd802  /* REMOTE PILOT */},
	{ 0xec01 /* OP Controller */,0xec01  /* OP Controller */},
	{ 0xee01 /* Point Controller */,0x0001  /* A1 001 */},
	{ 0xee01 /* Point Controller */,0x0002  /* A1 003 */},
	{ 0xee01 /* Point Controller */,0x0003  /* A1 005 */},
	{ 0xee01 /* Point Controller */,0x0004  /* A1 006 */},
	{ 0xee01 /* Point Controller */,0x0005  /* A1 007 */},
	{ 0xee01 /* Point Controller */,0x0006  /* A1 009 */},
	{ 0xee01 /* Point Controller */,0x0007  /* A1 011 */},
	{ 0xee01 /* Point Controller */,0x0008  /* A1 013 */},
	{ 0xee01 /* Point Controller */,0x0009  /* A1 015 */},
	{ 0xee01 /* Point Controller */,0x000a  /* A1 016 */},
	{ 0xee01 /* Point Controller */,0x000b  /* A1 017 */},
	{ 0xee01 /* Point Controller */,0x000c  /* A1 019 */},
	{ 0xee01 /* Point Controller */,0x000d  /* A2 001 */},
	{ 0xee01 /* Point Controller */,0x000e  /* A2 002 */},
	{ 0xee01 /* Point Controller */,0x000f  /* A2 003 */},
	{ 0xee01 /* Point Controller */,0x0010  /* A2 004 */},
	{ 0xee01 /* Point Controller */,0x0011  /* A2 006 */},
	{ 0xee01 /* Point Controller */,0x0012  /* A2 007 */},
	{ 0xee01 /* Point Controller */,0x0013  /* A2 008 */},
	{ 0xee01 /* Point Controller */,0x0014  /* A2 009 */},
	{ 0xee01 /* Point Controller */,0x0015  /* A2 010 */},
	{ 0xee01 /* Point Controller */,0x0016  /* A2 012 */},
	{ 0xee01 /* Point Controller */,0x0017  /* A2 013 */},
	{ 0xee01 /* Point Controller */,0x0018  /* A2 014 */},
	{ 0xee01 /* Point Controller */,0x0019  /* A2 015 */},
	{ 0xee01 /* Point Controller */,0xee01  /* Point Controller */},
	{ 0xef01 /* Loop Controller */,0xd001  /* BSL 310 */},
	{ 0xef01 /* Loop Controller */,0xd002  /* SLØYFE-A1 */},
	{ 0xef01 /* Loop Controller */,0xd003  /* SLØYFE-A2 */},
	{ 0xef01 /* Loop Controller */,0xd004  /* BSB-310-1 */},
	{ 0xef01 /* Loop Controller */,0xef01  /* Loop Controller */},
	{ 0xf001 /* BLC Controller */,0xd401  /* BLC_Eq */},
	{ 0xf001 /* BLC Controller */,0xf001  /* BLC Controller */},
	{ 0xf601 /* Log Controller */,0xf601  /* Log Controller */},
	{ 0xf801 /* Computer Controller */,0xd501  /* MainCpu */},
	{ 0xf801 /* Computer Controller */,0xf801  /* Computer Controller */},
	{ 0xf901 /* Power Controller */,0xe001  /* Power */},
	{ 0xf901 /* Power Controller */,0xf901  /* Power Controller */},
	{ 0xfb01 /* OZ Controller */,0xe101  /* KOLHEIVEGEN 10 */},
	{ 0xfb01 /* OZ Controller */,0xfb01  /* OZ Controller */} 
};

static CompIdUnitId_a CompIdUnitId_OP_CTRL_1145[7] = {
	{ 0xea01 /* FPE Controller */,0xffff  },
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xee01 /* Point Controller */,0xd801  /* OP (Operator Panel) */},
	{ 0xee01 /* Point Controller */,0xd802  /* REMOTE PILOT */},
	{ 0xf601 /* Log Controller */,0xffff  },
	{ 0xf801 /* Computer Controller */,0xd801  /* OP (Operator Panel) */},
	{ 0xf801 /* Computer Controller */,0xd802  /* REMOTE PILOT */} 
};

static ACLIB_Object_a ACLIB_Object_OP_CTRL_1029[117] = {
	{/* POINT_ACK_ID */ 0x8000,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* POINT_ARM_CMD_ID */ 0x8002,
	1, CompIdUnitId_OP_CTRL_1128, 
	0, NULL  },
	{/* POINT_TEST_CMD_ID */ 0x8006,
	1, CompIdUnitId_OP_CTRL_1128, 
	0, NULL  },
	{/* POINT_TEST_ACK_ID */ 0x8007,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* POINT_INHIBIT_CMD_ID */ 0x8048,
	1, CompIdUnitId_OP_CTRL_1128, 
	0, NULL  },
	{/* CARRIER_ARM_CMD_ID */ 0x8100,
	0, NULL, 
	0, NULL  },
	{/* CARRIER_ACK_ID */ 0x8102,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* DZ_ACK_ID */ 0xc000,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* DZ_ARM_CMD_ID */ 0xc001,
	1, CompIdUnitId_OP_CTRL_1048, 
	0, NULL  },
	{/* DZ_TEST_CMD_ID */ 0xc005,
	1, CompIdUnitId_OP_CTRL_1048, 
	0, NULL  },
	{/* DZ_USER_CMD_ID */ 0xc007,
	1, CompIdUnitId_OP_CTRL_1048, 
	0, NULL  },
	{/* DZ_USER_CMD_ACK_ID */ 0xc008,
	0, NULL, 
	0, NULL  },
	{/* DZ_TEST_ACK_ID */ 0xc009,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* DZ_SET_ATTRIBUTES_CMD_ID */ 0xc00e,
	1, CompIdUnitId_OP_CTRL_1048, 
	0, NULL  },
	{/* DZ_LOCAL_ALARM_DELAY_CMD_ID */ 0xc010,
	1, CompIdUnitId_OP_CTRL_1048, 
	0, NULL  },
	{/* FAD_ACK_ID */ 0xe000,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* FAD_ACT_CMD_ID */ 0xe001,
	1, CompIdUnitId_OP_CTRL_1056, 
	0, NULL  },
	{/* FAD_ARM_CMD_ID */ 0xe002,
	1, CompIdUnitId_OP_CTRL_1056, 
	0, NULL  },
	{/* FAD_TEST_CMD_ID */ 0xe006,
	1, CompIdUnitId_OP_CTRL_1056, 
	0, NULL  },
	{/* FAD_TEST_ACK_ID */ 0xe007,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* FPE_ACK_ID */ 0xe400,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* FPE_ACT_CMD_ID */ 0xe401,
	1, CompIdUnitId_OP_CTRL_1061, 
	0, NULL  },
	{/* FPE_ARM_CMD_ID */ 0xe402,
	1, CompIdUnitId_OP_CTRL_1061, 
	0, NULL  },
	{/* FPE_TEST_CMD_ID */ 0xe406,
	1, CompIdUnitId_OP_CTRL_1061, 
	0, NULL  },
	{/* FPE_TEST_ACK_ID */ 0xe407,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* IZ_ACK_ID */ 0xea00,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* IZ_ACT_CMD_ID */ 0xea01,
	1, CompIdUnitId_OP_CTRL_1066, 
	0, NULL  },
	{/* IZ_ARM_CMD_ID */ 0xea02,
	1, CompIdUnitId_OP_CTRL_1066, 
	0, NULL  },
	{/* IZ_TEST_CMD_ID */ 0xea06,
	1, CompIdUnitId_OP_CTRL_1066, 
	0, NULL  },
	{/* IZ_TEST_ACK_ID */ 0xea07,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOOP_ACK_ID */ 0xec00,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOOP_ARM_CMD_ID */ 0xec01,
	1, CompIdUnitId_OP_CTRL_1079, 
	0, NULL  },
	{/* LOOP_DIRECT_CMD_ID */ 0xec02,
	1, CompIdUnitId_OP_CTRL_1079, 
	0, NULL  },
	{/* LOOP_SERVICE_REQ_ID */ 0xec05,
	1, CompIdUnitId_OP_CTRL_1079, 
	0, NULL  },
	{/* LOOP_TEST_CMD_ID */ 0xec07,
	1, CompIdUnitId_OP_CTRL_1079, 
	0, NULL  },
	{/* LOOP_TEST_ACK_ID */ 0xec08,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* COMPUTER_ACK_ID */ 0xee80,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* COMPUTER_MON_CMD_ID */ 0xee83,
	1, CompIdUnitId_OP_CTRL_1037, 
	0, NULL  },
	{/* COMPUTER_MON_ARM_CMD_ID */ 0xee84,
	1, CompIdUnitId_OP_CTRL_1037, 
	0, NULL  },
	{/* COMPUTER_TEST_CMD_ID */ 0xee86,
	1, CompIdUnitId_OP_CTRL_1037, 
	0, NULL  },
	{/* COMPUTER_TEST_ACK_ID */ 0xee87,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* COMPONENT_PING_CMD_ACK_ID */ 0xee8b,
	0, NULL, 
	0, NULL  },
	{/* COMPONENT_START_UP_ACK_ID */ 0xee8d,
	0, NULL, 
	0, NULL  },
	{/* CONFIGURATION_CRC_CHECK_STATUS_ID */ 0xee95,
	1, CompIdUnitId_OP_CTRL_1037, 
	0, NULL  },
	{/* DOMAIN_NETW_ACK_ID */ 0xef80,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* DOMAIN_NETW_MON_CMD_ID */ 0xef83,
	1, CompIdUnitId_OP_CTRL_1043, 
	0, NULL  },
	{/* DOMAIN_NETW_MON_ARM_CMD_ID */ 0xef84,
	1, CompIdUnitId_OP_CTRL_1043, 
	0, NULL  },
	{/* DOMAIN_NETW_TEST_CMD_ID */ 0xef86,
	1, CompIdUnitId_OP_CTRL_1043, 
	0, NULL  },
	{/* DOMAIN_NETW_TEST_ACK_ID */ 0xef87,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* OP_ACK_ID */ 0xf180,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* OP_ARM_CMD_ID */ 0xf181,
	1, CompIdUnitId_OP_CTRL_1085, 
	0, NULL  },
	{/* OP_CMD_ID */ 0xf182,
	1, CompIdUnitId_OP_CTRL_1085, 
	0, NULL  },
	{/* OP_STATUS_ID */ 0xf18a,
	2, CompIdUnitId_OP_CTRL_1117, 
	0, NULL  },
	{/* OP_TEST_CMD_ID */ 0xf18b,
	1, CompIdUnitId_OP_CTRL_1085, 
	0, NULL  },
	{/* OP_TEST_ACK_ID */ 0xf18f,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* OP_EQ_SET_ATTRIBUTES_ACK_MSG_ID */ 0xf1bf,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_BUZZER_CMD_ID */ 0xf1c0,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_CMD_ID */ 0xf1c1,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_DEMAND_ID */ 0xf1c2,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_LED_CMD_ID */ 0xf1c7,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_ACK_MSG_ID */ 0xf1ca,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_ARM_MSG_ID */ 0xf1cb,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_DZ_MSG_ID */ 0xf1ce,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_FAULT_MSG_ID */ 0xf1cf,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_IZ_MSG_ID */ 0xf1d1,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_OZ_MSG_ID */ 0xf1d2,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_OZ_CMD_MSG_ID */ 0xf1d4,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINT_ALARM_MSG_ID */ 0xf1d5,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINTS_IN_ALARM_ON_RESET_MSG_ID */ 0xf1d6,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_TEST_MSG_ID */ 0xf1d7,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_REDUNDANCY_MSG_ID */ 0xf1d8,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_REMOTE_EVENTS_MSG_ID */ 0xf1da,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_INFO_RESP_REPORT_ID */ 0xf1db,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_INFO_RESP_EVENT_ID */ 0xf1dd,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINT_SMV_MSG_ID */ 0xf1de,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_STATUS_MSG_ID */ 0xf1df,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINT_INHIBIT_MSG_ID */ 0xf1f1,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINT_OPERATION_CLASS_MSG_ID */ 0xf1f2,
	1, CompIdUnitId_OP_CTRL_1103, 
	0, NULL  },
	{/* OP_EQ_SYSTEM_REDUNDANCY_MSG_ID */ 0xf1f8,
	1, CompIdUnitId_OP_CTRL_1103, 
	0, NULL  },
	{/* OP_EQ_SYSTEM_INHIBIT_MSG_ID */ 0xf1f9,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINT_SECOND_PERFORMANCE_CLASS_MSG_ID */ 0xf1fb,
	1, CompIdUnitId_OP_CTRL_1103, 
	0, NULL  },
	{/* OP_EQ_POINT_SV_STATUS_MSG_ID */ 0xf1fc,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* OP_EQ_POINT_PERFORMANCE_CLASS_MSG_ID */ 0xf1fd,
	1, CompIdUnitId_OP_CTRL_1103, 
	0, NULL  },
	{/* OP_EQ_POINT_LED_STATE_MSG_ID */ 0xf1fe,
	1, CompIdUnitId_OP_CTRL_1103, 
	0, NULL  },
	{/* OP_EQ_POINT_SMOKE_STATE_MSG_ID */ 0xf1ff,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* POWER_ACK_ID */ 0xf200,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* POWER_ACT_CMD_ID */ 0xf201,
	1, CompIdUnitId_OP_CTRL_1136, 
	0, NULL  },
	{/* POWER_MON_CMD_ID */ 0xf204,
	1, CompIdUnitId_OP_CTRL_1136, 
	0, NULL  },
	{/* POWER_MON_ARM_CMD_ID */ 0xf205,
	1, CompIdUnitId_OP_CTRL_1136, 
	0, NULL  },
	{/* POWER_TEST_CMD_ID */ 0xf207,
	1, CompIdUnitId_OP_CTRL_1136, 
	0, NULL  },
	{/* POWER_TEST_ACK_ID */ 0xf208,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* OZ_CMD_ACK_ID */ 0xf302,
	0, NULL, 
	0, NULL  },
	{/* OZ_TEST_CMD_ID */ 0xf305,
	1, CompIdUnitId_OP_CTRL_1031, 
	0, NULL  },
	{/* OZ_USER_CMD_ID */ 0xf306,
	1, CompIdUnitId_OP_CTRL_1031, 
	0, NULL  },
	{/* OZ_USER_CMD_ACK_ID */ 0xf307,
	0, NULL, 
	0, NULL  },
	{/* OZ_TEST_ACK_ID */ 0xf308,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* OZ_PASS_WORD_CMD_ID */ 0xf309,
	1, CompIdUnitId_OP_CTRL_1031, 
	0, NULL  },
	{/* OZ_ACK_ID */ 0xf30a,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* STATUS_UPDATED_ID */ 0xf501,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* POINT_CMD_ID */ 0xf502,
	1, CompIdUnitId_OP_CTRL_1128, 
	0, NULL  },
	{/* POINT_INFO_REQ_ID */ 0xf505,
	1, CompIdUnitId_OP_CTRL_1128, 
	0, NULL  },
	{/* POINT_INFO_RESP_ID */ 0xf506,
	0, NULL, 
	0, NULL  },
	{/* USER_POINT_INFO_RESP_ID */ 0xf507,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* CANCEL_COMMAND_ID */ 0xf508,
	1, CompIdUnitId_OP_CTRL_1031, 
	0, NULL  },
	{/* SV_STATUS_UPDATED_ID */ 0xf509,
	2, CompIdUnitId_OP_CTRL_1087, 
	0, NULL  },
	{/* LOG_CTRL_ACK_ID */ 0xfb00,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_ARM_CMD_ID */ 0xfb01,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_INFO_REQ_ID */ 0xfb02,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_TEST_CMD_ID */ 0xfb06,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_TEST_ACK_ID */ 0xfb07,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_ACT_CMD_ID */ 0xfb08,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_DZ_USER_CMD_ID */ 0xfb09,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* LOG_CTRL_OZ_USER_CMD_ID */ 0xfb0a,
	1, CompIdUnitId_OP_CTRL_1032, 
	0, NULL  },
	{/* UNIT_TEST_STATUS_ID */ 0xfc00,
	2, CompIdUnitId_OP_CTRL_1117, 
	0, NULL  },
	{/* UNIT_FAULT_STATUS_ID */ 0xfc01,
	7, CompIdUnitId_OP_CTRL_1145, 
	0, NULL  },
	{/* UNIT_FAULT_ACCEPT_CMD_ID */ 0xfc03,
	85, CompIdUnitId_OP_CTRL_1144, 
	0, NULL  },
	{/* UNIT_FAULT_ACCEPT_CMD_ACK_ID */ 0xfc04,
	0, NULL, 
	0, NULL  } 
};

static ComponentAddress_a ComponentAddress_OP_CTRL_1030[16] = {
	{ 0xd401 /* BLC_Eq */,
	{ 0x0003, 0x01   } },
	{ 0xd801 /* Operator Panel Equipment */,
	{ 0x0007, 0x01   } },
	{ 0xd802 /* REMOTE PILOT */,
	{ 0x0008, 0x01   } },
	{ 0xe701 /* Domain Controller */,
	{ 0x0002, 0x01   } },
	{ 0xe801 /* DZ Controller */,
	{ 0x0010, 0x01   } },
	{ 0xe901 /* AZ Controller */,
	{ 0x0011, 0x01   } },
	{ 0xea01 /* FPE Controller */,
	{ 0x000c, 0x01   } },
	{ 0xeb01 /* FAD Controller */,
	{ 0x000b, 0x01   } },
	{ 0xec01 /* OP Controller */,
	{ 0x000e, 0x01   } },
	{ 0xee01 /* Point Controller */,
	{ 0x000a, 0x01   } },
	{ 0xef01 /* Loop Controller */,
	{ 0x0009, 0x01   } },
	{ 0xf001 /* BLC Controller */,
	{ 0x0004, 0x01   } },
	{ 0xf601 /* Log Controller */,
	{ 0x0001, 0x01   } },
	{ 0xf801 /* Computer Controller */,
	{ 0x0005, 0x01   } },
	{ 0xf901 /* Power Controller */,
	{ 0x000d, 0x01   } },
	{ 0xfb01 /* OZ Controller */,
	{ 0x000f, 0x01   } } 
};

ACLIB_ObjectDirectory_a ACLIB_ObjectDirectory_OP_CTRL_1028 = {
	16, ComponentAddress_OP_CTRL_1030, 
	117, ACLIB_Object_OP_CTRL_1029, 
0x00000000, 0x03f2f5d4, 0xfefefefe  
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_25 = {
	"ekOP_CTRL_51831_Router"
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_26 = {
	"Router_ekOP_CTRL_51831"
};

static AcPortData_a AcPortData_OP_CTRL_1148[1] = {
	{0x00000001, 0x0a, 
	{ 0x000e, 0x01   },
	4, &AcFifoBinAddr_a_AC_13_25   } 
};

static AcRouteData_a AcRouteData_OP_CTRL_1149[1] = {
	{0x00000001, 0x0a, 
	{ 0x0000, 0x00   },
	4, &AcFifoBinAddr_a_AC_13_26   } 
};

AcBinaryConfigData_a AcBinaryConfigData_OP_CTRL_1150 = {
	1, AcPortData_OP_CTRL_1148, 
	1, AcRouteData_OP_CTRL_1149, 
0x00000000, 0x03f2ff54, 0xfefefefe  
};

static ComponentDirectory_a ComponentDirectoryOPController = {
	0xec01,
	&AttributeDirectory_OP_CTRL_1000,
	&OP_SCD_Directory_OP_CTRL_1003,
	&ACLIB_ObjectDirectory_OP_CTRL_1028,
	&AcBinaryConfigData_OP_CTRL_1150
};
