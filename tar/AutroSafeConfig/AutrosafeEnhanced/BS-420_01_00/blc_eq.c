
BLC_EqAttributes_a BLC_EqAttributes_BLC_EQ_1001 = { 0x00000258, 0x01, 0x01, 0x00, 0x01, 0xe101 
};

AttributeDirectory_a AttributeDirectory_BLC_EQ_1000 = {
	&BLC_EqAttributes_BLC_EQ_1001, 
	0, NULL, 
0x00000000, 0x01000054, 0xfefefefe  
};


static UnitId_a UnitId_BLC_EQ_1005[2] = {
	0xd002 /* SLØYFE-A1 */, /* (2) */
	0xd003 /* SLØYFE-A2 */  /* (2) */
};

static OZ_ZoneAddrEntry_a OZ_ZoneAddrEntry_BLC_EQ_1004[1] = {
	{ 0xe101 /* KOLHEIVEGEN 10 */,0x08, /* UnitType */0x04, /* UnitSubType */0x00, /* AlComAddress */
	2, UnitId_BLC_EQ_1005  } 
};

static OZ_ZoneAddr_a OZ_ZoneAddr_BLC_EQ_1003 = {
	1, OZ_ZoneAddrEntry_BLC_EQ_1004  
};

static word8_a word8_BLC_EQ_1011[3] = {
	0x00, /* (1) */
	0x1f, /* (1) */
	0x00  /* (1) */
};

static word8_a word8_BLC_EQ_1012[8] = {
	0x8e, /* (1) */
	0xb1, /* (1) */
	0xd1, /* (1) */
	0xf2, /* (1) */
	0xf1, /* (1) */
	0x70, /* (1) */
	0xf0, /* (1) */
	0x1e  /* (1) */
};

static word8_a word8_BLC_EQ_1013[8] = {
	0x80, /* (1) */
	0xae, /* (1) */
	0xd1, /* (1) */
	0xf4, /* (1) */
	0xf3, /* (1) */
	0x71, /* (1) */
	0xf0, /* (1) */
	0x01  /* (1) */
};

static word8_a word8_BLC_EQ_1014[8] = {
	0x33, /* (1) */
	0x88, /* (1) */
	0xde, /* (1) */
	0xf8, /* (1) */
	0x73, /* (1) */
	0x73, /* (1) */
	0xf7, /* (1) */
	0x1e  /* (1) */
};

static word8_a word8_BLC_EQ_1015[8] = {
	0x7a, /* (1) */
	0x89, /* (1) */
	0xa0, /* (1) */
	0xf6, /* (1) */
	0x72, /* (1) */
	0x72, /* (1) */
	0xf5, /* (1) */
	0x1e  /* (1) */
};

static word8_a word8_BLC_EQ_1016[1] = {
	0x88  /* (1) */
};

static word8_a word8_BLC_EQ_1017[1] = {
	0x0f  /* (1) */
};

