#include "mc_op_eq.c"
char KR100[] = {
#include "KR100.inc"
};

OP_EqAttributes_a OP_EqAttributes_OP_EQ_1001 = { 0x00, 0x00, 0x00, 0x00, 0x00000014, 0x0000000a, 0x0000157c, 0x00000348, 0x0000000a, 
	0x0000000a, 0x0000000a, 0x00000002, 0x00000019, 0x00001c20, 0x0001, 0x0f, 0x1f, 0x01, 0xe101 
};

AttributeDirectory_a AttributeDirectory_OP_EQ_1000 = {
	&OP_EqAttributes_OP_EQ_1001, 
	0, NULL, 
0x00000000, 0x01000cac, 0xfefefefe  
};

OpWindowId_a	OpWindowId_a_AC_493_1 [6] = 
{
	{
		1 /* GENERAL_ALARM_WID_OPEQ */
	}/* ElementNo 0 UnitNo <521> UnitName <>  EntityName <Op Window Priorities ENTRY> */,
	{
		0 /* FIRE_ALARM_WID_OPEQ */
	}/* ElementNo 0 UnitNo <522> UnitName <>  EntityName <Op Window Priorities ENTRY> */,
	{
		3 /* FAULT_WARNING_WID_OPEQ */
	}/* ElementNo 0 UnitNo <523> UnitName <>  EntityName <Op Window Priorities ENTRY> */,
	{
		4 /* DISABLEMENT_WID_OPEQ */
	}/* ElementNo 0 UnitNo <524> UnitName <>  EntityName <Op Window Priorities ENTRY> */,
	{
		5 /* TEST_WID_OPEQ */
	}/* ElementNo 0 UnitNo <1233> UnitName <>  EntityName <Op Window Priorities ENTRY> */,
	{
		2 /* FIRE_WARNING_WID_OPEQ */
	}/* ElementNo 0 UnitNo <525> UnitName <>  EntityName <Op Window Priorities ENTRY> */
};


OpWindowPriorities_a	OpWindowPriorities_a_AC_492_1 = 
{
	6 /* int OpWindowIdCount */,
	OpWindowId_a_AC_493_1 /* Ptr to array of type OpWindowId_a */
};
OpWindowId_a	OpWindowId_a_AC_496_1 [6] = 
{
	{
		1 /* GENERAL_ALARM_WID_OPEQ */
	}/* ElementNo 0 UnitNo <529> UnitName <>  EntityName <Op Window Sequence ENTRY> */,
	{
		0 /* FIRE_ALARM_WID_OPEQ */
	}/* ElementNo 0 UnitNo <637> UnitName <>  EntityName <Op Window Sequence ENTRY> */,
	{
		2 /* FIRE_WARNING_WID_OPEQ */
	}/* ElementNo 0 UnitNo <638> UnitName <>  EntityName <Op Window Sequence ENTRY> */,
	{
		3 /* FAULT_WARNING_WID_OPEQ */
	}/* ElementNo 0 UnitNo <639> UnitName <>  EntityName <Op Window Sequence ENTRY> */,
	{
		4 /* DISABLEMENT_WID_OPEQ */
	}/* ElementNo 0 UnitNo <640> UnitName <>  EntityName <Op Window Sequence ENTRY> */,
	{
		5 /* TEST_WID_OPEQ */
	}/* ElementNo 0 UnitNo <1234> UnitName <>  EntityName <Op Window Sequence ENTRY> */
};


OpWindowSequence_a	OpWindowSequence_a_AC_495_1 = 
{
	6 /* int OpWindowIdCount */,
	OpWindowId_a_AC_496_1 /* Ptr to array of type OpWindowId_a */
};

