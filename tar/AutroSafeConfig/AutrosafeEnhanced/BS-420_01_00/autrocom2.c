
AutroComAttributes_a AutroComAttributes_AUTROCOM_TCP_1001 = { 0x00, 0x00000000, 
	{0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 /* 1 */, 
	{0x41, 
	0x75, 0x74, 0x72, 0x6f, 0x53, 0x61, 0x66, 0x65, 0x34, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00 /* AutroSafe4 */  },
0xc0a80002, 0x639c, 0x01, 0x0b, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0xffffff00, 0xc0a80001, 0x00, 0x01, 0x00000000, 
	0x00, 0x000a, 0x01, 0x00000001, 0x0c, 0x0400, 0x9c41, 0xafc9, 0xc0a80003, 0x01f6, 
	0x0004, 0x0078, 0x00, 0x00, 0x0080, 0x01, 0x0c, 0x01, 0xe101 
};

AttributeDirectory_a AttributeDirectory_AUTROCOM_TCP_1000 = {
	&AutroComAttributes_AUTROCOM_TCP_1001, 
	0, NULL, 
0x00000000, 0x01000cf8, 0xfefefefe  
};


static CompIdUnitId_a CompIdUnitId_AUTROCOM_TCP_1006[1] = {
	{ 0xf801 /* Computer Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_AUTROCOM_TCP_1007[1] = {
	{ 0xec01 /* OP Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_AUTROCOM_TCP_1018[1] = {
	{ 0xd801 /* Operator Panel Equipment */,0xffff  } 
};

static ACLIB_Object_a ACLIB_Object_AUTROCOM_TCP_1003[19] = {
	{/* COMPONENT_START_UP_ACK_ID */ 0xee8d,
	0, NULL, 
	0, NULL  },
	{/* CONFIGURATION_CRC_CHECK_STATUS_ID */ 0xee95,
	1, CompIdUnitId_AUTROCOM_TCP_1006, 
	0, NULL  },
	{/* OP_EQ_INFO_REQ_ID */ 0xf1c5,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* OP_EQ_RESP_ID */ 0xf1c8,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* OP_EQ_FAULT_ID */ 0xf1c9,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_PASS_WORD_CMD_ID */ 0xf1e5,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* UPDATE_SV_STATUS_ID */ 0xf1e6,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* UPDATE_STATUS_ID */ 0xf1e7,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_DZ_CMD_ID */ 0xf1e8,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_ACCEPT_FAULT_CMD_ID */ 0xf1e9,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_OZ_CMD_ID */ 0xf1ed,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_UNIT_ACT_CMD_ID */ 0xf1f3,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_UNIT_ARM_CMD_ID */ 0xf1f4,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_UNIT_TEST_CMD_ID */ 0xf1f5,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_UNIT_DIRECT_CMD_ID */ 0xf1f7,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_UNIT_INHIBIT_CMD_ID */ 0xf500,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_POINT_CMD_ID */ 0xf503,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_POINT_INFO_REQ_ID */ 0xf504,
	1, CompIdUnitId_AUTROCOM_TCP_1007, 
	0, NULL  },
	{/* USER_TEXT_REQ */ 0xfd01,
	1, CompIdUnitId_AUTROCOM_TCP_1018, 
	0, NULL  } 
};

static ComponentAddress_a ComponentAddress_AUTROCOM_TCP_1004[3] = {
	{ 0xd801 /* Operator Panel Equipment */,
	{ 0x0007, 0x01   } },
	{ 0xec01 /* OP Controller */,
	{ 0x000e, 0x01   } },
	{ 0xf801 /* Computer Controller */,
	{ 0x0005, 0x01   } } 
};

ACLIB_ObjectDirectory_a ACLIB_ObjectDirectory_AUTROCOM_TCP_1002 = {
	3, ComponentAddress_AUTROCOM_TCP_1004, 
	19, ACLIB_Object_AUTROCOM_TCP_1003, 
0x00000000, 0x03f2b724, 0xfefefefe  
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_13 = {
	"ekAUTROCOM_TCP_51821_Router"
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_14 = {
	"Router_ekAUTROCOM_TCP_51821"
};

static AcPortData_a AcPortData_AUTROCOM_TCP_1024[1] = {
	{0x00000001, 0x0a, 
	{ 0x0008, 0x01   },
	4, &AcFifoBinAddr_a_AC_13_13   } 
};

static AcRouteData_a AcRouteData_AUTROCOM_TCP_1025[1] = {
	{0x00000001, 0x0a, 
	{ 0x0000, 0x00   },
	4, &AcFifoBinAddr_a_AC_13_14   } 
};

AcBinaryConfigData_a AcBinaryConfigData_AUTROCOM_TCP_1026 = {
	1, AcPortData_AUTROCOM_TCP_1024, 
	1, AcRouteData_AUTROCOM_TCP_1025, 
0x00000000, 0x03f2b890, 0xfefefefe  
};

static ComponentDirectory_a ComponentDirectoryAutrocomTCP = {
	0xd802,
	&AttributeDirectory_AUTROCOM_TCP_1000,
	NULL,
	&ACLIB_ObjectDirectory_AUTROCOM_TCP_1002,
	&AcBinaryConfigData_AUTROCOM_TCP_1026
};
