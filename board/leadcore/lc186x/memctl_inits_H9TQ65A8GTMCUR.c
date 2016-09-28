/******************************************************************************
*  COPYRIGHT Leadcore Technology Co.,Ltd                                      *
******************************************************************************/
/******************************************************************************
* FileName:    memctl_inits_KMR310001M.c
*
* Version:
*
* Purpose:
*
* Authors:  lengyansong
*
* Notes:
******************************************************************************/
/******************************************************************************
*                      HISTORY
*------------------------------------------------------------------------------
*    when        who        where,what,why
*------------------------------------------------------------------------------
* 2015-01-14    lengyansong     Create.
*
*
******************************************************************************/

#include "memctl_multi_ddr.h"

#if CONFIG_HYNIX_H9TQ65A8GTMCUR

#if (CONFIG_DDR_BUS_CLK == 533000000)

#include "memctl_inits_H9TQ65A8GTMCUR_533.h"
#define DDR_NAME_HYNIX "hynix H9TQ65A8GTMCUR 533M"
#define DDR_NAME_HYNIX2 "hynix H9TQ65A8GTMCUR 533M new"

#elif (CONFIG_DDR_BUS_CLK == 331500000)

#include "memctl_inits_H9TQ65A8GTMCUR_332.h"
#define DDR_NAME_HYNIX "hynix H9TQ65A8GTMCUR 332M"
#define DDR_NAME_HYNIX2 "hynix H9TQ65A8GTMCUR 332M new"

#endif