static UnitTextsEntry_a UnitTextsEntry_OP_EQ_1004[85] = {
	{0x0001, 0x00, 0x16a9  /* A1 001 */ },
	{0x0002, 0x02, 0x16ab  /* A1 003 */ },
	{0x0003, 0x02, 0x16ae  /* A1 005 */ },
	{0x0004, 0x02, 0x16b0  /* A1 006 */ },
	{0x0005, 0x02, 0x16b2  /* A1 007 */ },
	{0x0006, 0x00, 0x16b5  /* A1 009 */ },
	{0x0007, 0x00, 0x16b7  /* A1 011 */ },
	{0x0008, 0x02, 0x16b9  /* A1 013 */ },
	{0x0009, 0x02, 0x16bc  /* A1 015 */ },
	{0x000a, 0x02, 0x16be  /* A1 016 */ },
	{0x000b, 0x02, 0x16c0  /* A1 017 */ },
	{0x000c, 0x00, 0x16c3  /* A1 019 */ },
	{0x000d, 0x03, 0x16c5  /* A2 001 */ },
	{0x000e, 0x00, 0x16c7  /* A2 002 */ },
	{0x000f, 0x01, 0x16c9  /* A2 003 */ },
	{0x0010, 0x01, 0x16cb  /* A2 004 */ },
	{0x0011, 0x03, 0x16ce  /* A2 006 */ },
	{0x0012, 0x00, 0x16d0  /* A2 007 */ },
	{0x0013, 0x00, 0x16d2  /* A2 008 */ },
	{0x0014, 0x01, 0x16d4  /* A2 009 */ },
	{0x0015, 0x01, 0x16d6  /* A2 010 */ },
	{0x0016, 0x01, 0x16d9  /* A2 012 */ },
	{0x0017, 0x03, 0x16db  /* A2 013 */ },
	{0x0018, 0x01, 0x16dd  /* A2 014 */ },
	{0x0019, 0x0d, 0x16df  /* A2 015 */ },
	{0x6001, 0x02, 0x16aa  /* BAD LEILIGHET 1 */ },
	{0x6002, 0x02, 0x16ac  /* SOVEROM LEILIGHET 1 */ },
	{0x6003, 0x02, 0x16af  /* STUE LEILIGHET 1 */ },
	{0x6004, 0x02, 0x16b1  /* STUE LEILIGHET 2 */ },
	{0x6005, 0x02, 0x16b3  /* SOVEROM LEILIGHET 2 */ },
	{0x6006, 0x02, 0x16b6  /* BAD LEILIGHET 2 */ },
	{0x6007, 0x02, 0x16b8  /* BAD LEILIGHET 3 */ },
	{0x6008, 0x02, 0x16ba  /* SOVEROM LEILIGHET 3 */ },
	{0x6009, 0x02, 0x16bd  /* STUE LEILIGHET 3 */ },
	{0x600a, 0x02, 0x16bf  /* STUE LEILIGHET 4 */ },
	{0x600b, 0x02, 0x16c1  /* SOVEROM LEILIGHET 4 */ },
	{0x600c, 0x02, 0x16c4  /* BAD LEILIGHET 4 */ },
	{0x600d, 0x02, 0x16c6  /* MANUELL MELDER GANG NORD */ },
	{0x600e, 0x02, 0x16c8  /* GARDEROBE */ },
	{0x600f, 0x02, 0x16ca  /* KONTOR-OPPHOLDSROM */ },
	{0x6010, 0x02, 0x16cc  /* GANG NORD */ },
	{0x6011, 0x02, 0x16cf  /* MANUELL MELDER HOVEDINNGANG */ },
	{0x6012, 0x02, 0x16d1  /* VASKEROM */ },
	{0x6013, 0x02, 0x16d3  /* KJØKKEN */ },
	{0x6014, 0x02, 0x16d5  /* BOD */ },
	{0x6015, 0x02, 0x16d7  /* GANG SØR */ },
	{0x6016, 0x02, 0x16da  /* STUE-SPISEROM */ },
	{0x6017, 0x02, 0x16dc  /* MANUELL MELDER GANG SØR */ },
	{0x6018, 0x02, 0x16de  /* TEKN ROM LOFT */ },
	{0x6019, 0x02, 0x16e0  /* SPRINKLER */ },
	{0xa001, 0x00, 0x16ad  /* A1 004 */ },
	{0xa002, 0x00, 0x16b4  /* A1 008 */ },
	{0xa003, 0x00, 0x16bb  /* A1 014 */ },
	{0xa004, 0x00, 0x16c2  /* A1 018 */ },
	{0xa005, 0x00, 0x16cd  /* A2 005 */ },
	{0xa006, 0x00, 0x16d8  /* A2 011 */ },
	{0xb001, 0x09, 0x16e1  /* BRANNVESENET */ },
	{0xb002, 0x00, 0x16e2  /* RESERVE-1 */ },
	{0xb003, 0x00, 0x16e3  /* HOLDEMAGNET */ },
	{0xb004, 0x0a, 0x16e4  /* FEILUTGANG */ },
	{0xc801, 0x00, 0x169a  /* ALLE ALARMORGAN */ },
	{0xd001, 0x09, 0x16a0  /* BSL 310 */ },
	{0xd002, 0x02, 0x16a6  /* SLØYFE-A1 */ },
	{0xd003, 0x02, 0x16a7  /* SLØYFE-A2 */ },
	{0xd004, 0x07, 0x16a8  /* BSB-310-1 */ },
	{0xd401, 0xfe, 0x169f  /* BLC_Eq */ },
	{0xd501, 0x00, 0x16a1  /* MainCpu */ },
	{0xd601, 0x00, 0x169c  /* Domain Network */ },
	{0xd701, 0x00, 0x169e  /* BRANNSENTRAL */ },
	{0xd801, 0xfe, 0x16a5  /* Operator Panel Equipment */ },
	{0xd802, 0xfe, 0x16e5  /* REMOTE PILOT */ },
	{0xe001, 0x00, 0x16a2  /* Power */ },
	{0xe101, 0x00, 0x1699  /* KOLHEIVEGEN 10 */ },
	{0xe701, 0xfe, 0x169d  /* Domain Controller */ },
	{0xe801, 0xfe, 0x16ec  /* DZ Controller */ },
	{0xe901, 0xfe, 0x16ed  /* AZ Controller */ },
	{0xea01, 0xfe, 0x16e9  /* FPE Controller */ },
	{0xeb01, 0xfe, 0x16e8  /* FAD Controller */ },
	{0xec01, 0xfe, 0x16ea  /* OP Controller */ },
	{0xee01, 0xfe, 0x16e7  /* Point Controller */ },
	{0xef01, 0xfe, 0x16e6  /* Loop Controller */ },
	{0xf001, 0xfe, 0x16a3  /* BLC Controller */ },
	{0xf601, 0x00, 0x169b  /* Log Controller */ },
	{0xf801, 0xfe, 0x16a4  /* Computer Controller */ },
	{0xfb01, 0xfe, 0x16eb  /* OZ Controller */ } 
};

