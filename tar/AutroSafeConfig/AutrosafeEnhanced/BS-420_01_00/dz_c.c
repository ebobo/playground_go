
DZ_ControllerAttributes_a DZ_ControllerAttributes_DZ_CTRL_1001 = { 0x00, 0xe101 
};

static DZ_UnitAttributesId_a DZ_UnitAttributesId_DZ_CTRL_1002[25] = {
	{ 0x6001 /* BAD LEILIGHET 1 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6002 /* SOVEROM LEILIGHET 1 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6003 /* STUE LEILIGHET 1 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6004 /* STUE LEILIGHET 2 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6005 /* SOVEROM LEILIGHET 2 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6006 /* BAD LEILIGHET 2 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6007 /* BAD LEILIGHET 3 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6008 /* SOVEROM LEILIGHET 3 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6009 /* STUE LEILIGHET 3 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x600a /* STUE LEILIGHET 4 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x600b /* SOVEROM LEILIGHET 4 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x600c /* BAD LEILIGHET 4 */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x600d /* MANUELL MELDER GANG NORD */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x600e /* GARDEROBE */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x600f /* KONTOR-OPPHOLDSROM */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6010 /* GANG NORD */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6011 /* MANUELL MELDER HOVEDINNGANG */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6012 /* VASKEROM */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6013 /* KJØKKEN */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6014 /* BOD */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6015 /* GANG SØR */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6016 /* STUE-SPISEROM */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6017 /* MANUELL MELDER GANG SØR */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6018 /* TEKN ROM LOFT */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } },
	{ 0x6019 /* SPRINKLER */,
	{ 0x00, 0x00, 0x00000078, 0x000001e0, 0x00000320, 0x00000320   } } 
};