static word8_a word8_BLC_EQ_1018[8] = {
	0x00, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x88  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1009[9] = {
	{0x09, 
	3, word8_BLC_EQ_1011   },
	{0x0c, 
	8, word8_BLC_EQ_1012   },
	{0x0d, 
	8, word8_BLC_EQ_1013   },
	{0x0e, 
	8, word8_BLC_EQ_1014   },
	{0x0f, 
	8, word8_BLC_EQ_1015   },
	{0x42, 
	1, word8_BLC_EQ_1016   },
	{0x43, 
	1, word8_BLC_EQ_1017   },
	{0x46, 
	8, word8_BLC_EQ_1018   },
	{0x47, 
	1, word8_BLC_EQ_1016   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1020[1] = {
	{0x02, 
	{ 0x00000000   }  } 
};

static LoopUnitDescr_a LoopUnitDescr_BLC_EQ_1008[1] = {
	{0xe001, /* Power */0x00, 0x00000000, 0xc5, 0x00, 0x0000, 0x01, 0xff, 0x88, 0x01, 
	{ 0x00, 0xff   },
	9, ParameterValueData_BLC_EQ_1009, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1020, 
	0, NULL   } 
};

static word8_a word8_BLC_EQ_1024[1] = {
	0x20  /* (1) */
};

static word8_a word8_BLC_EQ_1025[2] = {
	0x00, /* (1) */
	0x03  /* (1) */
};

static word8_a word8_BLC_EQ_1026[1] = {
	0x8b  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1022[3] = {
	{0x82, 
	1, word8_BLC_EQ_1024   },
	{0x40, 
	2, word8_BLC_EQ_1025   },
	{0x42, 
	1, word8_BLC_EQ_1026   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1027[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static word8_a word8_BLC_EQ_1030[1] = {
	0x03  /* (1) */
};

static word8_a word8_BLC_EQ_1032[2] = {
	0x0f, /* (1) */
	0x03  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1028[4] = {
	{0x43, 
	1, word8_BLC_EQ_1030   },
	{0x82, 
	1, word8_BLC_EQ_1024   },
	{0x40, 
	2, word8_BLC_EQ_1032   },
	{0x42, 
	1, word8_BLC_EQ_1026   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1034[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static word8_a word8_BLC_EQ_1037[1] = {
	0x00  /* (1) */
};

static word8_a word8_BLC_EQ_1038[3] = {
	0x55, /* (1) */
	0x55, /* (1) */
	0x02  /* (1) */
};

static word8_a word8_BLC_EQ_1039[1] = {
	0x01  /* (1) */
};

static word8_a word8_BLC_EQ_1040[3] = {
	0xcc, /* (1) */
	0xcc, /* (1) */
	0x00  /* (1) */
};

static word8_a word8_BLC_EQ_1041[1] = {
	0x02  /* (1) */
};

static word8_a word8_BLC_EQ_1042[3] = {
	0x80, /* (1) */
	0x80, /* (1) */
	0x00  /* (1) */
};

static word8_a word8_BLC_EQ_1044[3] = {
	0x80, /* (1) */
	0x00, /* (1) */
	0x00  /* (1) */
};

static word8_a word8_BLC_EQ_1045[1] = {
	0x04  /* (1) */
};

static word8_a word8_BLC_EQ_1046[3] = {
	0xfc, /* (1) */
	0x00, /* (1) */
	0xff  /* (1) */
};

static word8_a word8_BLC_EQ_1047[1] = {
	0x05  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1035[12] = {
	{0x0a, 
	1, word8_BLC_EQ_1037   },
	{0x0b, 
	3, word8_BLC_EQ_1038   },
	{0x0a, 
	1, word8_BLC_EQ_1039   },
	{0x0b, 
	3, word8_BLC_EQ_1040   },
	{0x0a, 
	1, word8_BLC_EQ_1041   },
	{0x0b, 
	3, word8_BLC_EQ_1042   },
	{0x0a, 
	1, word8_BLC_EQ_1030   },
	{0x0b, 
	3, word8_BLC_EQ_1044   },
	{0x0a, 
	1, word8_BLC_EQ_1045   },
	{0x0b, 
	3, word8_BLC_EQ_1046   },
	{0x0a, 
	1, word8_BLC_EQ_1047   },
	{0x0b, 
	3, word8_BLC_EQ_1046   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1055[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1062[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1069[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1089[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1095[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1102[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1123[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1130[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1137[3] = {
	{0x07, 
	{ 0x0000002e   }  },
	{0x0b, 
	{ 0x00000001   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1157[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static LoopUnitDescr_a LoopUnitDescr_BLC_EQ_1021[16] = {
	{0x0001, /* A1 001 */0x00, 0x00000000, 0x02, 0x00, 0x0b00, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x01, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1027, 
	0, NULL   },
	{0x0002, /* A1 003 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x02, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1034, 
	0, NULL   },
	{0xa001, /* A1 004 */0x00, 0x00000000, 0x0f, 0x00, 0x0000, 0x00, 0x00, 0x88, 0x01, 
	{ 0x03, 0xff   },
	12, ParameterValueData_BLC_EQ_1035, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0003, /* A1 005 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x04, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1055, 
	0, NULL   },
	{0x0004, /* A1 006 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x05, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1062, 
	0, NULL   },
	{0x0005, /* A1 007 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x06, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1069, 
	0, NULL   },
	{0xa002, /* A1 008 */0x00, 0x00000000, 0x0f, 0x00, 0x0000, 0x00, 0x00, 0x88, 0x01, 
	{ 0x07, 0xff   },
	12, ParameterValueData_BLC_EQ_1035, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0006, /* A1 009 */0x00, 0x00000000, 0x02, 0x00, 0x0b00, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x08, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1089, 
	0, NULL   },
	{0x0007, /* A1 011 */0x00, 0x00000000, 0x02, 0x00, 0x0b00, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x09, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1095, 
	0, NULL   },
	{0x0008, /* A1 013 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0a, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1102, 
	0, NULL   },
	{0xa003, /* A1 014 */0x00, 0x00000000, 0x0f, 0x00, 0x0000, 0x00, 0x00, 0x88, 0x01, 
	{ 0x0b, 0xff   },
	12, ParameterValueData_BLC_EQ_1035, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0009, /* A1 015 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0c, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1123, 
	0, NULL   },
	{0x000a, /* A1 016 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0d, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1130, 
	0, NULL   },
	{0x000b, /* A1 017 */0x00, 0x00000000, 0x04, 0x00, 0x0300, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0e, 0xff   },
	4, ParameterValueData_BLC_EQ_1028, 
	0, NULL, 
	3, LU_Attribute_BLC_EQ_1137, 
	0, NULL   },
	{0xa004, /* A1 018 */0x00, 0x00000000, 0x0f, 0x00, 0x0000, 0x00, 0x00, 0x88, 0x01, 
	{ 0x0f, 0xff   },
	12, ParameterValueData_BLC_EQ_1035, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x000c, /* A1 019 */0x00, 0x00000000, 0x02, 0x00, 0x0b00, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x10, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1157, 
	0, NULL   } 
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1159[1] = {
	{0x82, 
	1, word8_BLC_EQ_1024   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1167[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static word8_a word8_BLC_EQ_1171[2] = {
	0x00, /* (1) */
	0x10  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1168[3] = {
	{0x82, 
	1, word8_BLC_EQ_1024   },
	{0x40, 
	2, word8_BLC_EQ_1171   },
	{0x42, 
	1, word8_BLC_EQ_1026   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1173[2] = {
	{0x07, 
	{ 0x00000011   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1179[2] = {
	{0x07, 
	{ 0x00000011   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1202[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1208[1] = {
	{0x07, 
	{ 0x00000019   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1214[2] = {
	{0x07, 
	{ 0x00000011   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1220[2] = {
	{0x07, 
	{ 0x00000011   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1240[2] = {
	{0x07, 
	{ 0x00000011   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1249[2] = {
	{0x07, 
	{ 0x00000011   }  },
	{0x0f, 
	{ 0x00000000   }  } 
};

static word8_a word8_BLC_EQ_1253[3] = {
	0x10, /* (1) */
	0x85, /* (1) */
	0x0f  /* (1) */
};

static word8_a word8_BLC_EQ_1254[8] = {
	0x00, /* (1) */
	0x9d, /* (1) */
	0xd0, /* (1) */
	0x60, /* (1) */
	0x91, /* (1) */
	0x90, /* (1) */
	0xe4, /* (1) */
	0x02  /* (1) */
};

static word8_a word8_BLC_EQ_1255[8] = {
	0x00, /* (1) */
	0x80, /* (1) */
	0xff, /* (1) */
	0x60, /* (1) */
	0x60, /* (1) */
	0x61, /* (1) */
	0x60, /* (1) */
	0x01  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1250[4] = {
	{0x0a, 
	1, word8_BLC_EQ_1041   },
	{0x0b, 
	3, word8_BLC_EQ_1253   },
	{0x0c, 
	8, word8_BLC_EQ_1254   },
	{0x0d, 
	8, word8_BLC_EQ_1255   } 
};

static LoopUnitDescr_a LoopUnitDescr_BLC_EQ_1158[15] = {
	{0x000d, /* A2 001 */0x00, 0x00000000, 0x06, 0x00, 0x0300, 0x00, 0xff, 0x89, 0x01, 
	{ 0x01, 0xff   },
	1, ParameterValueData_BLC_EQ_1159, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x000e, /* A2 002 */0x00, 0x00000000, 0x02, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x02, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1167, 
	0, NULL   },
	{0x000f, /* A2 003 */0x00, 0x00000000, 0x01, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x03, 0xff   },
	3, ParameterValueData_BLC_EQ_1168, 
	0, NULL, 
	2, LU_Attribute_BLC_EQ_1173, 
	0, NULL   },
	{0x0010, /* A2 004 */0x00, 0x00000000, 0x01, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x04, 0xff   },
	3, ParameterValueData_BLC_EQ_1168, 
	0, NULL, 
	2, LU_Attribute_BLC_EQ_1179, 
	0, NULL   },
	{0xa005, /* A2 005 */0x00, 0x00000000, 0x0f, 0x00, 0x0000, 0x00, 0x00, 0x88, 0x01, 
	{ 0x05, 0xff   },
	12, ParameterValueData_BLC_EQ_1035, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0011, /* A2 006 */0x00, 0x00000000, 0x06, 0x00, 0x0300, 0x00, 0xff, 0x89, 0x01, 
	{ 0x06, 0xff   },
	1, ParameterValueData_BLC_EQ_1159, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0012, /* A2 007 */0x00, 0x00000000, 0x02, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x07, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1202, 
	0, NULL   },
	{0x0013, /* A2 008 */0x00, 0x00000000, 0x02, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x08, 0xff   },
	3, ParameterValueData_BLC_EQ_1022, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1208, 
	0, NULL   },
	{0x0014, /* A2 009 */0x00, 0x00000000, 0x01, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x09, 0xff   },
	3, ParameterValueData_BLC_EQ_1168, 
	0, NULL, 
	2, LU_Attribute_BLC_EQ_1214, 
	0, NULL   },
	{0x0015, /* A2 010 */0x00, 0x00000000, 0x01, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0a, 0xff   },
	3, ParameterValueData_BLC_EQ_1168, 
	0, NULL, 
	2, LU_Attribute_BLC_EQ_1220, 
	0, NULL   },
	{0xa006, /* A2 011 */0x00, 0x00000000, 0x0f, 0x00, 0x0000, 0x00, 0x00, 0x88, 0x01, 
	{ 0x0b, 0xff   },
	12, ParameterValueData_BLC_EQ_1035, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0016, /* A2 012 */0x00, 0x00000000, 0x01, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0c, 0xff   },
	3, ParameterValueData_BLC_EQ_1168, 
	0, NULL, 
	2, LU_Attribute_BLC_EQ_1240, 
	0, NULL   },
	{0x0017, /* A2 013 */0x00, 0x00000000, 0x06, 0x00, 0x0300, 0x00, 0xff, 0x89, 0x01, 
	{ 0x0d, 0xff   },
	1, ParameterValueData_BLC_EQ_1159, 
	0, NULL, 
	0, NULL, 
	0, NULL   },
	{0x0018, /* A2 014 */0x00, 0x00000000, 0x01, 0x00, 0x0100, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0e, 0xff   },
	3, ParameterValueData_BLC_EQ_1168, 
	0, NULL, 
	2, LU_Attribute_BLC_EQ_1249, 
	0, NULL   },
	{0x0019, /* A2 015 */0x00, 0x00000000, 0xcc, 0x00, 0x0008, 0x00, 0xff, 0x8b, 0x01, 
	{ 0x0f, 0xff   },
	4, ParameterValueData_BLC_EQ_1250, 
	0, NULL, 
	0, NULL, 
	0, NULL   } 
};

static word8_a word8_BLC_EQ_1259[3] = {
	0x11, /* (1) */
	0x01, /* (1) */
	0x00  /* (1) */
};

static word8_a word8_BLC_EQ_1272[8] = {
	0x24, /* (1) */
	0x66, /* (1) */
	0xbf, /* (1) */
	0xfd, /* (1) */
	0x60, /* (1) */
	0x8e, /* (1) */
	0xfc, /* (1) */
	0x01  /* (1) */
};

static word8_a word8_BLC_EQ_1273[1] = {
	0x98  /* (1) */
};

static word8_a word8_BLC_EQ_1274[8] = {
	0x00, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x10, /* (1) */
	0x08, /* (1) */
	0x00, /* (1) */
	0x00, /* (1) */
	0x18  /* (1) */
};

static ParameterValueData_a ParameterValueData_BLC_EQ_1257[17] = {
	{0x09, 
	3, word8_BLC_EQ_1259   },
	{0x0a, 
	1, word8_BLC_EQ_1037   },
	{0x0b, 
	3, word8_BLC_EQ_1038   },
	{0x0a, 
	1, word8_BLC_EQ_1039   },
	{0x0b, 
	3, word8_BLC_EQ_1040   },
	{0x0a, 
	1, word8_BLC_EQ_1041   },
	{0x0b, 
	3, word8_BLC_EQ_1042   },
	{0x0a, 
	1, word8_BLC_EQ_1030   },
	{0x0b, 
	3, word8_BLC_EQ_1044   },
	{0x0a, 
	1, word8_BLC_EQ_1045   },
	{0x0b, 
	3, word8_BLC_EQ_1046   },
	{0x0a, 
	1, word8_BLC_EQ_1047   },
	{0x0b, 
	3, word8_BLC_EQ_1046   },
	{0x0c, 
	8, word8_BLC_EQ_1272   },
	{0x42, 
	1, word8_BLC_EQ_1273   },
	{0x46, 
	8, word8_BLC_EQ_1274   },
	{0x47, 
	1, word8_BLC_EQ_1273   } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1276[1] = {
	{0x09, 
	{ 0x00000009   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1296[1] = {
	{0x09, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1316[1] = {
	{0x09, 
	{ 0x00000000   }  } 
};

static LU_Attribute_a LU_Attribute_BLC_EQ_1336[1] = {
	{0x09, 
	{ 0x0000000a   }  } 
};

static LoopUnitDescr_a LoopUnitDescr_BLC_EQ_1256[4] = {
	{0xb001, /* BRANNVESENET */0x00, 0x00000000, 0xc1, 0x00, 0x0000, 0x00, 0xff, 0x88, 0x01, 
	{ 0x00, 0xff   },
	17, ParameterValueData_BLC_EQ_1257, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1276, 
	0, NULL   },
	{0xb002, /* RESERVE-1 */0x00, 0x00000000, 0xc1, 0x00, 0x0000, 0x00, 0xff, 0x88, 0x01, 
	{ 0x00, 0xff   },
	17, ParameterValueData_BLC_EQ_1257, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1296, 
	0, NULL   },
	{0xb003, /* HOLDEMAGNET */0x00, 0x00000000, 0xc1, 0x00, 0x0000, 0x00, 0xff, 0x88, 0x01, 
	{ 0x00, 0xff   },
	17, ParameterValueData_BLC_EQ_1257, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1316, 
	0, NULL   },
	{0xb004, /* FEILUTGANG */0x00, 0x00000000, 0xc1, 0x00, 0x0000, 0x00, 0xff, 0x88, 0x01, 
	{ 0x00, 0xff   },
	17, ParameterValueData_BLC_EQ_1257, 
	0, NULL, 
	1, LU_Attribute_BLC_EQ_1336, 
	0, NULL   } 
};

static LoopEqDescr_a LoopEqDescr_BLC_EQ_1007[4] = {
	{0xd001, /* BSL 310 */0x00, 0x00000000, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00000000, 
	1, LoopUnitDescr_BLC_EQ_1008   },
	{0xd002, /* SLØYFE-A1 */0x01, 0x00000000, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x40716bcd, 
	16, LoopUnitDescr_BLC_EQ_1021   },
	{0xd003, /* SLØYFE-A2 */0x02, 0x00000000, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x5af54224, 
	15, LoopUnitDescr_BLC_EQ_1158   },
	{0xd004, /* BSB-310-1 */0x03, 0x00000000, 0xe3, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00000000, 
	4, LoopUnitDescr_BLC_EQ_1256   } 
};

static BLC_EqDescr_a BLC_EqDescr_BLC_EQ_1006 = {0xd401, 
	4, LoopEqDescr_BLC_EQ_1007  
};

static UnitId_a UnitId_BLC_EQ_1341[41] = {
	0x0001 /* A1 001 */, /* (2) */
	0x0002 /* A1 003 */, /* (2) */
	0x0003 /* A1 005 */, /* (2) */
	0x0004 /* A1 006 */, /* (2) */
	0x0005 /* A1 007 */, /* (2) */
	0x0006 /* A1 009 */, /* (2) */
	0x0007 /* A1 011 */, /* (2) */
	0x0008 /* A1 013 */, /* (2) */
	0x0009 /* A1 015 */, /* (2) */
	0x000a /* A1 016 */, /* (2) */
	0x000b /* A1 017 */, /* (2) */
	0x000c /* A1 019 */, /* (2) */
	0x000d /* A2 001 */, /* (2) */
	0x000e /* A2 002 */, /* (2) */
	0x000f /* A2 003 */, /* (2) */
	0x0010 /* A2 004 */, /* (2) */
	0x0011 /* A2 006 */, /* (2) */
	0x0012 /* A2 007 */, /* (2) */
	0x0013 /* A2 008 */, /* (2) */
	0x0014 /* A2 009 */, /* (2) */
	0x0015 /* A2 010 */, /* (2) */
	0x0016 /* A2 012 */, /* (2) */
	0x0017 /* A2 013 */, /* (2) */
	0x0018 /* A2 014 */, /* (2) */
	0x0019 /* A2 015 */, /* (2) */
	0xa001 /* A1 004 */, /* (2) */
	0xa002 /* A1 008 */, /* (2) */
	0xa003 /* A1 014 */, /* (2) */
	0xa004 /* A1 018 */, /* (2) */
	0xa005 /* A2 005 */, /* (2) */
	0xa006 /* A2 011 */, /* (2) */
	0xb001 /* BRANNVESENET */, /* (2) */
	0xb002 /* RESERVE-1 */, /* (2) */
	0xb003 /* HOLDEMAGNET */, /* (2) */
	0xb004 /* FEILUTGANG */, /* (2) */
	0xd001 /* BSL 310 */, /* (2) */
	0xd002 /* SLØYFE-A1 */, /* (2) */
	0xd003 /* SLØYFE-A2 */, /* (2) */
	0xd004 /* BSB-310-1 */, /* (2) */
	0xe001 /* Power */, /* (2) */
	0xe101 /* KOLHEIVEGEN 10 */  /* (2) */
};

static IsOperatedByEntry_a IsOperatedByEntry_BLC_EQ_1340[1] = {
	{ 0xe101 /* KOLHEIVEGEN 10 */,
	41, UnitId_BLC_EQ_1341  } 
};

static IsOperatedBy_a IsOperatedBy_BLC_EQ_1337 = {
	1, IsOperatedByEntry_BLC_EQ_1340  
};

word16_a word16_BLC_EQ_1342 = { 0xe101 
};

BLC_EqSCD_Directory_a BLC_EqSCD_Directory_BLC_EQ_1002 = {
	&OZ_ZoneAddr_BLC_EQ_1003, 
	&BLC_EqDescr_BLC_EQ_1006, 
	&IsOperatedBy_BLC_EQ_1337, 
	&word16_BLC_EQ_1342, 
0x00000000, 0x01000078, 0xfefefefe  
};


static CompIdUnitId_a CompIdUnitId_BLC_EQ_1346[1] = {
	{ 0xf001 /* BLC Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1353[1] = {
	{ 0xf801 /* Computer Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1354[1] = {
	{ 0xeb01 /* FAD Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1359[1] = {
	{ 0xea01 /* FPE Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1364[1] = {
	{ 0xef01 /* Loop Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1369[1] = {
	{ 0xec01 /* OP Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1375[1] = {
	{ 0xfb01 /* OZ Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1376[1] = {
	{ 0xee01 /* Point Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1382[1] = {
	{ 0xf901 /* Power Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_BLC_EQ_1388[1] = {
	{ 0xd801 /* Operator Panel Equipment */,0xffff  } 
};

static ACLIB_Object_a ACLIB_Object_BLC_EQ_1344[45] = {
	{/* POINT_EQ_FAULT_ID */ 0x8042,
	1, CompIdUnitId_BLC_EQ_1376, 
	0, NULL  },
	{/* POINT_EQ_RESP_ID */ 0x8043,
	1, CompIdUnitId_BLC_EQ_1376, 
	0, NULL  },
	{/* POINT_EQ_STATUS_ID */ 0x8044,
	1, CompIdUnitId_BLC_EQ_1376, 
	0, NULL  },
	{/* POINT_EQ_START_UP_ID */ 0x8046,
	1, CompIdUnitId_BLC_EQ_1376, 
	0, NULL  },
	{/* POINT_EQ_PMRV_ID */ 0x8047,
	1, CompIdUnitId_BLC_EQ_1376, 
	0, NULL  },
	{/* POINT_EQ_SV_STATUS_ID */ 0x8049,
	1, CompIdUnitId_BLC_EQ_1376, 
	0, NULL  },
	{/* CARRIER_EQ_RESP_ID */ 0x8104,
	0, NULL, 
	0, NULL  },
	{/* CARRIER_EQ_START_UP_ID */ 0x8105,
	0, NULL, 
	0, NULL  },
	{/* CARRIER_EQ_FAULT_ID */ 0x8106,
	0, NULL, 
	0, NULL  },
	{/* CARRIER_EQ_STATUS_ID */ 0x8107,
	0, NULL, 
	0, NULL  },
	{/* FAD_EQ_RESP_ID */ 0xe042,
	1, CompIdUnitId_BLC_EQ_1354, 
	0, NULL  },
	{/* FAD_EQ_FAULT_ID */ 0xe043,
	1, CompIdUnitId_BLC_EQ_1354, 
	0, NULL  },
	{/* FAD_EQ_START_UP_ID */ 0xe044,
	1, CompIdUnitId_BLC_EQ_1354, 
	0, NULL  },
	{/* FAD_EQ_STATUS_ID */ 0xe045,
	1, CompIdUnitId_BLC_EQ_1354, 
	0, NULL  },
	{/* FAD_OZ_EQ_RESP_ID */ 0xe047,
	0, NULL, 
	0, NULL  },
	{/* FPE_EQ_RESP_ID */ 0xe442,
	1, CompIdUnitId_BLC_EQ_1359, 
	0, NULL  },
	{/* FPE_EQ_STATUS_ID */ 0xe443,
	1, CompIdUnitId_BLC_EQ_1359, 
	0, NULL  },
	{/* FPE_EQ_FAULT_ID */ 0xe444,
	1, CompIdUnitId_BLC_EQ_1359, 
	0, NULL  },
	{/* FPE_EQ_START_UP_ID */ 0xe445,
	1, CompIdUnitId_BLC_EQ_1359, 
	0, NULL  },
	{/* FPE_OZ_EQ_RESP */ 0xe447,
	0, NULL, 
	0, NULL  },
	{/* LOOP_EQ_FAULT_ID */ 0xec41,
	1, CompIdUnitId_BLC_EQ_1364, 
	0, NULL  },
	{/* LOOP_EQ_RESP_ID */ 0xec42,
	1, CompIdUnitId_BLC_EQ_1364, 
	0, NULL  },
	{/* LOOP_EQ_STATUS_ID */ 0xec46,
	1, CompIdUnitId_BLC_EQ_1364, 
	0, NULL  },
	{/* LOOP_EQ_DIRECT_DATA_ID */ 0xec47,
	1, CompIdUnitId_BLC_EQ_1364, 
	0, NULL  },
	{/* LOOP_EQ_START_UP_ID */ 0xec48,
	1, CompIdUnitId_BLC_EQ_1364, 
	0, NULL  },
	{/* BLC_EQ_FAULT_ID */ 0xee41,
	1, CompIdUnitId_BLC_EQ_1346, 
	0, NULL  },
	{/* BLC_EQ_RESP_ID */ 0xee42,
	1, CompIdUnitId_BLC_EQ_1346, 
	0, NULL  },
	{/* OP_ZONE_EQ_RESP_ID */ 0xee61,
	0, NULL, 
	0, NULL  },
	{/* COMPONENT_START_UP_ACK_ID */ 0xee8d,
	0, NULL, 
	0, NULL  },
	{/* CONFIGURATION_CRC_CHECK_STATUS_ID */ 0xee95,
	1, CompIdUnitId_BLC_EQ_1353, 
	0, NULL  },
	{/* OP_EQ_RESP_ID */ 0xf1c8,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* OP_EQ_FAULT_ID */ 0xf1c9,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* OP_EQ_START_UP_ID */ 0xf1dc,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* USER_OZ_CMD_ID */ 0xf1ed,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* USER_OP_CMD_ID */ 0xf1ee,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* OP_EQ_STATUS_ID */ 0xf1f0,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* USER_UNIT_ACT_CMD_ID */ 0xf1f3,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* USER_UNIT_ARM_CMD_ID */ 0xf1f4,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* POWER_EQ_RESP_ID */ 0xf241,
	1, CompIdUnitId_BLC_EQ_1382, 
	0, NULL  },
	{/* POWER_EQ_FAULT_ID */ 0xf242,
	1, CompIdUnitId_BLC_EQ_1382, 
	0, NULL  },
	{/* POWER_EQ_START_UP_ID */ 0xf243,
	1, CompIdUnitId_BLC_EQ_1382, 
	0, NULL  },
	{/* OZ_CMD_ACK_ID */ 0xf302,
	0, NULL, 
	0, NULL  },
	{/* OZ_PASS_WORD_CMD_ID */ 0xf309,
	1, CompIdUnitId_BLC_EQ_1375, 
	0, NULL  },
	{/* USER_POINT_CMD_ID */ 0xf503,
	1, CompIdUnitId_BLC_EQ_1369, 
	0, NULL  },
	{/* USER_TEXT_REQ */ 0xfd01,
	1, CompIdUnitId_BLC_EQ_1388, 
	0, NULL  } 
};

static ComponentAddress_a ComponentAddress_BLC_EQ_1345[10] = {
	{ 0xd801 /* Operator Panel Equipment */,
	{ 0x0007, 0x01   } },
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
	{ 0xf801 /* Computer Controller */,
	{ 0x0005, 0x01   } },
	{ 0xf901 /* Power Controller */,
	{ 0x000d, 0x01   } },
	{ 0xfb01 /* OZ Controller */,
	{ 0x000f, 0x01   } } 
};

ACLIB_ObjectDirectory_a ACLIB_ObjectDirectory_BLC_EQ_1343 = {
	10, ComponentAddress_BLC_EQ_1345, 
	45, ACLIB_Object_BLC_EQ_1344, 
0x00000000, 0x03f00dcc, 0xfefefefe  
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_5 = {
	"ekBLC_EQ_50377_Router"
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_6 = {
	"Router_ekBLC_EQ_50377"
};

static AcPortData_a AcPortData_BLC_EQ_1391[1] = {
	{0x00000001, 0x0a, 
	{ 0x0003, 0x01   },
	4, &AcFifoBinAddr_a_AC_13_5   } 
};

static AcRouteData_a AcRouteData_BLC_EQ_1392[1] = {
	{0x00000001, 0x0a, 
	{ 0x0000, 0x00   },
	4, &AcFifoBinAddr_a_AC_13_6   } 
};

AcBinaryConfigData_a AcBinaryConfigData_BLC_EQ_1393 = {
	1, AcPortData_BLC_EQ_1391, 
	1, AcRouteData_BLC_EQ_1392, 
0x00000000, 0x03f0111c, 0xfefefefe  
};

static ComponentDirectory_a ComponentDirectoryBLC_Eq = {
	0xd401,
	&AttributeDirectory_BLC_EQ_1000,
	&BLC_EqSCD_Directory_BLC_EQ_1002,
	&ACLIB_ObjectDirectory_BLC_EQ_1343,
	&AcBinaryConfigData_BLC_EQ_1393
};