static UnitTexts_a UnitTexts_OP_EQ_1003 = {
	85, UnitTextsEntry_OP_EQ_1004  
};

static UnitTextsEntry_a UnitTextsEntry_OP_EQ_1006[85] = {
	{0x0001, 0x00, 0x16a9  /* A1 001 */ },
	{0x0002, 0x02, 0x16ab  /* A1 003 */ },
	{0x0003, 0x02, 0x16ae  /* A1 005 */ },
	{0x0004, 0x02, 0x16b0  /* A1 006 */ },
	{0x0005, 0x02, 0x16b2  /* A1 007 */ },
	{0x0006, 0x00, 0x16b5  /* A1 009 */ },
	{0x0007, 0x00, 0x16b7  /* A1 011 */ },
	{0x0008, 0x02, 0x16b9  /* A1 013 */ },
	{0x0009, 0x02, 0x16bc  /* A1 015 */ },
	{0x000a, 0x02, 0x16be  /* A1 016 */ },
	{0x000b, 0x02, 0x16c0  /* A1 017 */ },
	{0x000c, 0x00, 0x16c3  /* A1 019 */ },
	{0x000d, 0x03, 0x16c5  /* A2 001 */ },
	{0x000e, 0x00, 0x16c7  /* A2 002 */ },
	{0x000f, 0x01, 0x16c9  /* A2 003 */ },
	{0x0010, 0x01, 0x16cb  /* A2 004 */ },
	{0x0011, 0x03, 0x16ce  /* A2 006 */ },
	{0x0012, 0x00, 0x16d0  /* A2 007 */ },
	{0x0013, 0x00, 0x16d2  /* A2 008 */ },
	{0x0014, 0x01, 0x16d4  /* A2 009 */ },
	{0x0015, 0x01, 0x16d6  /* A2 010 */ },
	{0x0016, 0x01, 0x16d9  /* A2 012 */ },
	{0x0017, 0x03, 0x16db  /* A2 013 */ },
	{0x0018, 0x01, 0x16dd  /* A2 014 */ },
	{0x0019, 0x0d, 0x16df  /* A2 015 */ },
	{0x6001, 0x02, 0x16aa  /* BAD LEILIGHET 1 */ },
	{0x6006, 0x02, 0x16b6  /* BAD LEILIGHET 2 */ },
	{0x6007, 0x02, 0x16b8  /* BAD LEILIGHET 3 */ },
	{0x600c, 0x02, 0x16c4  /* BAD LEILIGHET 4 */ },
	{0x6014, 0x02, 0x16d5  /* BOD */ },
	{0x6010, 0x02, 0x16cc  /* GANG NORD */ },
	{0x6015, 0x02, 0x16d7  /* GANG SØR */ },
	{0x600e, 0x02, 0x16c8  /* GARDEROBE */ },
	{0x6013, 0x02, 0x16d3  /* KJØKKEN */ },
	{0x600f, 0x02, 0x16ca  /* KONTOR-OPPHOLDSROM */ },
	{0x600d, 0x02, 0x16c6  /* MANUELL MELDER GANG NORD */ },
	{0x6017, 0x02, 0x16dc  /* MANUELL MELDER GANG SØR */ },
	{0x6011, 0x02, 0x16cf  /* MANUELL MELDER HOVEDINNGANG */ },
	{0x6002, 0x02, 0x16ac  /* SOVEROM LEILIGHET 1 */ },
	{0x6005, 0x02, 0x16b3  /* SOVEROM LEILIGHET 2 */ },
	{0x6008, 0x02, 0x16ba  /* SOVEROM LEILIGHET 3 */ },
	{0x600b, 0x02, 0x16c1  /* SOVEROM LEILIGHET 4 */ },
	{0x6019, 0x02, 0x16e0  /* SPRINKLER */ },
	{0x6003, 0x02, 0x16af  /* STUE LEILIGHET 1 */ },
	{0x6004, 0x02, 0x16b1  /* STUE LEILIGHET 2 */ },
	{0x6009, 0x02, 0x16bd  /* STUE LEILIGHET 3 */ },
	{0x600a, 0x02, 0x16bf  /* STUE LEILIGHET 4 */ },
	{0x6016, 0x02, 0x16da  /* STUE-SPISEROM */ },
	{0x6018, 0x02, 0x16de  /* TEKN ROM LOFT */ },
	{0x6012, 0x02, 0x16d1  /* VASKEROM */ },
	{0xa001, 0x00, 0x16ad  /* A1 004 */ },
	{0xa002, 0x00, 0x16b4  /* A1 008 */ },
	{0xa003, 0x00, 0x16bb  /* A1 014 */ },
	{0xa004, 0x00, 0x16c2  /* A1 018 */ },
	{0xa005, 0x00, 0x16cd  /* A2 005 */ },
	{0xa006, 0x00, 0x16d8  /* A2 011 */ },
	{0xb001, 0x09, 0x16e1  /* BRANNVESENET */ },
	{0xb004, 0x0a, 0x16e4  /* FEILUTGANG */ },
	{0xb003, 0x00, 0x16e3  /* HOLDEMAGNET */ },
	{0xb002, 0x00, 0x16e2  /* RESERVE-1 */ },
	{0xc801, 0x00, 0x169a  /* ALLE ALARMORGAN */ },
	{0xd004, 0x07, 0x16a8  /* BSB-310-1 */ },
	{0xd001, 0x09, 0x16a0  /* BSL 310 */ },
	{0xd002, 0x02, 0x16a6  /* SLØYFE-A1 */ },
	{0xd003, 0x02, 0x16a7  /* SLØYFE-A2 */ },
	{0xd401, 0xfe, 0x169f  /* BLC_Eq */ },
	{0xd501, 0x00, 0x16a1  /* MainCpu */ },
	{0xd601, 0x00, 0x169c  /* Domain Network */ },
	{0xd701, 0x00, 0x169e  /* BRANNSENTRAL */ },
	{0xd801, 0xfe, 0x16a5  /* Operator Panel Equipment */ },
	{0xd802, 0xfe, 0x16e5  /* REMOTE PILOT */ },
	{0xe001, 0x00, 0x16a2  /* Power */ },
	{0xe101, 0x00, 0x1699  /* KOLHEIVEGEN 10 */ },
	{0xe701, 0xfe, 0x169d  /* Domain Controller */ },
	{0xe801, 0xfe, 0x16ec  /* DZ Controller */ },
	{0xe901, 0xfe, 0x16ed  /* AZ Controller */ },
	{0xea01, 0xfe, 0x16e9  /* FPE Controller */ },
	{0xeb01, 0xfe, 0x16e8  /* FAD Controller */ },
	{0xec01, 0xfe, 0x16ea  /* OP Controller */ },
	{0xee01, 0xfe, 0x16e7  /* Point Controller */ },
	{0xef01, 0xfe, 0x16e6  /* Loop Controller */ },
	{0xf001, 0xfe, 0x16a3  /* BLC Controller */ },
	{0xf601, 0x00, 0x169b  /* Log Controller */ },
	{0xf801, 0xfe, 0x16a4  /* Computer Controller */ },
	{0xfb01, 0xfe, 0x16eb  /* OZ Controller */ } 
};