AttributeDirectory_a AttributeDirectory_DZ_CTRL_1000 = {
	&DZ_ControllerAttributes_DZ_CTRL_1001, 
	25, DZ_UnitAttributesId_DZ_CTRL_1002, 
0x00000000, 0x0100112c, 0xfefefefe  
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

static UnitId_a UnitId_DZ_CTRL_1008[26] = {
	0x6001 /* BAD LEILIGHET 1 */, /* (2) */
	0x6002 /* SOVEROM LEILIGHET 1 */, /* (2) */
	0x6003 /* STUE LEILIGHET 1 */, /* (2) */
	0x6004 /* STUE LEILIGHET 2 */, /* (2) */
	0x6005 /* SOVEROM LEILIGHET 2 */, /* (2) */
	0x6006 /* BAD LEILIGHET 2 */, /* (2) */
	0x6007 /* BAD LEILIGHET 3 */, /* (2) */
	0x6008 /* SOVEROM LEILIGHET 3 */, /* (2) */
	0x6009 /* STUE LEILIGHET 3 */, /* (2) */
	0x600a /* STUE LEILIGHET 4 */, /* (2) */
	0x600b /* SOVEROM LEILIGHET 4 */, /* (2) */
	0x600c /* BAD LEILIGHET 4 */, /* (2) */
	0x600d /* MANUELL MELDER GANG NORD */, /* (2) */
	0x600e /* GARDEROBE */, /* (2) */
	0x600f /* KONTOR-OPPHOLDSROM */, /* (2) */
	0x6010 /* GANG NORD */, /* (2) */
	0x6011 /* MANUELL MELDER HOVEDINNGANG */, /* (2) */
	0x6012 /* VASKEROM */, /* (2) */
	0x6013 /* KJØKKEN */, /* (2) */
	0x6014 /* BOD */, /* (2) */
	0x6015 /* GANG SØR */, /* (2) */
	0x6016 /* STUE-SPISEROM */, /* (2) */
	0x6017 /* MANUELL MELDER GANG SØR */, /* (2) */
	0x6018 /* TEKN ROM LOFT */, /* (2) */
	0x6019 /* SPRINKLER */, /* (2) */
	0xe101 /* KOLHEIVEGEN 10 */  /* (2) */
};

static IsOperatedByEntry_a IsOperatedByEntry_DZ_CTRL_1007[1] = {
	{ 0xe101 /* KOLHEIVEGEN 10 */,
	26, UnitId_DZ_CTRL_1008  } 
};

static IsOperatedBy_a IsOperatedBy_DZ_CTRL_1004 = {
	1, IsOperatedByEntry_DZ_CTRL_1007  
};

static PointInformationEntry_a PointInformationEntry_DZ_CTRL_1010[25] = {
	{ 0x0001 /* A1 001 */,0x00, 0x6001  /* BAD LEILIGHET 1 */},
	{ 0x0002 /* A1 003 */,0x02, 0x6002  /* SOVEROM LEILIGHET 1 */},
	{ 0x0003 /* A1 005 */,0x02, 0x6003  /* STUE LEILIGHET 1 */},
	{ 0x0004 /* A1 006 */,0x02, 0x6004  /* STUE LEILIGHET 2 */},
	{ 0x0005 /* A1 007 */,0x02, 0x6005  /* SOVEROM LEILIGHET 2 */},
	{ 0x0006 /* A1 009 */,0x00, 0x6006  /* BAD LEILIGHET 2 */},
	{ 0x0007 /* A1 011 */,0x00, 0x6007  /* BAD LEILIGHET 3 */},
	{ 0x0008 /* A1 013 */,0x02, 0x6008  /* SOVEROM LEILIGHET 3 */},
	{ 0x0009 /* A1 015 */,0x02, 0x6009  /* STUE LEILIGHET 3 */},
	{ 0x000a /* A1 016 */,0x02, 0x600a  /* STUE LEILIGHET 4 */},
	{ 0x000b /* A1 017 */,0x02, 0x600b  /* SOVEROM LEILIGHET 4 */},
	{ 0x000c /* A1 019 */,0x00, 0x600c  /* BAD LEILIGHET 4 */},
	{ 0x000d /* A2 001 */,0x03, 0x600d  /* MANUELL MELDER GANG NORD */},
	{ 0x000e /* A2 002 */,0x00, 0x600e  /* GARDEROBE */},
	{ 0x000f /* A2 003 */,0x01, 0x600f  /* KONTOR-OPPHOLDSROM */},
	{ 0x0010 /* A2 004 */,0x01, 0x6010  /* GANG NORD */},
	{ 0x0011 /* A2 006 */,0x03, 0x6011  /* MANUELL MELDER HOVEDINNGANG */},
	{ 0x0012 /* A2 007 */,0x00, 0x6012  /* VASKEROM */},
	{ 0x0013 /* A2 008 */,0x00, 0x6013  /* KJØKKEN */},
	{ 0x0014 /* A2 009 */,0x01, 0x6014  /* BOD */},
	{ 0x0015 /* A2 010 */,0x01, 0x6015  /* GANG SØR */},
	{ 0x0016 /* A2 012 */,0x01, 0x6016  /* STUE-SPISEROM */},
	{ 0x0017 /* A2 013 */,0x03, 0x6017  /* MANUELL MELDER GANG SØR */},
	{ 0x0018 /* A2 014 */,0x01, 0x6018  /* TEKN ROM LOFT */},
	{ 0x0019 /* A2 015 */,0x0d, 0x6019  /* SPRINKLER */} 
};

static PointInformation_a PointInformation_DZ_CTRL_1009 = {
	25, PointInformationEntry_DZ_CTRL_1010  
};

static UnitId_a UnitId_DZ_CTRL_1013[1] = {
	0x0001 /* A1 001 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1014[1] = {
	0x0002 /* A1 003 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1015[1] = {
	0x0003 /* A1 005 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1016[1] = {
	0x0004 /* A1 006 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1017[1] = {
	0x0005 /* A1 007 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1018[1] = {
	0x0006 /* A1 009 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1019[1] = {
	0x0007 /* A1 011 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1020[1] = {
	0x0008 /* A1 013 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1021[1] = {
	0x0009 /* A1 015 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1022[1] = {
	0x000a /* A1 016 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1023[1] = {
	0x000b /* A1 017 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1024[1] = {
	0x000c /* A1 019 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1025[1] = {
	0x000d /* A2 001 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1026[1] = {
	0x000e /* A2 002 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1027[1] = {
	0x000f /* A2 003 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1028[1] = {
	0x0010 /* A2 004 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1029[1] = {
	0x0011 /* A2 006 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1030[1] = {
	0x0012 /* A2 007 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1031[1] = {
	0x0013 /* A2 008 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1032[1] = {
	0x0014 /* A2 009 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1033[1] = {
	0x0015 /* A2 010 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1034[1] = {
	0x0016 /* A2 012 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1035[1] = {
	0x0017 /* A2 013 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1036[1] = {
	0x0018 /* A2 014 */  /* (2) */
};

static UnitId_a UnitId_DZ_CTRL_1037[1] = {
	0x0019 /* A2 015 */  /* (2) */
};

static DZ_Relation_a DZ_Relation_DZ_CTRL_1012[25] = {
	{ 0x6001 /* BAD LEILIGHET 1 */,
	1, UnitId_DZ_CTRL_1013  },
	{ 0x6002 /* SOVEROM LEILIGHET 1 */,
	1, UnitId_DZ_CTRL_1014  },
	{ 0x6003 /* STUE LEILIGHET 1 */,
	1, UnitId_DZ_CTRL_1015  },
	{ 0x6004 /* STUE LEILIGHET 2 */,
	1, UnitId_DZ_CTRL_1016  },
	{ 0x6005 /* SOVEROM LEILIGHET 2 */,
	1, UnitId_DZ_CTRL_1017  },
	{ 0x6006 /* BAD LEILIGHET 2 */,
	1, UnitId_DZ_CTRL_1018  },
	{ 0x6007 /* BAD LEILIGHET 3 */,
	1, UnitId_DZ_CTRL_1019  },
	{ 0x6008 /* SOVEROM LEILIGHET 3 */,
	1, UnitId_DZ_CTRL_1020  },
	{ 0x6009 /* STUE LEILIGHET 3 */,
	1, UnitId_DZ_CTRL_1021  },
	{ 0x600a /* STUE LEILIGHET 4 */,
	1, UnitId_DZ_CTRL_1022  },
	{ 0x600b /* SOVEROM LEILIGHET 4 */,
	1, UnitId_DZ_CTRL_1023  },
	{ 0x600c /* BAD LEILIGHET 4 */,
	1, UnitId_DZ_CTRL_1024  },
	{ 0x600d /* MANUELL MELDER GANG NORD */,
	1, UnitId_DZ_CTRL_1025  },
	{ 0x600e /* GARDEROBE */,
	1, UnitId_DZ_CTRL_1026  },
	{ 0x600f /* KONTOR-OPPHOLDSROM */,
	1, UnitId_DZ_CTRL_1027  },
	{ 0x6010 /* GANG NORD */,
	1, UnitId_DZ_CTRL_1028  },
	{ 0x6011 /* MANUELL MELDER HOVEDINNGANG */,
	1, UnitId_DZ_CTRL_1029  },
	{ 0x6012 /* VASKEROM */,
	1, UnitId_DZ_CTRL_1030  },
	{ 0x6013 /* KJØKKEN */,
	1, UnitId_DZ_CTRL_1031  },
	{ 0x6014 /* BOD */,
	1, UnitId_DZ_CTRL_1032  },
	{ 0x6015 /* GANG SØR */,
	1, UnitId_DZ_CTRL_1033  },
	{ 0x6016 /* STUE-SPISEROM */,
	1, UnitId_DZ_CTRL_1034  },
	{ 0x6017 /* MANUELL MELDER GANG SØR */,
	1, UnitId_DZ_CTRL_1035  },
	{ 0x6018 /* TEKN ROM LOFT */,
	1, UnitId_DZ_CTRL_1036  },
	{ 0x6019 /* SPRINKLER */,
	1, UnitId_DZ_CTRL_1037  } 
};

static DZ_Relations_a DZ_Relations_DZ_CTRL_1011 = {
	25, DZ_Relation_DZ_CTRL_1012  

};

FaultIndDelayEntry_a FaultIndDelayEntry_DZ_CTRL_1039[2] = {
	{0x0016, 0x070e, 0x0000   },
	{0x0016, 0x0b03, 0x0000   } 
};

static FaultIndDelays_a FaultIndDelays_DZ_CTRL_1038 = {
	2, FaultIndDelayEntry_DZ_CTRL_1039  
};

DZ_SCD_Directory_a DZ_SCD_Directory_DZ_CTRL_1003 = {
	&FaultClearCondition_a_0, 
	&IsOperatedBy_DZ_CTRL_1004, 
	&PointInformation_DZ_CTRL_1009, 
	&DZ_Relations_DZ_CTRL_1011, 
	&FaultIndDelays_DZ_CTRL_1038, 
0x00000000, 0x03f3093c, 0xfefefefe  
};


static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1044[1] = {
	{ 0xf801 /* Computer Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1045[1] = {
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1047[1] = {
	{ 0xfb01 /* OZ Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1048[1] = {
	{ 0xec01 /* OP Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1049[5] = {
	{ 0xe901 /* AZ Controller */,0xffff  },
	{ 0xea01 /* FPE Controller */,0xffff  },
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xf601 /* Log Controller */,0xffff  },
	{ 0xfb01 /* OZ Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1054[1] = {
	{ 0xee01 /* Point Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1058[3] = {
	{ 0xea01 /* FPE Controller */,0xffff  },
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_DZ_CTRL_1059[2] = {
	{ 0xec01 /* OP Controller */,0xffff  },
	{ 0xf601 /* Log Controller */,0xffff  } 
};

static ACLIB_Object_a ACLIB_Object_DZ_CTRL_1041[17] = {
	{/* POINT_ARM_CMD_ID */ 0x8002,
	1, CompIdUnitId_DZ_CTRL_1054, 
	0, NULL  },
	{/* POINT_TEST_CMD_ID */ 0x8006,
	1, CompIdUnitId_DZ_CTRL_1054, 
	0, NULL  },
	{/* DZ_ACK_ID */ 0xc000,
	1, CompIdUnitId_DZ_CTRL_1045, 
	0, NULL  },
	{/* DZ_STATUS_ID */ 0xc004,
	5, CompIdUnitId_DZ_CTRL_1049, 
	0, NULL  },
	{/* DZ_USER_CMD_ACK_ID */ 0xc008,
	0, NULL, 
	0, NULL  },
	{/* DZ_TEST_ACK_ID */ 0xc009,
	1, CompIdUnitId_DZ_CTRL_1045, 
	0, NULL  },
	{/* DZ_ACK_REPORT_ID */ 0xc00a,
	1, CompIdUnitId_DZ_CTRL_1045, 
	0, NULL  },
	{/* DZ_TEST_ACK_REPORT_ID */ 0xc00b,
	1, CompIdUnitId_DZ_CTRL_1045, 
	0, NULL  },
	{/* DZ_CTRL_IMMEDIATE_ACTION_MSG_ID */ 0xc00c,
	1, CompIdUnitId_DZ_CTRL_1047, 
	0, NULL  },
	{/* DZ_SET_ATTRIBUTES_CMD_ACK_ID */ 0xc00f,
	1, CompIdUnitId_DZ_CTRL_1048, 
	0, NULL  },
	{/* COMPONENT_START_UP_ACK_ID */ 0xee8d,
	0, NULL, 
	0, NULL  },
	{/* CONFIGURATION_CRC_CHECK_STATUS_ID */ 0xee95,
	1, CompIdUnitId_DZ_CTRL_1044, 
	0, NULL  },
	{/* OZ_CMD_ACK_ID */ 0xf302,
	0, NULL, 
	0, NULL  },
	{/* POINT_CMD_ID */ 0xf502,
	1, CompIdUnitId_DZ_CTRL_1054, 
	0, NULL  },
	{/* UNIT_TEST_STATUS_ID */ 0xfc00,
	2, CompIdUnitId_DZ_CTRL_1059, 
	0, NULL  },
	{/* UNIT_FAULT_STATUS_ID */ 0xfc01,
	3, CompIdUnitId_DZ_CTRL_1058, 
	0, NULL  },
	{/* UNIT_FAULT_ACCEPT_CMD_ACK_ID */ 0xfc04,
	0, NULL, 
	0, NULL  } 
};

static ComponentAddress_a ComponentAddress_DZ_CTRL_1042[7] = {
	{ 0xe901 /* AZ Controller */,
	{ 0x0011, 0x01   } },
	{ 0xea01 /* FPE Controller */,
	{ 0x000c, 0x01   } },
	{ 0xec01 /* OP Controller */,
	{ 0x000e, 0x01   } },
	{ 0xee01 /* Point Controller */,
	{ 0x000a, 0x01   } },
	{ 0xf601 /* Log Controller */,
	{ 0x0001, 0x01   } },
	{ 0xf801 /* Computer Controller */,
	{ 0x0005, 0x01   } },
	{ 0xfb01 /* OZ Controller */,
	{ 0x000f, 0x01   } } 
};

ACLIB_ObjectDirectory_a ACLIB_ObjectDirectory_DZ_CTRL_1040 = {
	7, ComponentAddress_DZ_CTRL_1042, 
	17, ACLIB_Object_DZ_CTRL_1041, 
0x00000000, 0x03f30f7c, 0xfefefefe  
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_29 = {
	"ekDZ_CTRL_51833_Router"
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_30 = {
	"Router_ekDZ_CTRL_51833"
};

static AcPortData_a AcPortData_DZ_CTRL_1060[1] = {
	{0x00000001, 0x0a, 
	{ 0x0010, 0x01   },
	4, &AcFifoBinAddr_a_AC_13_29   } 
};

static AcRouteData_a AcRouteData_DZ_CTRL_1061[1] = {
	{0x00000001, 0x0a, 
	{ 0x0000, 0x00   },
	4, &AcFifoBinAddr_a_AC_13_30   } 
};

AcBinaryConfigData_a AcBinaryConfigData_DZ_CTRL_1062 = {
	1, AcPortData_DZ_CTRL_1060, 
	1, AcRouteData_DZ_CTRL_1061, 
0x00000000, 0x03f31110, 0xfefefefe  
};

static ComponentDirectory_a ComponentDirectoryDZController = {
	0xe801,
	&AttributeDirectory_DZ_CTRL_1000,
	&DZ_SCD_Directory_DZ_CTRL_1003,
	&ACLIB_ObjectDirectory_DZ_CTRL_1040,
	&AcBinaryConfigData_DZ_CTRL_1062
};