static struct memctl_data memctl_init_datas_H9TQ65A8GTMCUR[] = {
	{DENALI_CTL_00,  DENALI_CTL_00_DATA},
	{DENALI_CTL_01,  DENALI_CTL_01_DATA},
	{DENALI_CTL_02,  DENALI_CTL_02_DATA},
	{DENALI_CTL_03,  DENALI_CTL_03_DATA},
	{DENALI_CTL_04,  DENALI_CTL_04_DATA},
	{DENALI_CTL_05,  DENALI_CTL_05_DATA},
	{DENALI_CTL_06,  DENALI_CTL_06_DATA},
	{DENALI_CTL_07,  DENALI_CTL_07_DATA},
	{DENALI_CTL_08,  DENALI_CTL_08_DATA},
	{DENALI_CTL_09,  DENALI_CTL_09_DATA},
	{DENALI_CTL_10,  DENALI_CTL_10_DATA},
	{DENALI_CTL_11,  DENALI_CTL_11_DATA},
	{DENALI_CTL_12,  DENALI_CTL_12_DATA},
	{DENALI_CTL_13,  DENALI_CTL_13_DATA},
	{DENALI_CTL_14,  DENALI_CTL_14_DATA},
	{DENALI_CTL_15,  DENALI_CTL_15_DATA},
	{DENALI_CTL_16,  DENALI_CTL_16_DATA},
	{DENALI_CTL_17,  DENALI_CTL_17_DATA},
	{DENALI_CTL_18,  DENALI_CTL_18_DATA},
	{DENALI_CTL_19,  DENALI_CTL_19_DATA},
	{DENALI_CTL_20,  DENALI_CTL_20_DATA},
	{DENALI_CTL_21,  DENALI_CTL_21_DATA},
	{DENALI_CTL_22,  DENALI_CTL_22_DATA},
	{DENALI_CTL_23,  DENALI_CTL_23_DATA},
	{DENALI_CTL_24,  DENALI_CTL_24_DATA},
	{DENALI_CTL_25,  DENALI_CTL_25_DATA},
	{DENALI_CTL_26,  DENALI_CTL_26_DATA},
	{DENALI_CTL_27,  DENALI_CTL_27_DATA},
	{DENALI_CTL_28,  DENALI_CTL_28_DATA},
	{DENALI_CTL_29,  DENALI_CTL_29_DATA},
	{DENALI_CTL_30,  DENALI_CTL_30_DATA},
	{DENALI_CTL_31,  DENALI_CTL_31_DATA},
	{DENALI_CTL_32,  DENALI_CTL_32_DATA},
	{DENALI_CTL_33,  DENALI_CTL_33_DATA},
	{DENALI_CTL_34,  DENALI_CTL_34_DATA},
	{DENALI_CTL_35,  DENALI_CTL_35_DATA},
	{DENALI_CTL_36,  DENALI_CTL_36_DATA},
	{DENALI_CTL_37,  DENALI_CTL_37_DATA},
	{DENALI_CTL_38,  DENALI_CTL_38_DATA},
	{DENALI_CTL_39,  DENALI_CTL_39_DATA},
	{DENALI_CTL_40,  DENALI_CTL_40_DATA},
	{DENALI_CTL_41,  DENALI_CTL_41_DATA},
	{DENALI_CTL_42,  DENALI_CTL_42_DATA},
	{DENALI_CTL_43,  DENALI_CTL_43_DATA},
	{DENALI_CTL_44,  DENALI_CTL_44_DATA},
	{DENALI_CTL_45,  DENALI_CTL_45_DATA},
	{DENALI_CTL_46,  DENALI_CTL_46_DATA},
	{DENALI_CTL_47,  DENALI_CTL_47_DATA},
	{DENALI_CTL_48,  DENALI_CTL_48_DATA},
	{DENALI_CTL_49,  DENALI_CTL_49_DATA},
	{DENALI_CTL_50,  DENALI_CTL_50_DATA},
	{DENALI_CTL_51,  DENALI_CTL_51_DATA},
	{DENALI_CTL_52,  DENALI_CTL_52_DATA},
	{DENALI_CTL_53,  DENALI_CTL_53_DATA},
	{DENALI_CTL_54,  DENALI_CTL_54_DATA},
	{DENALI_CTL_55,  DENALI_CTL_55_DATA},
	{DENALI_CTL_56,  DENALI_CTL_56_DATA},
	{DENALI_CTL_57,  DENALI_CTL_57_DATA},
	{DENALI_CTL_58,  DENALI_CTL_58_DATA},
	{DENALI_CTL_59,  DENALI_CTL_59_DATA},
	{DENALI_CTL_60,  DENALI_CTL_60_DATA},
	{DENALI_CTL_61,  DENALI_CTL_61_DATA},
	{DENALI_CTL_62,  DENALI_CTL_62_DATA},
	{DENALI_CTL_63,  DENALI_CTL_63_DATA},
	{DENALI_CTL_64,  DENALI_CTL_64_DATA},
	{DENALI_CTL_65,  DENALI_CTL_65_DATA},
	{DENALI_CTL_66,  DENALI_CTL_66_DATA},
	{DENALI_CTL_67,  DENALI_CTL_67_DATA},
	{DENALI_CTL_68,  DENALI_CTL_68_DATA},
	{DENALI_CTL_69,  DENALI_CTL_69_DATA},
	{DENALI_CTL_70,  DENALI_CTL_70_DATA},
	{DENALI_CTL_71,  DENALI_CTL_71_DATA},
	{DENALI_CTL_72,  DENALI_CTL_72_DATA},
	{DENALI_CTL_73,  DENALI_CTL_73_DATA},
	{DENALI_CTL_74,  DENALI_CTL_74_DATA},
	{DENALI_CTL_75,  DENALI_CTL_75_DATA},
	{DENALI_CTL_76,  DENALI_CTL_76_DATA},
	{DENALI_CTL_77,  DENALI_CTL_77_DATA},
	{DENALI_CTL_78,  DENALI_CTL_78_DATA},
	{DENALI_CTL_79,  DENALI_CTL_79_DATA},
	{DENALI_CTL_80,  DENALI_CTL_80_DATA},
	{DENALI_CTL_81,  DENALI_CTL_81_DATA},
	{DENALI_CTL_82,  DENALI_CTL_82_DATA},
	{DENALI_CTL_83,  DENALI_CTL_83_DATA},
	{DENALI_CTL_84,  DENALI_CTL_84_DATA},
	{DENALI_CTL_85,  DENALI_CTL_85_DATA},
	{DENALI_CTL_86,  DENALI_CTL_86_DATA},
	{DENALI_CTL_87,  DENALI_CTL_87_DATA},
	{DENALI_CTL_88,  DENALI_CTL_88_DATA},
	{DENALI_CTL_89,  DENALI_CTL_89_DATA},
	{DENALI_CTL_90,  DENALI_CTL_90_DATA},
	{DENALI_CTL_91,  DENALI_CTL_91_DATA},
	{DENALI_CTL_92,  DENALI_CTL_92_DATA},
	{DENALI_CTL_93,  DENALI_CTL_93_DATA},
	{DENALI_CTL_94,  DENALI_CTL_94_DATA},
	{DENALI_CTL_95,  DENALI_CTL_95_DATA},
	{DENALI_CTL_96,  DENALI_CTL_96_DATA},
	{DENALI_CTL_97,  DENALI_CTL_97_DATA},
	{DENALI_CTL_98,  DENALI_CTL_98_DATA},
	{DENALI_CTL_99,  DENALI_CTL_99_DATA},
	{DENALI_CTL_100, DENALI_CTL_100_DATA},
	{DENALI_CTL_101, DENALI_CTL_101_DATA},
	{DENALI_CTL_102, DENALI_CTL_102_DATA},
	{DENALI_CTL_103, DENALI_CTL_103_DATA},
	{DENALI_CTL_104, DENALI_CTL_104_DATA},
	{DENALI_CTL_105, DENALI_CTL_105_DATA},
	{DENALI_CTL_106, DENALI_CTL_106_DATA},
	{DENALI_CTL_107, DENALI_CTL_107_DATA},
	{DENALI_CTL_108, DENALI_CTL_108_DATA},
	{DENALI_CTL_109, DENALI_CTL_109_DATA},
	{DENALI_CTL_110, DENALI_CTL_110_DATA},
	{DENALI_CTL_111, DENALI_CTL_111_DATA},
	{DENALI_CTL_112, DENALI_CTL_112_DATA},
	{DENALI_CTL_113, DENALI_CTL_113_DATA},
	{DENALI_CTL_114, DENALI_CTL_114_DATA},
	{DENALI_CTL_115, DENALI_CTL_115_DATA},
	{DENALI_CTL_116, DENALI_CTL_116_DATA},
	{DENALI_CTL_117, DENALI_CTL_117_DATA},
	{DENALI_CTL_118, DENALI_CTL_118_DATA},
	{DENALI_CTL_119, DENALI_CTL_119_DATA},
	{DENALI_CTL_120, DENALI_CTL_120_DATA},
	{DENALI_CTL_121, DENALI_CTL_121_DATA},
	{DENALI_CTL_122, DENALI_CTL_122_DATA},
	{DENALI_CTL_123, DENALI_CTL_123_DATA},
	{DENALI_CTL_124, DENALI_CTL_124_DATA},
	{DENALI_CTL_125, DENALI_CTL_125_DATA},
	{DENALI_CTL_126, DENALI_CTL_126_DATA},
	{DENALI_CTL_127, DENALI_CTL_127_DATA},
	{DENALI_CTL_128, DENALI_CTL_128_DATA},
	{DENALI_CTL_129, DENALI_CTL_129_DATA},
	{DENALI_CTL_130, DENALI_CTL_130_DATA},
	{DENALI_CTL_131, DENALI_CTL_131_DATA},
	{DENALI_CTL_132, DENALI_CTL_132_DATA},
	{DENALI_CTL_133, DENALI_CTL_133_DATA},
	{DENALI_CTL_134, DENALI_CTL_134_DATA},
	{DENALI_CTL_135, DENALI_CTL_135_DATA},
	{DENALI_CTL_136, DENALI_CTL_136_DATA},
	{DENALI_CTL_137, DENALI_CTL_137_DATA},
	{DENALI_CTL_138, DENALI_CTL_138_DATA},
	{DENALI_CTL_139, DENALI_CTL_139_DATA},
	{DENALI_CTL_140, DENALI_CTL_140_DATA},
	{DENALI_CTL_141, DENALI_CTL_141_DATA},
	{DENALI_CTL_142, DENALI_CTL_142_DATA},
	{DENALI_CTL_143, DENALI_CTL_143_DATA},
	{DENALI_CTL_144, DENALI_CTL_144_DATA},
	{DENALI_CTL_145, DENALI_CTL_145_DATA},
	{DENALI_CTL_146, DENALI_CTL_146_DATA},
	{DENALI_CTL_147, DENALI_CTL_147_DATA},
	{DENALI_CTL_148, DENALI_CTL_148_DATA},
	{DENALI_CTL_149, DENALI_CTL_149_DATA},
	{DENALI_CTL_150, DENALI_CTL_150_DATA},
	{DENALI_CTL_151, DENALI_CTL_151_DATA},
	{DENALI_CTL_152, DENALI_CTL_152_DATA},
	{DENALI_CTL_153, DENALI_CTL_153_DATA},
	{DENALI_CTL_154, DENALI_CTL_154_DATA},
	{DENALI_CTL_155, DENALI_CTL_155_DATA},
	{DENALI_CTL_156, DENALI_CTL_156_DATA},
	{DENALI_CTL_157, DENALI_CTL_157_DATA},
	{DENALI_CTL_158, DENALI_CTL_158_DATA},
	{DENALI_CTL_159, DENALI_CTL_159_DATA},
	{DENALI_CTL_160, DENALI_CTL_160_DATA},
	{DENALI_CTL_161, DENALI_CTL_161_DATA},
	{DENALI_CTL_162, DENALI_CTL_162_DATA},
	{DENALI_CTL_163, DENALI_CTL_163_DATA},
	{DENALI_CTL_164, DENALI_CTL_164_DATA},
	{DENALI_CTL_165, DENALI_CTL_165_DATA},
	{DENALI_CTL_166, DENALI_CTL_166_DATA},
	{DENALI_CTL_167, DENALI_CTL_167_DATA},
	{DENALI_CTL_168, DENALI_CTL_168_DATA},
	{DENALI_CTL_169, DENALI_CTL_169_DATA},
	{DENALI_PHY_160, DENALI_PHY_160_DATA},
	{DENALI_PHY_161, DENALI_PHY_161_DATA},
	{DENALI_PHY_162, DENALI_PHY_162_DATA},
	{DENALI_PHY_163, DENALI_PHY_163_DATA},
	{DENALI_PHY_164, DENALI_PHY_164_DATA},
	{DENALI_PHY_165, DENALI_PHY_165_DATA},
	{DENALI_PHY_166, DENALI_PHY_166_DATA},
	{DENALI_PHY_167, DENALI_PHY_167_DATA},
	{DENALI_PHY_169, DENALI_PHY_169_DATA},
	{DENALI_PHY_170, DENALI_PHY_170_DATA},
	{DENALI_PHY_171, DENALI_PHY_171_DATA},
	{DENALI_PHY_172, DENALI_PHY_172_DATA},
	{DENALI_PHY_173, DENALI_PHY_173_DATA},
	{DENALI_PHY_174, DENALI_PHY_174_DATA},
	{DENALI_PHY_175, DENALI_PHY_175_DATA},
	{DENALI_PHY_176, DENALI_PHY_176_DATA},
	{DENALI_PHY_177, DENALI_PHY_177_DATA},
	{DENALI_PHY_178, DENALI_PHY_178_DATA},
	{DENALI_PHY_179, DENALI_PHY_179_DATA},
	{DENALI_PHY_00,  DENALI_PHY_00_DATA},
	{DENALI_PHY_01,  DENALI_PHY_01_DATA},
	{DENALI_PHY_02,  DENALI_PHY_02_DATA},
	{DENALI_PHY_03,  DENALI_PHY_03_DATA},
	{DENALI_PHY_04,  DENALI_PHY_04_DATA},
	{DENALI_PHY_05,  DENALI_PHY_05_DATA},
	{DENALI_PHY_06,  DENALI_PHY_06_DATA},
	{DENALI_PHY_07,  DENALI_PHY_07_DATA},
	{DENALI_PHY_08,  DENALI_PHY_08_DATA},
	{DENALI_PHY_09,  DENALI_PHY_09_DATA},
	{DENALI_PHY_10,  DENALI_PHY_10_DATA},
	{DENALI_PHY_11,  DENALI_PHY_11_DATA},
	{DENALI_PHY_12,  DENALI_PHY_12_DATA},
	{DENALI_PHY_13,  DENALI_PHY_13_DATA},
	{DENALI_PHY_18,  DENALI_PHY_18_DATA},
	{DENALI_PHY_19,  DENALI_PHY_19_DATA},
	{DENALI_PHY_20,  DENALI_PHY_20_DATA},
	{DENALI_PHY_23,  DENALI_PHY_23_DATA},
	{DENALI_PHY_24,  DENALI_PHY_24_DATA},
	{DENALI_PHY_32,  DENALI_PHY_32_DATA},
	{DENALI_PHY_33,  DENALI_PHY_33_DATA},
	{DENALI_PHY_34,  DENALI_PHY_34_DATA},
	{DENALI_PHY_35,  DENALI_PHY_35_DATA},
	{DENALI_PHY_36,  DENALI_PHY_36_DATA},
	{DENALI_PHY_37,  DENALI_PHY_37_DATA},
	{DENALI_PHY_38,  DENALI_PHY_38_DATA},
	{DENALI_PHY_39,  DENALI_PHY_39_DATA},
	{DENALI_PHY_40,  DENALI_PHY_40_DATA},
	{DENALI_PHY_41,  DENALI_PHY_41_DATA},
	{DENALI_PHY_42,  DENALI_PHY_42_DATA},
	{DENALI_PHY_43,  DENALI_PHY_43_DATA},
	{DENALI_PHY_44,  DENALI_PHY_44_DATA},
	{DENALI_PHY_45,  DENALI_PHY_45_DATA},
	{DENALI_PHY_50,  DENALI_PHY_50_DATA},
	{DENALI_PHY_51,  DENALI_PHY_51_DATA},
	{DENALI_PHY_52,  DENALI_PHY_52_DATA},
	{DENALI_PHY_55,  DENALI_PHY_55_DATA},
	{DENALI_PHY_56,  DENALI_PHY_56_DATA},
	{DENALI_PHY_64,  DENALI_PHY_64_DATA},
	{DENALI_PHY_65,  DENALI_PHY_65_DATA},
	{DENALI_PHY_66,  DENALI_PHY_66_DATA},
	{DENALI_PHY_67,  DENALI_PHY_67_DATA},
	{DENALI_PHY_68,  DENALI_PHY_68_DATA},
	{DENALI_PHY_69,  DENALI_PHY_69_DATA},
	{DENALI_PHY_70,  DENALI_PHY_70_DATA},
	{DENALI_PHY_71,  DENALI_PHY_71_DATA},
	{DENALI_PHY_72,  DENALI_PHY_72_DATA},
	{DENALI_PHY_73,  DENALI_PHY_73_DATA},
	{DENALI_PHY_74,  DENALI_PHY_74_DATA},
	{DENALI_PHY_75,  DENALI_PHY_75_DATA},
	{DENALI_PHY_76,  DENALI_PHY_76_DATA},
	{DENALI_PHY_77,  DENALI_PHY_77_DATA},
	{DENALI_PHY_82,  DENALI_PHY_82_DATA},
	{DENALI_PHY_83,  DENALI_PHY_83_DATA},
	{DENALI_PHY_84,  DENALI_PHY_84_DATA},
	{DENALI_PHY_87,  DENALI_PHY_87_DATA},
	{DENALI_PHY_88,  DENALI_PHY_88_DATA},
	{DENALI_PHY_96,  DENALI_PHY_96_DATA},
	{DENALI_PHY_97,  DENALI_PHY_97_DATA},
	{DENALI_PHY_98,  DENALI_PHY_98_DATA},
	{DENALI_PHY_99,  DENALI_PHY_99_DATA},
	{DENALI_PHY_100, DENALI_PHY_100_DATA},
	{DENALI_PHY_101, DENALI_PHY_101_DATA},
	{DENALI_PHY_102, DENALI_PHY_102_DATA},
	{DENALI_PHY_103, DENALI_PHY_103_DATA},
	{DENALI_PHY_104, DENALI_PHY_104_DATA},
	{DENALI_PHY_105, DENALI_PHY_105_DATA},
	{DENALI_PHY_106, DENALI_PHY_106_DATA},
	{DENALI_PHY_107, DENALI_PHY_107_DATA},
	{DENALI_PHY_108, DENALI_PHY_108_DATA},
	{DENALI_PHY_109, DENALI_PHY_109_DATA},
	{DENALI_PHY_114, DENALI_PHY_114_DATA},
	{DENALI_PHY_115, DENALI_PHY_115_DATA},
	{DENALI_PHY_116, DENALI_PHY_116_DATA},
	{DENALI_PHY_119, DENALI_PHY_119_DATA},
	{DENALI_PHY_120, DENALI_PHY_120_DATA},
	{DENALI_PHY_128, DENALI_PHY_128_DATA},
	{DENALI_PHY_129, DENALI_PHY_129_DATA},
	{DENALI_PHY_130, DENALI_PHY_130_DATA},
	{DENALI_PHY_131, DENALI_PHY_131_DATA},
	{DENALI_PHY_132, DENALI_PHY_132_DATA},
	{DENALI_PHY_133, DENALI_PHY_133_DATA},
	{DENALI_PHY_134, DENALI_PHY_134_DATA},
	{DENALI_PHY_135, DENALI_PHY_135_DATA},
	{DENALI_PHY_136, DENALI_PHY_136_DATA},
	{DENALI_PHY_137, DENALI_PHY_137_DATA},
	{DENALI_PHY_138, DENALI_PHY_138_DATA},
	{DENALI_PHY_139, DENALI_PHY_139_DATA},
	{DENALI_PHY_140, DENALI_PHY_140_DATA},
	{DENALI_PHY_141, DENALI_PHY_141_DATA},
	{DENALI_PHY_146, DENALI_PHY_146_DATA},
	{DENALI_PHY_147, DENALI_PHY_147_DATA},
	{DENALI_PHY_148, DENALI_PHY_148_DATA},
	{DENALI_PHY_151, DENALI_PHY_151_DATA},
	{DENALI_PHY_152, DENALI_PHY_152_DATA},
};

struct memctl_multi_ddr_struct memctl_multi_data_H9TQ65A8GTMCUR=
{
	DDR_NAME_HYNIX,
	0x90014a48,
	0x38473264,
	memctl_init_datas_H9TQ65A8GTMCUR,
	sizeof(memctl_init_datas_H9TQ65A8GTMCUR), //hynix
	0x40000000,
	0x00000000,
	0x00000000,
	0x00000000
};

struct memctl_multi_ddr_struct memctl_multi_data_H9TQ65A8GTMCUR2=
{
	DDR_NAME_HYNIX2,
	0x90014a48,
	0x38473165,
	memctl_init_datas_H9TQ65A8GTMCUR,
	sizeof(memctl_init_datas_H9TQ65A8GTMCUR), //hynix
	0x40000000,
	0x00000000,
	0x00000000,
	0x00000000
};
#endif