static UnitIdToSortedTextId_a UnitIdToSortedTextId_OP_EQ_1005 = {
	85, UnitTextsEntry_OP_EQ_1006  
};

static IndexRange_a IndexRange_OP_EQ_1008[34] = {
	{0x0041, 0x0041   },
	{0x0051, 0x0051   },
	{0x0042, 0x0042   },
	{0x0053, 0x0053   },
	{0x0043, 0x0043   },
	{0x0049, 0x0049   },
	{0x0019, 0x0031   },
	{0x004a, 0x004a   },
	{0x0032, 0x0037   },
	{0x004d, 0x004d   },
	{0x0038, 0x003b   },
	{0x004c, 0x004c   },
	{0x003c, 0x003c   },
	{0x004b, 0x004b   },
	{0x003d, 0x0040   },
	{0x0050, 0x0050   },
	{0x0048, 0x0048   },
	{0x0054, 0x0054   },
	{0x0045, 0x0046   },
	{0x004e, 0x004e   },
	{0x0000, 0x0018   },
	{0x004f, 0x004f   },
	{0x0047, 0x0047   },
	{0xffff, 0xffff   },
	{0xffff, 0xffff   },
	{0xffff, 0xffff   },
	{0x0052, 0x0052   },
	{0xffff, 0xffff   },
	{0x0044, 0x0044   },
	{0xffff, 0xffff   },
	{0xffff, 0xffff   },
	{0xffff, 0xffff   },
	{0xffff, 0xffff   },
	{0xffff, 0xffff   } 
};

static UnitIdToSortedTextIdIndex_a UnitIdToSortedTextIdIndex_OP_EQ_1007 = {
	34, IndexRange_OP_EQ_1008  
};
MsgActionMask_a	MsgActionMask_a_AC_501_1 [6] = 
{
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <543> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <649> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <650> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <651> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <652> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <968> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_2 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <654> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <655> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <656> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <657> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <658> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <969> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_3 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <660> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <661> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <662> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <663> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <664> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <970> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_4 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <666> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <667> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <668> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <669> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <670> UnitName <>  EntityName <Msg Action Mask> */,
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <971> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_5 [6] = 
{
			{
				2 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <672> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <673> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <674> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <675> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <676> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <972> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_6 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <678> UnitName <>  EntityName <Msg Action Mask> */,
			{
				2 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <679> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <680> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <681> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <682> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <973> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_7 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <684> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <685> UnitName <>  EntityName <Msg Action Mask> */,
			{
				2 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <686> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <687> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <688> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <974> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_8 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <690> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <691> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <692> UnitName <>  EntityName <Msg Action Mask> */,
			{
				2 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <693> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <694> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <975> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_9 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <696> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <697> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <698> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <699> UnitName <>  EntityName <Msg Action Mask> */,
			{
				2 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <700> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <976> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_10 [6] = 
{
			{
				1 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <962> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <963> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <964> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <965> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <966> UnitName <>  EntityName <Msg Action Mask> */,
			{
				2 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <967> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_11 [6] = 
{
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1325> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1326> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1327> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1328> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1329> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1330> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMask_a	MsgActionMask_a_AC_501_12 [6] = 
{
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1333> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1334> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1335> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1336> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1337> UnitName <>  EntityName <Msg Action Mask> */,
			{
				0 /* char MsgActionMask */
			}/* ElementNo 0 UnitNo <1338> UnitName <>  EntityName <Msg Action Mask> */
};
MsgActionMaskArray_a	MsgActionMaskArray_a_AC_499_1 [12] = 
{
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_1 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <541> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_2 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <641> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_3 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <642> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_4 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <643> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_5 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <644> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_6 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <645> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_7 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <646> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_8 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <647> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_9 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <648> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_10 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <960> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_11 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <1323> UnitName <>  EntityName <Msg Action Mask Array> */,
	{
		6 /* int MsgActionMaskCount */,
		MsgActionMask_a_AC_501_12 /* Ptr to array of type MsgActionMask_a */
	}/* ElementNo 0 UnitNo <1331> UnitName <>  EntityName <Msg Action Mask Array> */
};


MsgActionMasks_a	MsgActionMasks_a_0 = 
{
	12 /* int MsgActionMaskArrayCount */,
	MsgActionMaskArray_a_AC_499_1 /* Ptr to array of type MsgActionMaskArray_a */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_1 [1] = 
{
			{
				11 /* OZ_ALARM_DISABLE */
			}/* ElementNo 0 UnitNo <567> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_2 [5] = 
{
			{
				8 /* OZ_HOLD */
			}/* ElementNo 0 UnitNo <569> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				3 /* OZ_RESET */
			}/* ElementNo 0 UnitNo <701> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				5 /* OZ_TRANSMIT */
			}/* ElementNo 0 UnitNo <702> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				4 /* OZ_REACTIVATE */
			}/* ElementNo 0 UnitNo <978> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				11 /* OZ_ALARM_DISABLE */
			}/* ElementNo 0 UnitNo <1300> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_3 [4] = 
{
			{
				12 /* OZ_INIT */
			}/* ElementNo 0 UnitNo <571> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				24 /* OZ_TRANSMIT_ON_INIT */
			}/* ElementNo 0 UnitNo <703> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				7 /* OZ_TRANSMIT_FS_ON_INIT */
			}/* ElementNo 0 UnitNo <945> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				10 /* OZ_HOLD_ON_INIT */
			}/* ElementNo 0 UnitNo <2288> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_4 [1] = 
{
			{
				1 /* OZ_SILENCE */
			}/* ElementNo 0 UnitNo <573> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_5 [1] = 
{
			{
				2 /* OZ_RESOUND */
			}/* ElementNo 0 UnitNo <575> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_6 [1] = 
{
			{
				0 /* OZ_ACTIVATE_ALARM */
			}/* ElementNo 0 UnitNo <577> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_7 [1] = 
{
			{
				4 /* OZ_REACTIVATE */
			}/* ElementNo 0 UnitNo <579> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_8 [1] = 
{
			{
				16 /* OZ_DISABLE_IMM_ACTIONS */
			}/* ElementNo 0 UnitNo <1413> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_9 [1] = 
{
			{
				15 /* OZ_ENABLE_IMM_ACTIONS */
			}/* ElementNo 0 UnitNo <1415> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_10 [2] = 
{
			{
				17 /* OZ_SET_TIME */
			}/* ElementNo 0 UnitNo <1444> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				18 /* OZ_COMPENSATE_TIME */
			}/* ElementNo 0 UnitNo <1445> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_11 [1] = 
{
			{
				33 /* OZ_START_CMD_SCHEDULER */
			}/* ElementNo 0 UnitNo <1837> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_12 [1] = 
{
			{
				34 /* OZ_STOP_CMD_SCHEDULER */
			}/* ElementNo 0 UnitNo <1839> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_13 [1] = 
{
			{
				19 /* OZ_ACTIVATE_CONTROLS */
			}/* ElementNo 0 UnitNo <2236> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_14 [1] = 
{
			{
				20 /* OZ_DEACTIVATE_CONTROLS */
			}/* ElementNo 0 UnitNo <2240> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_15 [1] = 
{
			{
				21 /* OZ_SET_ACT_PRIORITY */
			}/* ElementNo 0 UnitNo <2242> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_16 [1] = 
{
			{
				37 /* OZ_ENABLE_FPES */
			}/* ElementNo 0 UnitNo <2717> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_17 [1] = 
{
			{
				38 /* OZ_DISABLE_FPES */
			}/* ElementNo 0 UnitNo <2719> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_18 [1] = 
{
			{
				39 /* OZ_GIVE_LOOP_CONTROL_A */
			}/* ElementNo 0 UnitNo <70313> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_19 [2] = 
{
			{
				39 /* OZ_GIVE_LOOP_CONTROL_A */
			}/* ElementNo 0 UnitNo <70317> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				40 /* OZ_TAKE_LOOP_CONTROL_A */
			}/* ElementNo 0 UnitNo <70318> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_20 [2] = 
{
			{
				39 /* OZ_GIVE_LOOP_CONTROL_A */
			}/* ElementNo 0 UnitNo <70320> UnitName <>  EntityName <OZ Cmd Type> */,
			{
				40 /* OZ_TAKE_LOOP_CONTROL_A */
			}/* ElementNo 0 UnitNo <70321> UnitName <>  EntityName <OZ Cmd Type> */
};
OZ_CmdType_a	OZ_CmdType_a_AC_506_21 [1] = 
{
			{
				47 /* OZ_ALLOW_POINTS_A */
			}/* ElementNo 0 UnitNo <70580> UnitName <>  EntityName <OZ Cmd Type> */
};
LegalOZ_CmdTypesEntry_a	LegalOZ_CmdTypesEntry_a_AC_504_1 [21] = 
{
	{
		2 /* ALARM_DISABLE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_1 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <546> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		9 /* RESET_OZ_MCT */,
		5 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_2 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <547> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		6 /* INIT_OZ_MCT */,
		4 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_3 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <548> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		11 /* SILENCE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_4 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <549> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		10 /* RESOUND_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_5 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <550> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		7 /* ACTIVATE_ALARM_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_6 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <551> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		8 /* REACTIVATE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_7 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <552> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		13 /* IMM_ACT_DISABLE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_8 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <1410> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		12 /* IMM_ACT_ENABLE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_9 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <1411> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		32 /* SET_TIME_OZ_MCT */,
		2 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_10 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <1442> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		41 /* START_CMD_SCHEDULER_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_11 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <1834> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		42 /* STOP_CMD_SCHEDULER_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_12 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <1835> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		54 /* ACT_ALL_FPE_TYPE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_13 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <2234> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		55 /* DEACT_ALL_FPE_TYPE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_14 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <2237> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		56 /* SET_ACT_PRIORITY_FPE_TYPE_OZ_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_15 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <2238> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		59 /* ENABLE_FPES_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_16 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <2714> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		60 /* DISABLE_FPES_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_17 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <2715> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		0 /* ACCEPT_FAULT_MCT */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_18 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <70310> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		72 /* TRANSFER_TO_PRIMARY_MCT_OPEQ_A */,
		2 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_19 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <70314> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		73 /* TRANSFER_TO_SECONDARY_MCT_OPEQ_A */,
		2 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_20 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <70315> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */,
	{
		78 /* ALLOW_POINTS_OZ_MCT_OPEQ_A */,
		1 /* int OZ_CmdTypesCount */,
		OZ_CmdType_a_AC_506_21 /* Ptr to array of type OZ_CmdType_a */
	}/* ElementNo 0 UnitNo <70576> UnitName <>  EntityName <Legal OZ Cmd Types Entry> */
};


LegalOZ_CmdTypes_a	LegalOZ_CmdTypes_a_0 = 
{
	21 /* int LegalOZ_CmdTypesCount */,
	LegalOZ_CmdTypesEntry_a_AC_504_1 /* Ptr to array of type LegalOZ_CmdTypesEntry_a */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_1 [4] = 
{
					4 /* REACTIVATE_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1358> UnitName <>  EntityName <Function Button Id> */,
					16 /* SHOW_POINTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1382> UnitName <>  EntityName <Function Button Id> */,
					17 /* SHOW_FADS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1383> UnitName <>  EntityName <Function Button Id> */,
					19 /* SHOW_ALL_POINTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <2842> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_2 [1] = 
{
					10 /* SHOW_FIRE_WARNINGS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1360> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_10 [1] = 
{
					15 /* SHOW_FIRE_INFO_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1777> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonIds_a	FunctionButtonIds_a_AC_512_1 [3] = 
{
			{
				4 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_1 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1351> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_2 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1352> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_10 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1775> UnitName <>  EntityName <Function Button Ids> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_3 [4] = 
{
					20 /* ALLOW_POINTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <70579> UnitName <>  EntityName <Function Button Id> */,
					3 /* ACTIVATE_ALARM_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1363> UnitName <>  EntityName <Function Button Id> */,
					15 /* SHOW_FIRE_INFO_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1538> UnitName <>  EntityName <Function Button Id> */,
					6 /* READ_FORWARD_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1539> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_4 [1] = 
{
					11 /* SHOW_FAULT_WARNINGS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1367> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_11 [1] = 
{
					11 /* SHOW_FAULT_WARNINGS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1780> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonIds_a	FunctionButtonIds_a_AC_512_2 [3] = 
{
			{
				4 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_3 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1354> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_4 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1355> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_11 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1778> UnitName <>  EntityName <Function Button Ids> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_6 [4] = 
{
					0 /* RESOUND_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1388> UnitName <>  EntityName <Function Button Id> */,
					9 /* ACCEPT_FAULT_WARNING_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1389> UnitName <>  EntityName <Function Button Id> */,
					5 /* ENABLE_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1390> UnitName <>  EntityName <Function Button Id> */,
					7 /* READ_BACKWARD_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1540> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_7 [1] = 
{
					12 /* SHOW_DISABLEMENTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1392> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_12 [1] = 
{
					12 /* SHOW_DISABLEMENTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1783> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonIds_a	FunctionButtonIds_a_AC_512_3 [3] = 
{
			{
				4 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_6 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1385> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_7 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1386> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_12 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1781> UnitName <>  EntityName <Function Button Ids> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_8 [5] = 
{
					14 /* SHOW_SUPPRESSED_INFO_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1397> UnitName <>  EntityName <Function Button Id> */,
					1 /* PROLONG_DELAY_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1398> UnitName <>  EntityName <Function Button Id> */,
					2 /* BLOCK_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1399> UnitName <>  EntityName <Function Button Id> */,
					8 /* ACCEPT_FIRE_WARNING_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1400> UnitName <>  EntityName <Function Button Id> */,
					18 /* PRINT_DATA_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1541> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_9 [1] = 
{
					13 /* SHOW_TESTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1402> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonId_a	FunctionButtonId_a_AC_514_13 [1] = 
{
					13 /* SHOW_TESTS_FBI_OPEQ_A *//* ElementNo 27130017 UnitNo <1786> UnitName <>  EntityName <Function Button Id> */
};
FunctionButtonIds_a	FunctionButtonIds_a_AC_512_4 [3] = 
{
			{
				5 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_8 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1394> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_9 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1395> UnitName <>  EntityName <Function Button Ids> */,
			{
				1 /* int FunctionButtonIdCount */,
				FunctionButtonId_a_AC_514_13 /* Ptr to array of type FunctionButtonId_a */
			}/* ElementNo 0 UnitNo <1784> UnitName <>  EntityName <Function Button Ids> */
};
FunctionButton_a	FunctionButton_a_AC_509_1 [4] = 
{
	{
		{	/* Field Display Parameters */
			{	/* Field Location */
				1 /* char CharacterNumber */,
				13 /* char LineNumber */
			},
			{	/* Field Size */
				20 /* char NoOfCharacters */,
				1 /* int NoOfLines */
			}
		},
		{	/* Function Button Ids Pages */
			3 /* int FunctionButtonIdsCount */,
			FunctionButtonIds_a_AC_512_1 /* Ptr to array of type FunctionButtonIds_a */
		}
	}/* ElementNo 0 UnitNo <1340> UnitName <>  EntityName <Function Button> */,
	{
		{	/* Field Display Parameters */
			{	/* Field Location */
				1 /* char CharacterNumber */,
				14 /* char LineNumber */
			},
			{	/* Field Size */
				20 /* char NoOfCharacters */,
				1 /* int NoOfLines */
			}
		},
		{	/* Function Button Ids Pages */
			3 /* int FunctionButtonIdsCount */,
			FunctionButtonIds_a_AC_512_2 /* Ptr to array of type FunctionButtonIds_a */
		}
	}/* ElementNo 0 UnitNo <1345> UnitName <>  EntityName <Function Button> */,
	{
		{	/* Field Display Parameters */
			{	/* Field Location */
				21 /* char CharacterNumber */,
				13 /* char LineNumber */
			},
			{	/* Field Size */
				20 /* char NoOfCharacters */,
				1 /* int NoOfLines */
			}
		},
		{	/* Function Button Ids Pages */
			3 /* int FunctionButtonIdsCount */,
			FunctionButtonIds_a_AC_512_3 /* Ptr to array of type FunctionButtonIds_a */
		}
	}/* ElementNo 0 UnitNo <1371> UnitName <>  EntityName <Function Button> */,
	{
		{	/* Field Display Parameters */
			{	/* Field Location */
				21 /* char CharacterNumber */,
				14 /* char LineNumber */
			},
			{	/* Field Size */
				20 /* char NoOfCharacters */,
				1 /* int NoOfLines */
			}
		},
		{	/* Function Button Ids Pages */
			3 /* int FunctionButtonIdsCount */,
			FunctionButtonIds_a_AC_512_4 /* Ptr to array of type FunctionButtonIds_a */
		}
	}/* ElementNo 0 UnitNo <1376> UnitName <>  EntityName <Function Button> */
};


FunctionButtons_a	FunctionButtons_a_0 = 
{
	4 /* int FunctionButtonCount */,
	FunctionButton_a_AC_509_1 /* Ptr to array of type FunctionButton_a */
};

static UnitPropertiesEntry_a UnitPropertiesEntry_OP_EQ_1010[1] = {
	{ 0xe101 /* KOLHEIVEGEN 10 */,0x05  } 
};

static UnitProperties_a UnitProperties_OP_EQ_1009 = {
	1, UnitPropertiesEntry_OP_EQ_1010  
};

OP_EqSCD_Directory_a OP_EqSCD_Directory_OP_EQ_1002 = {
	&KR100, 
	&OP_WindowsParameters, 
	&OpWindowPriorities_a_AC_492_1, 
	&OpWindowSequence_a_AC_495_1, 
	&OP_EqStatEventGroupsParameters, 
	&OP_EqStatMenuCmds, 
	&OP_EqStatMenuCmdFields, 
	&Op_EqStatMenuInfos, 
	&OP_EqStatMenuInfoFields, 
	&OP_EqStatMenuEntries, 
	&OP_EqStatMenuStatuses, 
	&OP_EqStatMenuWindows, 
	&UnitTexts_OP_EQ_1003, 
	&UnitIdToSortedTextId_OP_EQ_1005, 
	&UnitIdToSortedTextIdIndex_OP_EQ_1007, 
	&MsgActionMasks_a_0, 
	&LegalOZ_CmdTypes_a_0, 
	&FunctionButtons_a_0, 
	&OP_EqStatEnumTypes, 
	&OP_EqStatKR100_StringToId, 
	&UnitProperties_OP_EQ_1009, 
0x00000000, 0x03f01f44, 0xfefefefe  
};


static CompIdUnitId_a CompIdUnitId_OP_EQ_1014[1] = {
	{ 0xec01 /* OP Controller */,0xffff  } 
};

static CompIdUnitId_a CompIdUnitId_OP_EQ_1017[1] = {
	{ 0xf801 /* Computer Controller */,0xffff  } 
};

static ACLIB_Object_a ACLIB_Object_OP_EQ_1012[21] = {
	{/* COMPONENT_PING_CMD_ID */ 0xee8a,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* COMPONENT_START_UP_ACK_ID */ 0xee8d,
	0, NULL, 
	0, NULL  },
	{/* CONFIGURATION_CRC_CHECK_STATUS_ID */ 0xee95,
	1, CompIdUnitId_OP_EQ_1017, 
	0, NULL  },
	{/* OP_EQ_INFO_REQ_ID */ 0xf1c5,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* OP_EQ_RESP_ID */ 0xf1c8,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* OP_EQ_FAULT_ID */ 0xf1c9,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* BUZZER_OFF_ID */ 0xf1e2,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_PASS_WORD_CMD_ID */ 0xf1e5,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* UPDATE_SV_STATUS_ID */ 0xf1e6,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* UPDATE_STATUS_ID */ 0xf1e7,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_DZ_CMD_ID */ 0xf1e8,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_ACCEPT_FAULT_CMD_ID */ 0xf1e9,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_OZ_CMD_ID */ 0xf1ed,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_UNIT_ACT_CMD_ID */ 0xf1f3,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_UNIT_ARM_CMD_ID */ 0xf1f4,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_UNIT_TEST_CMD_ID */ 0xf1f5,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_UNIT_SERVICE_REQ_ID */ 0xf1f6,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_UNIT_INHIBIT_CMD_ID */ 0xf500,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_POINT_CMD_ID */ 0xf503,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_POINT_INFO_REQ_ID */ 0xf504,
	1, CompIdUnitId_OP_EQ_1014, 
	0, NULL  },
	{/* USER_TEXT_RESP */ 0xfd02,
	0, NULL, 
	0, NULL  } 
};

static ComponentAddress_a ComponentAddress_OP_EQ_1013[2] = {
	{ 0xec01 /* OP Controller */,
	{ 0x000e, 0x01   } },
	{ 0xf801 /* Computer Controller */,
	{ 0x0005, 0x01   } } 
};

ACLIB_ObjectDirectory_a ACLIB_ObjectDirectory_OP_EQ_1011 = {
	2, ComponentAddress_OP_EQ_1013, 
	21, ACLIB_Object_OP_EQ_1012, 
0x00000000, 0x03f2b568, 0xfefefefe  
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_11 = {
	"ekOP_EQ_50389_Router"
};

AcFifoBinAddr_a AcFifoBinAddr_a_AC_13_12 = {
	"Router_ekOP_EQ_50389"
};

static AcPortData_a AcPortData_OP_EQ_1035[1] = {
	{0x00000001, 0x0a, 
	{ 0x0007, 0x01   },
	4, &AcFifoBinAddr_a_AC_13_11   } 
};

static AcRouteData_a AcRouteData_OP_EQ_1036[1] = {
	{0x00000001, 0x0a, 
	{ 0x0000, 0x00   },
	4, &AcFifoBinAddr_a_AC_13_12   } 
};

AcBinaryConfigData_a AcBinaryConfigData_OP_EQ_1037 = {
	1, AcPortData_OP_EQ_1035, 
	1, AcRouteData_OP_EQ_1036, 
0x00000000, 0x03f2b6e8, 0xfefefefe  
};

static ComponentDirectory_a ComponentDirectoryOperatorPanelEquipment = {
	0xd801,
	&AttributeDirectory_OP_EQ_1000,
	&OP_EqSCD_Directory_OP_EQ_1002,
	&ACLIB_ObjectDirectory_OP_EQ_1011,
	&AcBinaryConfigData_OP_EQ_1037
};
