/* This file was generated automatically by the Snowball to ISO C compiler */
/* http://snowballstem.org/ */

#include "../runtime/header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int arabic_UTF_8_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_Checks2(struct SN_env * z);
static int r_Checks1(struct SN_env * z);
static int r_Normalize_pre(struct SN_env * z);
static int r_Normalize_post(struct SN_env * z);
static int r_Suffix_Verb_Step2c(struct SN_env * z);
static int r_Suffix_Verb_Step2b(struct SN_env * z);
static int r_Suffix_Verb_Step2a(struct SN_env * z);
static int r_Suffix_Verb_Step1(struct SN_env * z);
static int r_Suffix_Noun_Step3(struct SN_env * z);
static int r_Suffix_Noun_Step2c2(struct SN_env * z);
static int r_Suffix_Noun_Step2c1(struct SN_env * z);
static int r_Suffix_Noun_Step2b(struct SN_env * z);
static int r_Suffix_Noun_Step2a(struct SN_env * z);
static int r_Suffix_Noun_Step1b(struct SN_env * z);
static int r_Suffix_Noun_Step1a(struct SN_env * z);
static int r_Suffix_All_alef_maqsura(struct SN_env * z);
static int r_Prefix_Step4_Verb(struct SN_env * z);
static int r_Prefix_Step3_Verb(struct SN_env * z);
static int r_Prefix_Step3b_Noun(struct SN_env * z);
static int r_Prefix_Step3a_Noun(struct SN_env * z);
static int r_Prefix_Step2b(struct SN_env * z);
static int r_Prefix_Step2a(struct SN_env * z);
static int r_Prefix_Step1(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * arabic_UTF_8_create_env(void);
extern void arabic_UTF_8_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[1] = { '!' };
static const symbol s_0_1[1] = { '"' };
static const symbol s_0_2[1] = { '%' };
static const symbol s_0_3[1] = { '*' };
static const symbol s_0_4[1] = { ',' };
static const symbol s_0_5[1] = { '.' };
static const symbol s_0_6[1] = { '/' };
static const symbol s_0_7[1] = { ':' };
static const symbol s_0_8[1] = { ';' };
static const symbol s_0_9[1] = { '?' };
static const symbol s_0_10[1] = { '\\' };
static const symbol s_0_11[2] = { 0xD8, 0x8C };
static const symbol s_0_12[2] = { 0xD8, 0x9B };
static const symbol s_0_13[2] = { 0xD8, 0x9F };
static const symbol s_0_14[2] = { 0xD9, 0x80 };
static const symbol s_0_15[2] = { 0xD9, 0x8B };
static const symbol s_0_16[2] = { 0xD9, 0x8C };
static const symbol s_0_17[2] = { 0xD9, 0x8D };
static const symbol s_0_18[2] = { 0xD9, 0x8E };
static const symbol s_0_19[2] = { 0xD9, 0x8F };
static const symbol s_0_20[2] = { 0xD9, 0x90 };
static const symbol s_0_21[2] = { 0xD9, 0x91 };
static const symbol s_0_22[2] = { 0xD9, 0x92 };
static const symbol s_0_23[2] = { 0xD9, 0xA0 };
static const symbol s_0_24[2] = { 0xD9, 0xA1 };
static const symbol s_0_25[2] = { 0xD9, 0xA2 };
static const symbol s_0_26[2] = { 0xD9, 0xA3 };
static const symbol s_0_27[2] = { 0xD9, 0xA4 };
static const symbol s_0_28[2] = { 0xD9, 0xA5 };
static const symbol s_0_29[2] = { 0xD9, 0xA6 };
static const symbol s_0_30[2] = { 0xD9, 0xA7 };
static const symbol s_0_31[2] = { 0xD9, 0xA8 };
static const symbol s_0_32[2] = { 0xD9, 0xA9 };
static const symbol s_0_33[2] = { 0xD9, 0xAA };
static const symbol s_0_34[2] = { 0xD9, 0xAB };
static const symbol s_0_35[2] = { 0xD9, 0xAC };
static const symbol s_0_36[3] = { 0xEF, 0xBA, 0x80 };
static const symbol s_0_37[3] = { 0xEF, 0xBA, 0x81 };
static const symbol s_0_38[3] = { 0xEF, 0xBA, 0x82 };
static const symbol s_0_39[3] = { 0xEF, 0xBA, 0x83 };
static const symbol s_0_40[3] = { 0xEF, 0xBA, 0x84 };
static const symbol s_0_41[3] = { 0xEF, 0xBA, 0x85 };
static const symbol s_0_42[3] = { 0xEF, 0xBA, 0x86 };
static const symbol s_0_43[3] = { 0xEF, 0xBA, 0x87 };
static const symbol s_0_44[3] = { 0xEF, 0xBA, 0x88 };
static const symbol s_0_45[3] = { 0xEF, 0xBA, 0x89 };
static const symbol s_0_46[3] = { 0xEF, 0xBA, 0x8A };
static const symbol s_0_47[3] = { 0xEF, 0xBA, 0x8B };
static const symbol s_0_48[3] = { 0xEF, 0xBA, 0x8C };
static const symbol s_0_49[3] = { 0xEF, 0xBA, 0x8D };
static const symbol s_0_50[3] = { 0xEF, 0xBA, 0x8E };
static const symbol s_0_51[3] = { 0xEF, 0xBA, 0x8F };
static const symbol s_0_52[3] = { 0xEF, 0xBA, 0x90 };
static const symbol s_0_53[3] = { 0xEF, 0xBA, 0x91 };
static const symbol s_0_54[3] = { 0xEF, 0xBA, 0x92 };
static const symbol s_0_55[3] = { 0xEF, 0xBA, 0x93 };
static const symbol s_0_56[3] = { 0xEF, 0xBA, 0x94 };
static const symbol s_0_57[3] = { 0xEF, 0xBA, 0x95 };
static const symbol s_0_58[3] = { 0xEF, 0xBA, 0x96 };
static const symbol s_0_59[3] = { 0xEF, 0xBA, 0x97 };
static const symbol s_0_60[3] = { 0xEF, 0xBA, 0x98 };
static const symbol s_0_61[3] = { 0xEF, 0xBA, 0x99 };
static const symbol s_0_62[3] = { 0xEF, 0xBA, 0x9A };
static const symbol s_0_63[3] = { 0xEF, 0xBA, 0x9B };
static const symbol s_0_64[3] = { 0xEF, 0xBA, 0x9C };
static const symbol s_0_65[3] = { 0xEF, 0xBA, 0x9D };
static const symbol s_0_66[3] = { 0xEF, 0xBA, 0x9E };
static const symbol s_0_67[3] = { 0xEF, 0xBA, 0x9F };
static const symbol s_0_68[3] = { 0xEF, 0xBA, 0xA0 };
static const symbol s_0_69[3] = { 0xEF, 0xBA, 0xA1 };
static const symbol s_0_70[3] = { 0xEF, 0xBA, 0xA2 };
static const symbol s_0_71[3] = { 0xEF, 0xBA, 0xA3 };
static const symbol s_0_72[3] = { 0xEF, 0xBA, 0xA4 };
static const symbol s_0_73[3] = { 0xEF, 0xBA, 0xA5 };
static const symbol s_0_74[3] = { 0xEF, 0xBA, 0xA6 };
static const symbol s_0_75[3] = { 0xEF, 0xBA, 0xA7 };
static const symbol s_0_76[3] = { 0xEF, 0xBA, 0xA8 };
static const symbol s_0_77[3] = { 0xEF, 0xBA, 0xA9 };
static const symbol s_0_78[3] = { 0xEF, 0xBA, 0xAA };
static const symbol s_0_79[3] = { 0xEF, 0xBA, 0xAB };
static const symbol s_0_80[3] = { 0xEF, 0xBA, 0xAC };
static const symbol s_0_81[3] = { 0xEF, 0xBA, 0xAD };
static const symbol s_0_82[3] = { 0xEF, 0xBA, 0xAE };
static const symbol s_0_83[3] = { 0xEF, 0xBA, 0xAF };
static const symbol s_0_84[3] = { 0xEF, 0xBA, 0xB0 };
static const symbol s_0_85[3] = { 0xEF, 0xBA, 0xB1 };
static const symbol s_0_86[3] = { 0xEF, 0xBA, 0xB2 };
static const symbol s_0_87[3] = { 0xEF, 0xBA, 0xB3 };
static const symbol s_0_88[3] = { 0xEF, 0xBA, 0xB4 };
static const symbol s_0_89[3] = { 0xEF, 0xBA, 0xB5 };
static const symbol s_0_90[3] = { 0xEF, 0xBA, 0xB6 };
static const symbol s_0_91[3] = { 0xEF, 0xBA, 0xB7 };
static const symbol s_0_92[3] = { 0xEF, 0xBA, 0xB8 };
static const symbol s_0_93[3] = { 0xEF, 0xBA, 0xB9 };
static const symbol s_0_94[3] = { 0xEF, 0xBA, 0xBA };
static const symbol s_0_95[3] = { 0xEF, 0xBA, 0xBB };
static const symbol s_0_96[3] = { 0xEF, 0xBA, 0xBC };
static const symbol s_0_97[3] = { 0xEF, 0xBA, 0xBD };
static const symbol s_0_98[3] = { 0xEF, 0xBA, 0xBE };
static const symbol s_0_99[3] = { 0xEF, 0xBA, 0xBF };
static const symbol s_0_100[3] = { 0xEF, 0xBB, 0x80 };
static const symbol s_0_101[3] = { 0xEF, 0xBB, 0x81 };
static const symbol s_0_102[3] = { 0xEF, 0xBB, 0x82 };
static const symbol s_0_103[3] = { 0xEF, 0xBB, 0x83 };
static const symbol s_0_104[3] = { 0xEF, 0xBB, 0x84 };
static const symbol s_0_105[3] = { 0xEF, 0xBB, 0x85 };
static const symbol s_0_106[3] = { 0xEF, 0xBB, 0x86 };
static const symbol s_0_107[3] = { 0xEF, 0xBB, 0x87 };
static const symbol s_0_108[3] = { 0xEF, 0xBB, 0x88 };
static const symbol s_0_109[3] = { 0xEF, 0xBB, 0x89 };
static const symbol s_0_110[3] = { 0xEF, 0xBB, 0x8A };
static const symbol s_0_111[3] = { 0xEF, 0xBB, 0x8B };
static const symbol s_0_112[3] = { 0xEF, 0xBB, 0x8C };
static const symbol s_0_113[3] = { 0xEF, 0xBB, 0x8D };
static const symbol s_0_114[3] = { 0xEF, 0xBB, 0x8E };
static const symbol s_0_115[3] = { 0xEF, 0xBB, 0x8F };
static const symbol s_0_116[3] = { 0xEF, 0xBB, 0x90 };
static const symbol s_0_117[3] = { 0xEF, 0xBB, 0x91 };
static const symbol s_0_118[3] = { 0xEF, 0xBB, 0x92 };
static const symbol s_0_119[3] = { 0xEF, 0xBB, 0x93 };
static const symbol s_0_120[3] = { 0xEF, 0xBB, 0x94 };
static const symbol s_0_121[3] = { 0xEF, 0xBB, 0x95 };
static const symbol s_0_122[3] = { 0xEF, 0xBB, 0x96 };
static const symbol s_0_123[3] = { 0xEF, 0xBB, 0x97 };
static const symbol s_0_124[3] = { 0xEF, 0xBB, 0x98 };
static const symbol s_0_125[3] = { 0xEF, 0xBB, 0x99 };
static const symbol s_0_126[3] = { 0xEF, 0xBB, 0x9A };
static const symbol s_0_127[3] = { 0xEF, 0xBB, 0x9B };
static const symbol s_0_128[3] = { 0xEF, 0xBB, 0x9C };
static const symbol s_0_129[3] = { 0xEF, 0xBB, 0x9D };
static const symbol s_0_130[3] = { 0xEF, 0xBB, 0x9E };
static const symbol s_0_131[3] = { 0xEF, 0xBB, 0x9F };
static const symbol s_0_132[3] = { 0xEF, 0xBB, 0xA0 };
static const symbol s_0_133[3] = { 0xEF, 0xBB, 0xA1 };
static const symbol s_0_134[3] = { 0xEF, 0xBB, 0xA2 };
static const symbol s_0_135[3] = { 0xEF, 0xBB, 0xA3 };
static const symbol s_0_136[3] = { 0xEF, 0xBB, 0xA4 };
static const symbol s_0_137[3] = { 0xEF, 0xBB, 0xA5 };
static const symbol s_0_138[3] = { 0xEF, 0xBB, 0xA6 };
static const symbol s_0_139[3] = { 0xEF, 0xBB, 0xA7 };
static const symbol s_0_140[3] = { 0xEF, 0xBB, 0xA8 };
static const symbol s_0_141[3] = { 0xEF, 0xBB, 0xA9 };
static const symbol s_0_142[3] = { 0xEF, 0xBB, 0xAA };
static const symbol s_0_143[3] = { 0xEF, 0xBB, 0xAB };
static const symbol s_0_144[3] = { 0xEF, 0xBB, 0xAC };
static const symbol s_0_145[3] = { 0xEF, 0xBB, 0xAD };
static const symbol s_0_146[3] = { 0xEF, 0xBB, 0xAE };
static const symbol s_0_147[3] = { 0xEF, 0xBB, 0xAF };
static const symbol s_0_148[3] = { 0xEF, 0xBB, 0xB0 };
static const symbol s_0_149[3] = { 0xEF, 0xBB, 0xB1 };
static const symbol s_0_150[3] = { 0xEF, 0xBB, 0xB2 };
static const symbol s_0_151[3] = { 0xEF, 0xBB, 0xB3 };
static const symbol s_0_152[3] = { 0xEF, 0xBB, 0xB4 };
static const symbol s_0_153[3] = { 0xEF, 0xBB, 0xB5 };
static const symbol s_0_154[3] = { 0xEF, 0xBB, 0xB6 };
static const symbol s_0_155[3] = { 0xEF, 0xBB, 0xB7 };
static const symbol s_0_156[3] = { 0xEF, 0xBB, 0xB8 };
static const symbol s_0_157[3] = { 0xEF, 0xBB, 0xB9 };
static const symbol s_0_158[3] = { 0xEF, 0xBB, 0xBA };
static const symbol s_0_159[3] = { 0xEF, 0xBB, 0xBB };
static const symbol s_0_160[3] = { 0xEF, 0xBB, 0xBC };

static const struct among a_0[161] =
{
/*  0 */ { 1, s_0_0, -1, 3, 0},
/*  1 */ { 1, s_0_1, -1, 3, 0},
/*  2 */ { 1, s_0_2, -1, 3, 0},
/*  3 */ { 1, s_0_3, -1, 3, 0},
/*  4 */ { 1, s_0_4, -1, 3, 0},
/*  5 */ { 1, s_0_5, -1, 3, 0},
/*  6 */ { 1, s_0_6, -1, 3, 0},
/*  7 */ { 1, s_0_7, -1, 3, 0},
/*  8 */ { 1, s_0_8, -1, 3, 0},
/*  9 */ { 1, s_0_9, -1, 3, 0},
/* 10 */ { 1, s_0_10, -1, 3, 0},
/* 11 */ { 2, s_0_11, -1, 4, 0},
/* 12 */ { 2, s_0_12, -1, 4, 0},
/* 13 */ { 2, s_0_13, -1, 4, 0},
/* 14 */ { 2, s_0_14, -1, 2, 0},
/* 15 */ { 2, s_0_15, -1, 1, 0},
/* 16 */ { 2, s_0_16, -1, 1, 0},
/* 17 */ { 2, s_0_17, -1, 1, 0},
/* 18 */ { 2, s_0_18, -1, 1, 0},
/* 19 */ { 2, s_0_19, -1, 1, 0},
/* 20 */ { 2, s_0_20, -1, 1, 0},
/* 21 */ { 2, s_0_21, -1, 1, 0},
/* 22 */ { 2, s_0_22, -1, 1, 0},
/* 23 */ { 2, s_0_23, -1, 5, 0},
/* 24 */ { 2, s_0_24, -1, 6, 0},
/* 25 */ { 2, s_0_25, -1, 7, 0},
/* 26 */ { 2, s_0_26, -1, 8, 0},
/* 27 */ { 2, s_0_27, -1, 9, 0},
/* 28 */ { 2, s_0_28, -1, 10, 0},
/* 29 */ { 2, s_0_29, -1, 11, 0},
/* 30 */ { 2, s_0_30, -1, 12, 0},
/* 31 */ { 2, s_0_31, -1, 13, 0},
/* 32 */ { 2, s_0_32, -1, 14, 0},
/* 33 */ { 2, s_0_33, -1, 15, 0},
/* 34 */ { 2, s_0_34, -1, 15, 0},
/* 35 */ { 2, s_0_35, -1, 15, 0},
/* 36 */ { 3, s_0_36, -1, 16, 0},
/* 37 */ { 3, s_0_37, -1, 20, 0},
/* 38 */ { 3, s_0_38, -1, 20, 0},
/* 39 */ { 3, s_0_39, -1, 17, 0},
/* 40 */ { 3, s_0_40, -1, 17, 0},
/* 41 */ { 3, s_0_41, -1, 21, 0},
/* 42 */ { 3, s_0_42, -1, 21, 0},
/* 43 */ { 3, s_0_43, -1, 18, 0},
/* 44 */ { 3, s_0_44, -1, 18, 0},
/* 45 */ { 3, s_0_45, -1, 19, 0},
/* 46 */ { 3, s_0_46, -1, 19, 0},
/* 47 */ { 3, s_0_47, -1, 19, 0},
/* 48 */ { 3, s_0_48, -1, 19, 0},
/* 49 */ { 3, s_0_49, -1, 22, 0},
/* 50 */ { 3, s_0_50, -1, 22, 0},
/* 51 */ { 3, s_0_51, -1, 23, 0},
/* 52 */ { 3, s_0_52, -1, 23, 0},
/* 53 */ { 3, s_0_53, -1, 23, 0},
/* 54 */ { 3, s_0_54, -1, 23, 0},
/* 55 */ { 3, s_0_55, -1, 24, 0},
/* 56 */ { 3, s_0_56, -1, 24, 0},
/* 57 */ { 3, s_0_57, -1, 25, 0},
/* 58 */ { 3, s_0_58, -1, 25, 0},
/* 59 */ { 3, s_0_59, -1, 25, 0},
/* 60 */ { 3, s_0_60, -1, 25, 0},
/* 61 */ { 3, s_0_61, -1, 26, 0},
/* 62 */ { 3, s_0_62, -1, 26, 0},
/* 63 */ { 3, s_0_63, -1, 26, 0},
/* 64 */ { 3, s_0_64, -1, 26, 0},
/* 65 */ { 3, s_0_65, -1, 27, 0},
/* 66 */ { 3, s_0_66, -1, 27, 0},
/* 67 */ { 3, s_0_67, -1, 27, 0},
/* 68 */ { 3, s_0_68, -1, 27, 0},
/* 69 */ { 3, s_0_69, -1, 28, 0},
/* 70 */ { 3, s_0_70, -1, 28, 0},
/* 71 */ { 3, s_0_71, -1, 28, 0},
/* 72 */ { 3, s_0_72, -1, 28, 0},
/* 73 */ { 3, s_0_73, -1, 29, 0},
/* 74 */ { 3, s_0_74, -1, 29, 0},
/* 75 */ { 3, s_0_75, -1, 29, 0},
/* 76 */ { 3, s_0_76, -1, 29, 0},
/* 77 */ { 3, s_0_77, -1, 30, 0},
/* 78 */ { 3, s_0_78, -1, 30, 0},
/* 79 */ { 3, s_0_79, -1, 31, 0},
/* 80 */ { 3, s_0_80, -1, 31, 0},
/* 81 */ { 3, s_0_81, -1, 32, 0},
/* 82 */ { 3, s_0_82, -1, 32, 0},
/* 83 */ { 3, s_0_83, -1, 33, 0},
/* 84 */ { 3, s_0_84, -1, 33, 0},
/* 85 */ { 3, s_0_85, -1, 34, 0},
/* 86 */ { 3, s_0_86, -1, 34, 0},
/* 87 */ { 3, s_0_87, -1, 34, 0},
/* 88 */ { 3, s_0_88, -1, 34, 0},
/* 89 */ { 3, s_0_89, -1, 35, 0},
/* 90 */ { 3, s_0_90, -1, 35, 0},
/* 91 */ { 3, s_0_91, -1, 35, 0},
/* 92 */ { 3, s_0_92, -1, 35, 0},
/* 93 */ { 3, s_0_93, -1, 36, 0},
/* 94 */ { 3, s_0_94, -1, 36, 0},
/* 95 */ { 3, s_0_95, -1, 36, 0},
/* 96 */ { 3, s_0_96, -1, 36, 0},
/* 97 */ { 3, s_0_97, -1, 37, 0},
/* 98 */ { 3, s_0_98, -1, 37, 0},
/* 99 */ { 3, s_0_99, -1, 37, 0},
/*100 */ { 3, s_0_100, -1, 37, 0},
/*101 */ { 3, s_0_101, -1, 38, 0},
/*102 */ { 3, s_0_102, -1, 38, 0},
/*103 */ { 3, s_0_103, -1, 38, 0},
/*104 */ { 3, s_0_104, -1, 38, 0},
/*105 */ { 3, s_0_105, -1, 39, 0},
/*106 */ { 3, s_0_106, -1, 39, 0},
/*107 */ { 3, s_0_107, -1, 39, 0},
/*108 */ { 3, s_0_108, -1, 39, 0},
/*109 */ { 3, s_0_109, -1, 40, 0},
/*110 */ { 3, s_0_110, -1, 40, 0},
/*111 */ { 3, s_0_111, -1, 40, 0},
/*112 */ { 3, s_0_112, -1, 40, 0},
/*113 */ { 3, s_0_113, -1, 41, 0},
/*114 */ { 3, s_0_114, -1, 41, 0},
/*115 */ { 3, s_0_115, -1, 41, 0},
/*116 */ { 3, s_0_116, -1, 41, 0},
/*117 */ { 3, s_0_117, -1, 42, 0},
/*118 */ { 3, s_0_118, -1, 42, 0},
/*119 */ { 3, s_0_119, -1, 42, 0},
/*120 */ { 3, s_0_120, -1, 42, 0},
/*121 */ { 3, s_0_121, -1, 43, 0},
/*122 */ { 3, s_0_122, -1, 43, 0},
/*123 */ { 3, s_0_123, -1, 43, 0},
/*124 */ { 3, s_0_124, -1, 43, 0},
/*125 */ { 3, s_0_125, -1, 44, 0},
/*126 */ { 3, s_0_126, -1, 44, 0},
/*127 */ { 3, s_0_127, -1, 44, 0},
/*128 */ { 3, s_0_128, -1, 44, 0},
/*129 */ { 3, s_0_129, -1, 45, 0},
/*130 */ { 3, s_0_130, -1, 45, 0},
/*131 */ { 3, s_0_131, -1, 45, 0},
/*132 */ { 3, s_0_132, -1, 45, 0},
/*133 */ { 3, s_0_133, -1, 46, 0},
/*134 */ { 3, s_0_134, -1, 46, 0},
/*135 */ { 3, s_0_135, -1, 46, 0},
/*136 */ { 3, s_0_136, -1, 46, 0},
/*137 */ { 3, s_0_137, -1, 47, 0},
/*138 */ { 3, s_0_138, -1, 47, 0},
/*139 */ { 3, s_0_139, -1, 47, 0},
/*140 */ { 3, s_0_140, -1, 47, 0},
/*141 */ { 3, s_0_141, -1, 48, 0},
/*142 */ { 3, s_0_142, -1, 48, 0},
/*143 */ { 3, s_0_143, -1, 48, 0},
/*144 */ { 3, s_0_144, -1, 48, 0},
/*145 */ { 3, s_0_145, -1, 49, 0},
/*146 */ { 3, s_0_146, -1, 49, 0},
/*147 */ { 3, s_0_147, -1, 50, 0},
/*148 */ { 3, s_0_148, -1, 50, 0},
/*149 */ { 3, s_0_149, -1, 51, 0},
/*150 */ { 3, s_0_150, -1, 51, 0},
/*151 */ { 3, s_0_151, -1, 51, 0},
/*152 */ { 3, s_0_152, -1, 51, 0},
/*153 */ { 3, s_0_153, -1, 55, 0},
/*154 */ { 3, s_0_154, -1, 55, 0},
/*155 */ { 3, s_0_155, -1, 53, 0},
/*156 */ { 3, s_0_156, -1, 53, 0},
/*157 */ { 3, s_0_157, -1, 54, 0},
/*158 */ { 3, s_0_158, -1, 54, 0},
/*159 */ { 3, s_0_159, -1, 52, 0},
/*160 */ { 3, s_0_160, -1, 52, 0}
};

static const symbol s_1_0[2] = { 0xD8, 0xA2 };
static const symbol s_1_1[2] = { 0xD8, 0xA3 };
static const symbol s_1_2[2] = { 0xD8, 0xA4 };
static const symbol s_1_3[2] = { 0xD8, 0xA5 };
static const symbol s_1_4[2] = { 0xD8, 0xA6 };

static const struct among a_1[5] =
{
/*  0 */ { 2, s_1_0, -1, 1, 0},
/*  1 */ { 2, s_1_1, -1, 1, 0},
/*  2 */ { 2, s_1_2, -1, 2, 0},
/*  3 */ { 2, s_1_3, -1, 1, 0},
/*  4 */ { 2, s_1_4, -1, 3, 0}
};

static const symbol s_2_0[2] = { 0xD8, 0xA2 };
static const symbol s_2_1[2] = { 0xD8, 0xA3 };
static const symbol s_2_2[2] = { 0xD8, 0xA4 };
static const symbol s_2_3[2] = { 0xD8, 0xA5 };
static const symbol s_2_4[2] = { 0xD8, 0xA6 };

static const struct among a_2[5] =
{
/*  0 */ { 2, s_2_0, -1, 1, 0},
/*  1 */ { 2, s_2_1, -1, 1, 0},
/*  2 */ { 2, s_2_2, -1, 2, 0},
/*  3 */ { 2, s_2_3, -1, 1, 0},
/*  4 */ { 2, s_2_4, -1, 3, 0}
};

static const symbol s_3_0[4] = { 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_3_1[6] = { 0xD8, 0xA8, 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_3_2[6] = { 0xD9, 0x83, 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_3_3[4] = { 0xD9, 0x84, 0xD9, 0x84 };

static const struct among a_3[4] =
{
/*  0 */ { 4, s_3_0, -1, 2, 0},
/*  1 */ { 6, s_3_1, -1, 1, 0},
/*  2 */ { 6, s_3_2, -1, 1, 0},
/*  3 */ { 4, s_3_3, -1, 2, 0}
};

static const symbol s_4_0[2] = { 0xD8, 0xA9 };
static const symbol s_4_1[4] = { 0xD8, 0xA7, 0xD8, 0xAA };

static const struct among a_4[2] =
{
/*  0 */ { 2, s_4_0, -1, 1, 0},
/*  1 */ { 4, s_4_1, -1, 2, 0}
};

static const symbol s_5_0[4] = { 0xD8, 0xA3, 0xD8, 0xA2 };
static const symbol s_5_1[4] = { 0xD8, 0xA3, 0xD8, 0xA3 };
static const symbol s_5_2[4] = { 0xD8, 0xA3, 0xD8, 0xA4 };
static const symbol s_5_3[4] = { 0xD8, 0xA3, 0xD8, 0xA5 };
static const symbol s_5_4[4] = { 0xD8, 0xA3, 0xD8, 0xA7 };

static const struct among a_5[5] =
{
/*  0 */ { 4, s_5_0, -1, 2, 0},
/*  1 */ { 4, s_5_1, -1, 1, 0},
/*  2 */ { 4, s_5_2, -1, 3, 0},
/*  3 */ { 4, s_5_3, -1, 5, 0},
/*  4 */ { 4, s_5_4, -1, 4, 0}
};

static const symbol s_6_0[6] = { 0xD9, 0x81, 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_6_1[6] = { 0xD9, 0x88, 0xD8, 0xA7, 0xD9, 0x84 };

static const struct among a_6[2] =
{
/*  0 */ { 6, s_6_0, -1, 1, 0},
/*  1 */ { 6, s_6_1, -1, 2, 0}
};

static const symbol s_7_0[2] = { 0xD9, 0x81 };
static const symbol s_7_1[2] = { 0xD9, 0x88 };

static const struct among a_7[2] =
{
/*  0 */ { 2, s_7_0, -1, 1, 0},
/*  1 */ { 2, s_7_1, -1, 2, 0}
};

static const symbol s_8_0[4] = { 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_8_1[6] = { 0xD8, 0xA8, 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_8_2[6] = { 0xD9, 0x83, 0xD8, 0xA7, 0xD9, 0x84 };
static const symbol s_8_3[4] = { 0xD9, 0x84, 0xD9, 0x84 };

static const struct among a_8[4] =
{
/*  0 */ { 4, s_8_0, -1, 2, 0},
/*  1 */ { 6, s_8_1, -1, 1, 0},
/*  2 */ { 6, s_8_2, -1, 1, 0},
/*  3 */ { 4, s_8_3, -1, 2, 0}
};

static const symbol s_9_0[2] = { 0xD8, 0xA8 };
static const symbol s_9_1[4] = { 0xD8, 0xA8, 0xD8, 0xA8 };
static const symbol s_9_2[2] = { 0xD9, 0x83 };
static const symbol s_9_3[4] = { 0xD9, 0x83, 0xD9, 0x83 };
static const symbol s_9_4[2] = { 0xD9, 0x84 };

static const struct among a_9[5] =
{
/*  0 */ { 2, s_9_0, -1, 1, 0},
/*  1 */ { 4, s_9_1, 0, 4, 0},
/*  2 */ { 2, s_9_2, -1, 2, 0},
/*  3 */ { 4, s_9_3, 2, 5, 0},
/*  4 */ { 2, s_9_4, -1, 3, 0}
};

static const symbol s_10_0[4] = { 0xD8, 0xB3, 0xD8, 0xA3 };
static const symbol s_10_1[4] = { 0xD8, 0xB3, 0xD8, 0xAA };
static const symbol s_10_2[4] = { 0xD8, 0xB3, 0xD9, 0x86 };
static const symbol s_10_3[4] = { 0xD8, 0xB3, 0xD9, 0x8A };

static const struct among a_10[4] =
{
/*  0 */ { 4, s_10_0, -1, 4, 0},
/*  1 */ { 4, s_10_1, -1, 2, 0},
/*  2 */ { 4, s_10_2, -1, 3, 0},
/*  3 */ { 4, s_10_3, -1, 1, 0}
};

static const symbol s_11_0[6] = { 0xD8, 0xAA, 0xD8, 0xB3, 0xD8, 0xAA };
static const symbol s_11_1[6] = { 0xD9, 0x86, 0xD8, 0xB3, 0xD8, 0xAA };
static const symbol s_11_2[6] = { 0xD9, 0x8A, 0xD8, 0xB3, 0xD8, 0xAA };

static const struct among a_11[3] =
{
/*  0 */ { 6, s_11_0, -1, 1, 0},
/*  1 */ { 6, s_11_1, -1, 1, 0},
/*  2 */ { 6, s_11_2, -1, 1, 0}
};

static const symbol s_12_0[2] = { 0xD9, 0x83 };
static const symbol s_12_1[4] = { 0xD9, 0x83, 0xD9, 0x85 };
static const symbol s_12_2[4] = { 0xD9, 0x87, 0xD9, 0x85 };
static const symbol s_12_3[4] = { 0xD9, 0x87, 0xD9, 0x86 };
static const symbol s_12_4[2] = { 0xD9, 0x87 };
static const symbol s_12_5[2] = { 0xD9, 0x8A };
static const symbol s_12_6[6] = { 0xD9, 0x83, 0xD9, 0x85, 0xD8, 0xA7 };
static const symbol s_12_7[6] = { 0xD9, 0x87, 0xD9, 0x85, 0xD8, 0xA7 };
static const symbol s_12_8[4] = { 0xD9, 0x86, 0xD8, 0xA7 };
static const symbol s_12_9[4] = { 0xD9, 0x87, 0xD8, 0xA7 };

static const struct among a_12[10] =
{
/*  0 */ { 2, s_12_0, -1, 1, 0},
/*  1 */ { 4, s_12_1, -1, 2, 0},
/*  2 */ { 4, s_12_2, -1, 2, 0},
/*  3 */ { 4, s_12_3, -1, 2, 0},
/*  4 */ { 2, s_12_4, -1, 1, 0},
/*  5 */ { 2, s_12_5, -1, 1, 0},
/*  6 */ { 6, s_12_6, -1, 3, 0},
/*  7 */ { 6, s_12_7, -1, 3, 0},
/*  8 */ { 4, s_12_8, -1, 2, 0},
/*  9 */ { 4, s_12_9, -1, 2, 0}
};

static const symbol s_13_0[2] = { 0xD9, 0x86 };

static const struct among a_13[1] =
{
/*  0 */ { 2, s_13_0, -1, 1, 0}
};

static const symbol s_14_0[2] = { 0xD9, 0x88 };
static const symbol s_14_1[2] = { 0xD9, 0x8A };
static const symbol s_14_2[2] = { 0xD8, 0xA7 };

static const struct among a_14[3] =
{
/*  0 */ { 2, s_14_0, -1, 1, 0},
/*  1 */ { 2, s_14_1, -1, 1, 0},
/*  2 */ { 2, s_14_2, -1, 1, 0}
};

static const symbol s_15_0[4] = { 0xD8, 0xA7, 0xD8, 0xAA };

static const struct among a_15[1] =
{
/*  0 */ { 4, s_15_0, -1, 1, 0}
};

static const symbol s_16_0[2] = { 0xD8, 0xAA };

static const struct among a_16[1] =
{
/*  0 */ { 2, s_16_0, -1, 1, 0}
};

static const symbol s_17_0[2] = { 0xD8, 0xA9 };

static const struct among a_17[1] =
{
/*  0 */ { 2, s_17_0, -1, 1, 0}
};

static const symbol s_18_0[2] = { 0xD9, 0x8A };

static const struct among a_18[1] =
{
/*  0 */ { 2, s_18_0, -1, 1, 0}
};

static const symbol s_19_0[2] = { 0xD9, 0x83 };
static const symbol s_19_1[4] = { 0xD9, 0x83, 0xD9, 0x85 };
static const symbol s_19_2[4] = { 0xD9, 0x87, 0xD9, 0x85 };
static const symbol s_19_3[4] = { 0xD9, 0x83, 0xD9, 0x86 };
static const symbol s_19_4[4] = { 0xD9, 0x87, 0xD9, 0x86 };
static const symbol s_19_5[2] = { 0xD9, 0x87 };
static const symbol s_19_6[6] = { 0xD9, 0x83, 0xD9, 0x85, 0xD9, 0x88 };
static const symbol s_19_7[4] = { 0xD9, 0x86, 0xD9, 0x8A };
static const symbol s_19_8[6] = { 0xD9, 0x83, 0xD9, 0x85, 0xD8, 0xA7 };
static const symbol s_19_9[6] = { 0xD9, 0x87, 0xD9, 0x85, 0xD8, 0xA7 };
static const symbol s_19_10[4] = { 0xD9, 0x86, 0xD8, 0xA7 };
static const symbol s_19_11[4] = { 0xD9, 0x87, 0xD8, 0xA7 };

static const struct among a_19[12] =
{
/*  0 */ { 2, s_19_0, -1, 1, 0},
/*  1 */ { 4, s_19_1, -1, 2, 0},
/*  2 */ { 4, s_19_2, -1, 2, 0},
/*  3 */ { 4, s_19_3, -1, 2, 0},
/*  4 */ { 4, s_19_4, -1, 2, 0},
/*  5 */ { 2, s_19_5, -1, 1, 0},
/*  6 */ { 6, s_19_6, -1, 3, 0},
/*  7 */ { 4, s_19_7, -1, 2, 0},
/*  8 */ { 6, s_19_8, -1, 3, 0},
/*  9 */ { 6, s_19_9, -1, 3, 0},
/* 10 */ { 4, s_19_10, -1, 2, 0},
/* 11 */ { 4, s_19_11, -1, 2, 0}
};

static const symbol s_20_0[2] = { 0xD9, 0x86 };
static const symbol s_20_1[4] = { 0xD9, 0x88, 0xD9, 0x86 };
static const symbol s_20_2[4] = { 0xD9, 0x8A, 0xD9, 0x86 };
static const symbol s_20_3[4] = { 0xD8, 0xA7, 0xD9, 0x86 };
static const symbol s_20_4[4] = { 0xD8, 0xAA, 0xD9, 0x86 };
static const symbol s_20_5[2] = { 0xD9, 0x8A };
static const symbol s_20_6[2] = { 0xD8, 0xA7 };
static const symbol s_20_7[6] = { 0xD8, 0xAA, 0xD9, 0x85, 0xD8, 0xA7 };
static const symbol s_20_8[4] = { 0xD9, 0x86, 0xD8, 0xA7 };
static const symbol s_20_9[4] = { 0xD8, 0xAA, 0xD8, 0xA7 };
static const symbol s_20_10[2] = { 0xD8, 0xAA };

static const struct among a_20[11] =
{
/*  0 */ { 2, s_20_0, -1, 2, 0},
/*  1 */ { 4, s_20_1, 0, 4, 0},
/*  2 */ { 4, s_20_2, 0, 4, 0},
/*  3 */ { 4, s_20_3, 0, 4, 0},
/*  4 */ { 4, s_20_4, 0, 3, 0},
/*  5 */ { 2, s_20_5, -1, 2, 0},
/*  6 */ { 2, s_20_6, -1, 2, 0},
/*  7 */ { 6, s_20_7, 6, 5, 0},
/*  8 */ { 4, s_20_8, 6, 3, 0},
/*  9 */ { 4, s_20_9, 6, 3, 0},
/* 10 */ { 2, s_20_10, -1, 1, 0}
};

static const symbol s_21_0[4] = { 0xD8, 0xAA, 0xD9, 0x85 };
static const symbol s_21_1[4] = { 0xD9, 0x88, 0xD8, 0xA7 };

static const struct among a_21[2] =
{
/*  0 */ { 4, s_21_0, -1, 1, 0},
/*  1 */ { 4, s_21_1, -1, 1, 0}
};

static const symbol s_22_0[2] = { 0xD9, 0x88 };
static const symbol s_22_1[6] = { 0xD8, 0xAA, 0xD9, 0x85, 0xD9, 0x88 };

static const struct among a_22[2] =
{
/*  0 */ { 2, s_22_0, -1, 1, 0},
/*  1 */ { 6, s_22_1, 0, 2, 0}
};

static const symbol s_23_0[2] = { 0xD9, 0x89 };

static const struct among a_23[1] =
{
/*  0 */ { 2, s_23_0, -1, 1, 0}
};

static const symbol s_0[] = { '0' };
static const symbol s_1[] = { '1' };
static const symbol s_2[] = { '2' };
static const symbol s_3[] = { '3' };
static const symbol s_4[] = { '4' };
static const symbol s_5[] = { '5' };
static const symbol s_6[] = { '6' };
static const symbol s_7[] = { '7' };
static const symbol s_8[] = { '8' };
static const symbol s_9[] = { '9' };
static const symbol s_10[] = { 0xD8, 0xA1 };
static const symbol s_11[] = { 0xD8, 0xA3 };
static const symbol s_12[] = { 0xD8, 0xA5 };
static const symbol s_13[] = { 0xD8, 0xA6 };
static const symbol s_14[] = { 0xD8, 0xA2 };
static const symbol s_15[] = { 0xD8, 0xA4 };
static const symbol s_16[] = { 0xD8, 0xA7 };
static const symbol s_17[] = { 0xD8, 0xA8 };
static const symbol s_18[] = { 0xD8, 0xA9 };
static const symbol s_19[] = { 0xD8, 0xAA };
static const symbol s_20[] = { 0xD8, 0xAB };
static const symbol s_21[] = { 0xD8, 0xAC };
static const symbol s_22[] = { 0xD8, 0xAD };
static const symbol s_23[] = { 0xD8, 0xAE };
static const symbol s_24[] = { 0xD8, 0xAF };
static const symbol s_25[] = { 0xD8, 0xB0 };
static const symbol s_26[] = { 0xD8, 0xB1 };
static const symbol s_27[] = { 0xD8, 0xB2 };
static const symbol s_28[] = { 0xD8, 0xB3 };
static const symbol s_29[] = { 0xD8, 0xB4 };
static const symbol s_30[] = { 0xD8, 0xB5 };
static const symbol s_31[] = { 0xD8, 0xB6 };
static const symbol s_32[] = { 0xD8, 0xB7 };
static const symbol s_33[] = { 0xD8, 0xB8 };
static const symbol s_34[] = { 0xD8, 0xB9 };
static const symbol s_35[] = { 0xD8, 0xBA };
static const symbol s_36[] = { 0xD9, 0x81 };
static const symbol s_37[] = { 0xD9, 0x82 };
static const symbol s_38[] = { 0xD9, 0x83 };
static const symbol s_39[] = { 0xD9, 0x84 };
static const symbol s_40[] = { 0xD9, 0x85 };
static const symbol s_41[] = { 0xD9, 0x86 };
static const symbol s_42[] = { 0xD9, 0x87 };
static const symbol s_43[] = { 0xD9, 0x88 };
static const symbol s_44[] = { 0xD9, 0x89 };
static const symbol s_45[] = { 0xD9, 0x8A };
static const symbol s_46[] = { 0xD9, 0x84, 0xD8, 0xA7 };
static const symbol s_47[] = { 0xD9, 0x84, 0xD8, 0xA3 };
static const symbol s_48[] = { 0xD9, 0x84, 0xD8, 0xA5 };
static const symbol s_49[] = { 0xD9, 0x84, 0xD8, 0xA2 };
static const symbol s_50[] = { 0xD8, 0xA1 };
static const symbol s_51[] = { 0xD8, 0xA1 };
static const symbol s_52[] = { 0xD8, 0xA1 };
static const symbol s_53[] = { 0xD8, 0xA7 };
static const symbol s_54[] = { 0xD9, 0x88 };
static const symbol s_55[] = { 0xD9, 0x8A };
static const symbol s_56[] = { 0xD8, 0xA3 };
static const symbol s_57[] = { 0xD8, 0xA2 };
static const symbol s_58[] = { 0xD8, 0xA3 };
static const symbol s_59[] = { 0xD8, 0xA7 };
static const symbol s_60[] = { 0xD8, 0xA5 };
static const symbol s_61[] = { 0xD9, 0x81, 0xD8, 0xA7 };
static const symbol s_62[] = { 0xD9, 0x88, 0xD8, 0xA7 };
static const symbol s_63[] = { 0xD8, 0xA8, 0xD8, 0xA7 };
static const symbol s_64[] = { 0xD8, 0xA8 };
static const symbol s_65[] = { 0xD9, 0x83 };
static const symbol s_66[] = { 0xD9, 0x8A };
static const symbol s_67[] = { 0xD8, 0xAA };
static const symbol s_68[] = { 0xD9, 0x86 };
static const symbol s_69[] = { 0xD8, 0xA3 };
static const symbol s_70[] = { 0xD8, 0xA7, 0xD8, 0xB3, 0xD8, 0xAA };
static const symbol s_71[] = { 0xD9, 0x8A };

static int r_Normalize_pre(struct SN_env * z) { /* forwardmode */
    int among_var;
    {   int i; for (i = len_utf8(z->p); i > 0; i--) /* loop, line 259 */
        {               {   int c1 = z->c; /* or, line 328 */
                z->bra = z->c; /* [, line 261 */
                among_var = find_among(z, a_0, 161); /* substring, line 261 */
                if (!(among_var)) goto lab1;
                z->ket = z->c; /* ], line 261 */
                switch (among_var) { /* among, line 261 */
                    case 0: goto lab1;
                    case 1:
                        {   int ret = slice_del(z); /* delete, line 262 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {   int ret = slice_del(z); /* delete, line 263 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 3:
                        {   int ret = slice_del(z); /* delete, line 266 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 4:
                        {   int ret = slice_del(z); /* delete, line 267 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 5:
                        {   int ret = slice_from_s(z, 1, s_0); /* <-, line 270 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 6:
                        {   int ret = slice_from_s(z, 1, s_1); /* <-, line 271 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 7:
                        {   int ret = slice_from_s(z, 1, s_2); /* <-, line 272 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 8:
                        {   int ret = slice_from_s(z, 1, s_3); /* <-, line 273 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 9:
                        {   int ret = slice_from_s(z, 1, s_4); /* <-, line 274 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 10:
                        {   int ret = slice_from_s(z, 1, s_5); /* <-, line 275 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 11:
                        {   int ret = slice_from_s(z, 1, s_6); /* <-, line 276 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 12:
                        {   int ret = slice_from_s(z, 1, s_7); /* <-, line 277 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 13:
                        {   int ret = slice_from_s(z, 1, s_8); /* <-, line 278 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 14:
                        {   int ret = slice_from_s(z, 1, s_9); /* <-, line 279 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 15:
                        {   int ret = slice_del(z); /* delete, line 280 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 16:
                        {   int ret = slice_from_s(z, 2, s_10); /* <-, line 283 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 17:
                        {   int ret = slice_from_s(z, 2, s_11); /* <-, line 284 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 18:
                        {   int ret = slice_from_s(z, 2, s_12); /* <-, line 285 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 19:
                        {   int ret = slice_from_s(z, 2, s_13); /* <-, line 286 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 20:
                        {   int ret = slice_from_s(z, 2, s_14); /* <-, line 287 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 21:
                        {   int ret = slice_from_s(z, 2, s_15); /* <-, line 288 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 22:
                        {   int ret = slice_from_s(z, 2, s_16); /* <-, line 289 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 23:
                        {   int ret = slice_from_s(z, 2, s_17); /* <-, line 290 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 24:
                        {   int ret = slice_from_s(z, 2, s_18); /* <-, line 291 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 25:
                        {   int ret = slice_from_s(z, 2, s_19); /* <-, line 292 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 26:
                        {   int ret = slice_from_s(z, 2, s_20); /* <-, line 293 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 27:
                        {   int ret = slice_from_s(z, 2, s_21); /* <-, line 294 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 28:
                        {   int ret = slice_from_s(z, 2, s_22); /* <-, line 295 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 29:
                        {   int ret = slice_from_s(z, 2, s_23); /* <-, line 296 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 30:
                        {   int ret = slice_from_s(z, 2, s_24); /* <-, line 297 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 31:
                        {   int ret = slice_from_s(z, 2, s_25); /* <-, line 298 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 32:
                        {   int ret = slice_from_s(z, 2, s_26); /* <-, line 299 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 33:
                        {   int ret = slice_from_s(z, 2, s_27); /* <-, line 300 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 34:
                        {   int ret = slice_from_s(z, 2, s_28); /* <-, line 301 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 35:
                        {   int ret = slice_from_s(z, 2, s_29); /* <-, line 302 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 36:
                        {   int ret = slice_from_s(z, 2, s_30); /* <-, line 303 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 37:
                        {   int ret = slice_from_s(z, 2, s_31); /* <-, line 304 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 38:
                        {   int ret = slice_from_s(z, 2, s_32); /* <-, line 305 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 39:
                        {   int ret = slice_from_s(z, 2, s_33); /* <-, line 306 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 40:
                        {   int ret = slice_from_s(z, 2, s_34); /* <-, line 307 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 41:
                        {   int ret = slice_from_s(z, 2, s_35); /* <-, line 308 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 42:
                        {   int ret = slice_from_s(z, 2, s_36); /* <-, line 309 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 43:
                        {   int ret = slice_from_s(z, 2, s_37); /* <-, line 310 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 44:
                        {   int ret = slice_from_s(z, 2, s_38); /* <-, line 311 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 45:
                        {   int ret = slice_from_s(z, 2, s_39); /* <-, line 312 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 46:
                        {   int ret = slice_from_s(z, 2, s_40); /* <-, line 313 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 47:
                        {   int ret = slice_from_s(z, 2, s_41); /* <-, line 314 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 48:
                        {   int ret = slice_from_s(z, 2, s_42); /* <-, line 315 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 49:
                        {   int ret = slice_from_s(z, 2, s_43); /* <-, line 316 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 50:
                        {   int ret = slice_from_s(z, 2, s_44); /* <-, line 317 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 51:
                        {   int ret = slice_from_s(z, 2, s_45); /* <-, line 318 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 52:
                        {   int ret = slice_from_s(z, 4, s_46); /* <-, line 321 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 53:
                        {   int ret = slice_from_s(z, 4, s_47); /* <-, line 322 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 54:
                        {   int ret = slice_from_s(z, 4, s_48); /* <-, line 323 */
                            if (ret < 0) return ret;
                        }
                        break;
                    case 55:
                        {   int ret = slice_from_s(z, 4, s_49); /* <-, line 324 */
                            if (ret < 0) return ret;
                        }
                        break;
                }
                goto lab0;
            lab1:
                z->c = c1;
                {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                    if (ret < 0) return 0;
                    z->c = ret; /* next, line 329 */
                }
            }
        lab0:
            ;
        }
    }
    return 1;
}

static int r_Normalize_post(struct SN_env * z) { /* forwardmode */
    int among_var;
    {   int c1 = z->c; /* do, line 335 */
        z->lb = z->c; z->c = z->l; /* backwards, line 337 */

        z->ket = z->c; /* [, line 338 */
        if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 5 || !((124 >> (z->p[z->c - 1] & 0x1f)) & 1)) goto lab0; /* substring, line 338 */
        among_var = find_among_b(z, a_1, 5);
        if (!(among_var)) goto lab0;
        z->bra = z->c; /* ], line 338 */
        switch (among_var) { /* among, line 338 */
            case 0: goto lab0;
            case 1:
                {   int ret = slice_from_s(z, 2, s_50); /* <-, line 339 */
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {   int ret = slice_from_s(z, 2, s_51); /* <-, line 340 */
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {   int ret = slice_from_s(z, 2, s_52); /* <-, line 341 */
                    if (ret < 0) return ret;
                }
                break;
        }
        z->c = z->lb;
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* do, line 346 */
        {   int i; for (i = z->I[0]; i > 0; i--) /* loop, line 346 */
            {                   {   int c3 = z->c; /* or, line 355 */
                    z->bra = z->c; /* [, line 349 */
                    if (z->c + 1 >= z->l || z->p[z->c + 1] >> 5 != 5 || !((124 >> (z->p[z->c + 1] & 0x1f)) & 1)) goto lab3; /* substring, line 349 */
                    among_var = find_among(z, a_2, 5);
                    if (!(among_var)) goto lab3;
                    z->ket = z->c; /* ], line 349 */
                    switch (among_var) { /* among, line 349 */
                        case 0: goto lab3;
                        case 1:
                            {   int ret = slice_from_s(z, 2, s_53); /* <-, line 350 */
                                if (ret < 0) return ret;
                            }
                            break;
                        case 2:
                            {   int ret = slice_from_s(z, 2, s_54); /* <-, line 351 */
                                if (ret < 0) return ret;
                            }
                            break;
                        case 3:
                            {   int ret = slice_from_s(z, 2, s_55); /* <-, line 352 */
                                if (ret < 0) return ret;
                            }
                            break;
                    }
                    goto lab2;
                lab3:
                    z->c = c3;
                    {   int ret = skip_utf8(z->p, z->c, 0, z->l, 1);
                        if (ret < 0) goto lab1;
                        z->c = ret; /* next, line 356 */
                    }
                }
            lab2:
                ;
            }
        }
    lab1:
        z->c = c2;
    }
    return 1;
}

static int r_Checks1(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 362 */
    z->bra = z->c; /* [, line 363 */
    if (z->c + 3 >= z->l || (z->p[z->c + 3] != 132 && z->p[z->c + 3] != 167)) return 0; /* substring, line 363 */
    among_var = find_among(z, a_3, 4);
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 363 */
    switch (among_var) { /* among, line 363 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 364 */
            z->B[0] = 1; /* set is_noun, line 364 */
            z->B[1] = 0; /* unset is_verb, line 364 */
            z->B[2] = 1; /* set is_defined, line 364 */
            break;
        case 2:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 365 */
            z->B[0] = 1; /* set is_noun, line 365 */
            z->B[1] = 0; /* unset is_verb, line 365 */
            z->B[2] = 1; /* set is_defined, line 365 */
            break;
    }
    return 1;
}

static int r_Checks2(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 372 */
    z->ket = z->c; /* [, line 373 */
    if (z->c - 1 <= z->lb || (z->p[z->c - 1] != 169 && z->p[z->c - 1] != 170)) return 0; /* substring, line 373 */
    among_var = find_among_b(z, a_4, 2);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 373 */
    switch (among_var) { /* among, line 373 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 2)) return 0; /* $word_len > <integer expression>, line 374 */
            z->B[0] = 1; /* set is_noun, line 374 */
            z->B[1] = 0; /* unset is_verb, line 374 */
            break;
        case 2:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 375 */
            z->B[0] = 1; /* set is_noun, line 375 */
            z->B[1] = 0; /* unset is_verb, line 375 */
            break;
    }
    return 1;
}

static int r_Prefix_Step1(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 382 */
    z->bra = z->c; /* [, line 383 */
    if (z->c + 3 >= z->l || z->p[z->c + 3] >> 5 != 5 || !((188 >> (z->p[z->c + 3] & 0x1f)) & 1)) return 0; /* substring, line 383 */
    among_var = find_among(z, a_5, 5);
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 383 */
    switch (among_var) { /* among, line 383 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 384 */
            {   int ret = slice_from_s(z, 2, s_56); /* <-, line 384 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 385 */
            {   int ret = slice_from_s(z, 2, s_57); /* <-, line 385 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 386 */
            {   int ret = slice_from_s(z, 2, s_58); /* <-, line 386 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 387 */
            {   int ret = slice_from_s(z, 2, s_59); /* <-, line 387 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 388 */
            {   int ret = slice_from_s(z, 2, s_60); /* <-, line 388 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Prefix_Step2a(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 394 */
    z->bra = z->c; /* [, line 395 */
    if (z->c + 5 >= z->l || z->p[z->c + 5] != 132) return 0; /* substring, line 395 */
    among_var = find_among(z, a_6, 2);
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 395 */
    switch (among_var) { /* among, line 395 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 5)) return 0; /* $word_len > <integer expression>, line 396 */
            {   int ret = slice_del(z); /* delete, line 396 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] > 5)) return 0; /* $word_len > <integer expression>, line 397 */
            {   int ret = slice_del(z); /* delete, line 397 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Prefix_Step2b(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 402 */
    {   int c1 = z->c; /* not, line 403 */
        if (!(eq_s(z, 4, s_61))) goto lab0; /* literal, line 403 */
        return 0;
    lab0:
        z->c = c1;
    }
    {   int c2 = z->c; /* not, line 404 */
        if (!(eq_s(z, 4, s_62))) goto lab1; /* literal, line 404 */
        return 0;
    lab1:
        z->c = c2;
    }
    z->bra = z->c; /* [, line 405 */
    if (z->c + 1 >= z->l || (z->p[z->c + 1] != 129 && z->p[z->c + 1] != 136)) return 0; /* substring, line 405 */
    among_var = find_among(z, a_7, 2);
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 405 */
    switch (among_var) { /* among, line 405 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 406 */
            {   int ret = slice_del(z); /* delete, line 406 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 407 */
            {   int ret = slice_del(z); /* delete, line 407 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Prefix_Step3a_Noun(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 412 */
    z->bra = z->c; /* [, line 413 */
    if (z->c + 3 >= z->l || (z->p[z->c + 3] != 132 && z->p[z->c + 3] != 167)) return 0; /* substring, line 413 */
    among_var = find_among(z, a_8, 4);
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 413 */
    switch (among_var) { /* among, line 413 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 5)) return 0; /* $word_len > <integer expression>, line 414 */
            {   int ret = slice_del(z); /* delete, line 414 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 415 */
            {   int ret = slice_del(z); /* delete, line 415 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Prefix_Step3b_Noun(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 420 */
    {   int c1 = z->c; /* not, line 421 */
        if (!(eq_s(z, 4, s_63))) goto lab0; /* literal, line 421 */
        return 0;
    lab0:
        z->c = c1;
    }
    z->bra = z->c; /* [, line 422 */
    among_var = find_among(z, a_9, 5); /* substring, line 422 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 422 */
    switch (among_var) { /* among, line 422 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 423 */
            {   int ret = slice_del(z); /* delete, line 423 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 424 */
            {   int ret = slice_del(z); /* delete, line 424 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 425 */
            {   int ret = slice_del(z); /* delete, line 425 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 426 */
            {   int ret = slice_from_s(z, 2, s_64); /* <-, line 426 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            if (!(z->I[0] > 3)) return 0; /* $word_len > <integer expression>, line 427 */
            {   int ret = slice_from_s(z, 2, s_65); /* <-, line 427 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Prefix_Step3_Verb(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 433 */
    z->bra = z->c; /* [, line 434 */
    among_var = find_among(z, a_10, 4); /* substring, line 434 */
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 434 */
    switch (among_var) { /* among, line 434 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 436 */
            {   int ret = slice_from_s(z, 2, s_66); /* <-, line 436 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 437 */
            {   int ret = slice_from_s(z, 2, s_67); /* <-, line 437 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 438 */
            {   int ret = slice_from_s(z, 2, s_68); /* <-, line 438 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 439 */
            {   int ret = slice_from_s(z, 2, s_69); /* <-, line 439 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Prefix_Step4_Verb(struct SN_env * z) { /* forwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 444 */
    z->bra = z->c; /* [, line 445 */
    if (z->c + 5 >= z->l || z->p[z->c + 5] != 170) return 0; /* substring, line 445 */
    among_var = find_among(z, a_11, 3);
    if (!(among_var)) return 0;
    z->ket = z->c; /* ], line 445 */
    switch (among_var) { /* among, line 445 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 446 */
            z->B[1] = 1; /* set is_verb, line 446 */
            z->B[0] = 0; /* unset is_noun, line 446 */
            {   int ret = slice_from_s(z, 6, s_70); /* <-, line 446 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step1a(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 454 */
    z->ket = z->c; /* [, line 455 */
    among_var = find_among_b(z, a_12, 10); /* substring, line 455 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 455 */
    switch (among_var) { /* among, line 455 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 4)) return 0; /* $word_len >= <integer expression>, line 456 */
            {   int ret = slice_del(z); /* delete, line 456 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] >= 5)) return 0; /* $word_len >= <integer expression>, line 457 */
            {   int ret = slice_del(z); /* delete, line 457 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (!(z->I[0] >= 6)) return 0; /* $word_len >= <integer expression>, line 458 */
            {   int ret = slice_del(z); /* delete, line 458 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step1b(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 462 */
    z->ket = z->c; /* [, line 463 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 134) return 0; /* substring, line 463 */
    among_var = find_among_b(z, a_13, 1);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 463 */
    switch (among_var) { /* among, line 463 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 5)) return 0; /* $word_len > <integer expression>, line 464 */
            {   int ret = slice_del(z); /* delete, line 464 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step2a(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 469 */
    z->ket = z->c; /* [, line 470 */
    among_var = find_among_b(z, a_14, 3); /* substring, line 470 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 470 */
    switch (among_var) { /* among, line 470 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] > 4)) return 0; /* $word_len > <integer expression>, line 471 */
            {   int ret = slice_del(z); /* delete, line 471 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step2b(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 476 */
    z->ket = z->c; /* [, line 477 */
    if (z->c - 3 <= z->lb || z->p[z->c - 1] != 170) return 0; /* substring, line 477 */
    among_var = find_among_b(z, a_15, 1);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 477 */
    switch (among_var) { /* among, line 477 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 5)) return 0; /* $word_len >= <integer expression>, line 478 */
            {   int ret = slice_del(z); /* delete, line 478 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step2c1(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 483 */
    z->ket = z->c; /* [, line 484 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 170) return 0; /* substring, line 484 */
    among_var = find_among_b(z, a_16, 1);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 484 */
    switch (among_var) { /* among, line 484 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 4)) return 0; /* $word_len >= <integer expression>, line 485 */
            {   int ret = slice_del(z); /* delete, line 485 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step2c2(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 489 */
    z->ket = z->c; /* [, line 490 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 169) return 0; /* substring, line 490 */
    among_var = find_among_b(z, a_17, 1);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 490 */
    switch (among_var) { /* among, line 490 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 3)) return 0; /* $word_len >= <integer expression>, line 491 */
            {   int ret = slice_del(z); /* delete, line 491 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Noun_Step3(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 495 */
    z->ket = z->c; /* [, line 496 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 138) return 0; /* substring, line 496 */
    among_var = find_among_b(z, a_18, 1);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 496 */
    switch (among_var) { /* among, line 496 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 3)) return 0; /* $word_len >= <integer expression>, line 497 */
            {   int ret = slice_del(z); /* delete, line 497 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Verb_Step1(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 502 */
    z->ket = z->c; /* [, line 503 */
    among_var = find_among_b(z, a_19, 12); /* substring, line 503 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 503 */
    switch (among_var) { /* among, line 503 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 4)) return 0; /* $word_len >= <integer expression>, line 504 */
            {   int ret = slice_del(z); /* delete, line 504 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] >= 5)) return 0; /* $word_len >= <integer expression>, line 505 */
            {   int ret = slice_del(z); /* delete, line 505 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (!(z->I[0] >= 6)) return 0; /* $word_len >= <integer expression>, line 506 */
            {   int ret = slice_del(z); /* delete, line 506 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Verb_Step2a(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 510 */
    z->ket = z->c; /* [, line 511 */
    among_var = find_among_b(z, a_20, 11); /* substring, line 511 */
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 511 */
    switch (among_var) { /* among, line 511 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 4)) return 0; /* $word_len >= <integer expression>, line 512 */
            {   int ret = slice_del(z); /* delete, line 512 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] >= 4)) return 0; /* $word_len >= <integer expression>, line 513 */
            {   int ret = slice_del(z); /* delete, line 513 */
                if (ret < 0) return ret;
            }
            break;
        case 3:
            if (!(z->I[0] >= 5)) return 0; /* $word_len >= <integer expression>, line 514 */
            {   int ret = slice_del(z); /* delete, line 514 */
                if (ret < 0) return ret;
            }
            break;
        case 4:
            if (!(z->I[0] > 5)) return 0; /* $word_len > <integer expression>, line 515 */
            {   int ret = slice_del(z); /* delete, line 515 */
                if (ret < 0) return ret;
            }
            break;
        case 5:
            if (!(z->I[0] >= 6)) return 0; /* $word_len >= <integer expression>, line 516 */
            {   int ret = slice_del(z); /* delete, line 516 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Verb_Step2b(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 521 */
    z->ket = z->c; /* [, line 522 */
    if (z->c - 3 <= z->lb || (z->p[z->c - 1] != 133 && z->p[z->c - 1] != 167)) return 0; /* substring, line 522 */
    among_var = find_among_b(z, a_21, 2);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 522 */
    switch (among_var) { /* among, line 522 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 5)) return 0; /* $word_len >= <integer expression>, line 523 */
            {   int ret = slice_del(z); /* delete, line 523 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_Verb_Step2c(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 529 */
    z->ket = z->c; /* [, line 530 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 136) return 0; /* substring, line 530 */
    among_var = find_among_b(z, a_22, 2);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 530 */
    switch (among_var) { /* among, line 530 */
        case 0: return 0;
        case 1:
            if (!(z->I[0] >= 4)) return 0; /* $word_len >= <integer expression>, line 531 */
            {   int ret = slice_del(z); /* delete, line 531 */
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(z->I[0] >= 6)) return 0; /* $word_len >= <integer expression>, line 532 */
            {   int ret = slice_del(z); /* delete, line 532 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_Suffix_All_alef_maqsura(struct SN_env * z) { /* backwardmode */
    int among_var;
    z->I[0] = len_utf8(z->p); /* $word_len = <integer expression>, line 537 */
    z->ket = z->c; /* [, line 538 */
    if (z->c - 1 <= z->lb || z->p[z->c - 1] != 137) return 0; /* substring, line 538 */
    among_var = find_among_b(z, a_23, 1);
    if (!(among_var)) return 0;
    z->bra = z->c; /* ], line 538 */
    switch (among_var) { /* among, line 538 */
        case 0: return 0;
        case 1:
            {   int ret = slice_from_s(z, 2, s_71); /* <-, line 539 */
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

extern int arabic_UTF_8_stem(struct SN_env * z) { /* forwardmode */
    z->B[0] = 1; /* set is_noun, line 548 */
    z->B[1] = 1; /* set is_verb, line 549 */
    z->B[2] = 0; /* unset is_defined, line 550 */
    {   int c1 = z->c; /* do, line 553 */
        {   int ret = r_Checks1(z); /* call Checks1, line 553 */
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
    lab0:
        z->c = c1;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 554 */

    {   int m2 = z->l - z->c; (void)m2; /* do, line 554 */
        {   int ret = r_Checks2(z); /* call Checks2, line 554 */
            if (ret == 0) goto lab1;
            if (ret < 0) return ret;
        }
    lab1:
        z->c = z->l - m2;
    }
    z->c = z->lb;
    {   int c3 = z->c; /* do, line 557 */
        {   int ret = r_Normalize_pre(z); /* call Normalize_pre, line 557 */
            if (ret == 0) goto lab2;
            if (ret < 0) return ret;
        }
    lab2:
        z->c = c3;
    }
    z->lb = z->c; z->c = z->l; /* backwards, line 560 */

    {   int m4 = z->l - z->c; (void)m4; /* do, line 562 */
        {   int m5 = z->l - z->c; (void)m5; /* or, line 576 */
            if (!(z->B[1])) goto lab5; /* Boolean test is_verb, line 565 */
            {   int m6 = z->l - z->c; (void)m6; /* or, line 571 */
                {   int i = 1;
                    while(1) { /* atleast, line 568 */
                        int m7 = z->l - z->c; (void)m7;
                        {   int ret = r_Suffix_Verb_Step1(z); /* call Suffix_Verb_Step1, line 568 */
                            if (ret == 0) goto lab8;
                            if (ret < 0) return ret;
                        }
                        i--;
                        continue;
                    lab8:
                        z->c = z->l - m7;
                        break;
                    }
                    if (i > 0) goto lab7;
                }
                {   int m8 = z->l - z->c; (void)m8; /* or, line 569 */
                    {   int ret = r_Suffix_Verb_Step2a(z); /* call Suffix_Verb_Step2a, line 569 */
                        if (ret == 0) goto lab10;
                        if (ret < 0) return ret;
                    }
                    goto lab9;
                lab10:
                    z->c = z->l - m8;
                    {   int ret = r_Suffix_Verb_Step2c(z); /* call Suffix_Verb_Step2c, line 569 */
                        if (ret == 0) goto lab11;
                        if (ret < 0) return ret;
                    }
                    goto lab9;
                lab11:
                    z->c = z->l - m8;
                    {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                        if (ret < 0) goto lab7;
                        z->c = ret; /* next, line 569 */
                    }
                }
            lab9:
                goto lab6;
            lab7:
                z->c = z->l - m6;
                {   int ret = r_Suffix_Verb_Step2b(z); /* call Suffix_Verb_Step2b, line 571 */
                    if (ret == 0) goto lab12;
                    if (ret < 0) return ret;
                }
                goto lab6;
            lab12:
                z->c = z->l - m6;
                {   int ret = r_Suffix_Verb_Step2a(z); /* call Suffix_Verb_Step2a, line 572 */
                    if (ret == 0) goto lab5;
                    if (ret < 0) return ret;
                }
            }
        lab6:
            goto lab4;
        lab5:
            z->c = z->l - m5;
            if (!(z->B[0])) goto lab13; /* Boolean test is_noun, line 577 */
            {   int m9 = z->l - z->c; (void)m9; /* try, line 580 */
                {   int m10 = z->l - z->c; (void)m10; /* or, line 582 */
                    {   int ret = r_Suffix_Noun_Step2c2(z); /* call Suffix_Noun_Step2c2, line 581 */
                        if (ret == 0) goto lab16;
                        if (ret < 0) return ret;
                    }
                    goto lab15;
                lab16:
                    z->c = z->l - m10;
                    /* not, line 582 */
                    if (!(z->B[2])) goto lab18; /* Boolean test is_defined, line 582 */
                    goto lab17;
                lab18:
                    {   int ret = r_Suffix_Noun_Step1a(z); /* call Suffix_Noun_Step1a, line 582 */
                        if (ret == 0) goto lab17;
                        if (ret < 0) return ret;
                    }
                    {   int m11 = z->l - z->c; (void)m11; /* or, line 584 */
                        {   int ret = r_Suffix_Noun_Step2a(z); /* call Suffix_Noun_Step2a, line 583 */
                            if (ret == 0) goto lab20;
                            if (ret < 0) return ret;
                        }
                        goto lab19;
                    lab20:
                        z->c = z->l - m11;
                        {   int ret = r_Suffix_Noun_Step2b(z); /* call Suffix_Noun_Step2b, line 584 */
                            if (ret == 0) goto lab21;
                            if (ret < 0) return ret;
                        }
                        goto lab19;
                    lab21:
                        z->c = z->l - m11;
                        {   int ret = r_Suffix_Noun_Step2c1(z); /* call Suffix_Noun_Step2c1, line 585 */
                            if (ret == 0) goto lab22;
                            if (ret < 0) return ret;
                        }
                        goto lab19;
                    lab22:
                        z->c = z->l - m11;
                        {   int ret = skip_utf8(z->p, z->c, z->lb, 0, -1);
                            if (ret < 0) goto lab17;
                            z->c = ret; /* next, line 586 */
                        }
                    }
                lab19:
                    goto lab15;
                lab17:
                    z->c = z->l - m10;
                    {   int ret = r_Suffix_Noun_Step1b(z); /* call Suffix_Noun_Step1b, line 587 */
                        if (ret == 0) goto lab23;
                        if (ret < 0) return ret;
                    }
                    {   int m12 = z->l - z->c; (void)m12; /* or, line 589 */
                        {   int ret = r_Suffix_Noun_Step2a(z); /* call Suffix_Noun_Step2a, line 588 */
                            if (ret == 0) goto lab25;
                            if (ret < 0) return ret;
                        }
                        goto lab24;
                    lab25:
                        z->c = z->l - m12;
                        {   int ret = r_Suffix_Noun_Step2b(z); /* call Suffix_Noun_Step2b, line 589 */
                            if (ret == 0) goto lab26;
                            if (ret < 0) return ret;
                        }
                        goto lab24;
                    lab26:
                        z->c = z->l - m12;
                        {   int ret = r_Suffix_Noun_Step2c1(z); /* call Suffix_Noun_Step2c1, line 590 */
                            if (ret == 0) goto lab23;
                            if (ret < 0) return ret;
                        }
                    }
                lab24:
                    goto lab15;
                lab23:
                    z->c = z->l - m10;
                    /* not, line 591 */
                    if (!(z->B[2])) goto lab28; /* Boolean test is_defined, line 591 */
                    goto lab27;
                lab28:
                    {   int ret = r_Suffix_Noun_Step2a(z); /* call Suffix_Noun_Step2a, line 591 */
                        if (ret == 0) goto lab27;
                        if (ret < 0) return ret;
                    }
                    goto lab15;
                lab27:
                    z->c = z->l - m10;
                    {   int ret = r_Suffix_Noun_Step2b(z); /* call Suffix_Noun_Step2b, line 592 */
                        if (ret == 0) { z->c = z->l - m9; goto lab14; }
                        if (ret < 0) return ret;
                    }
                }
            lab15:
            lab14:
                ;
            }
            {   int ret = r_Suffix_Noun_Step3(z); /* call Suffix_Noun_Step3, line 594 */
                if (ret == 0) goto lab13;
                if (ret < 0) return ret;
            }
            goto lab4;
        lab13:
            z->c = z->l - m5;
            {   int ret = r_Suffix_All_alef_maqsura(z); /* call Suffix_All_alef_maqsura, line 600 */
                if (ret == 0) goto lab3;
                if (ret < 0) return ret;
            }
        }
    lab4:
    lab3:
        z->c = z->l - m4;
    }
    z->c = z->lb;
    {   int c13 = z->c; /* do, line 605 */
        {   int c14 = z->c; /* try, line 606 */
            {   int ret = r_Prefix_Step1(z); /* call Prefix_Step1, line 606 */
                if (ret == 0) { z->c = c14; goto lab30; }
                if (ret < 0) return ret;
            }
        lab30:
            ;
        }
        {   int c15 = z->c; /* try, line 607 */
            {   int c16 = z->c; /* or, line 607 */
                {   int ret = r_Prefix_Step2a(z); /* call Prefix_Step2a, line 607 */
                    if (ret == 0) goto lab33;
                    if (ret < 0) return ret;
                }
                goto lab32;
            lab33:
                z->c = c16;
                {   int ret = r_Prefix_Step2b(z); /* call Prefix_Step2b, line 607 */
                    if (ret == 0) { z->c = c15; goto lab31; }
                    if (ret < 0) return ret;
                }
            }
        lab32:
        lab31:
            ;
        }
        {   int c17 = z->c; /* or, line 609 */
            {   int ret = r_Prefix_Step3a_Noun(z); /* call Prefix_Step3a_Noun, line 608 */
                if (ret == 0) goto lab35;
                if (ret < 0) return ret;
            }
            goto lab34;
        lab35:
            z->c = c17;
            if (!(z->B[0])) goto lab36; /* Boolean test is_noun, line 609 */
            {   int ret = r_Prefix_Step3b_Noun(z); /* call Prefix_Step3b_Noun, line 609 */
                if (ret == 0) goto lab36;
                if (ret < 0) return ret;
            }
            goto lab34;
        lab36:
            z->c = c17;
            if (!(z->B[1])) goto lab29; /* Boolean test is_verb, line 610 */
            {   int c18 = z->c; /* try, line 610 */
                {   int ret = r_Prefix_Step3_Verb(z); /* call Prefix_Step3_Verb, line 610 */
                    if (ret == 0) { z->c = c18; goto lab37; }
                    if (ret < 0) return ret;
                }
            lab37:
                ;
            }
            {   int ret = r_Prefix_Step4_Verb(z); /* call Prefix_Step4_Verb, line 610 */
                if (ret == 0) goto lab29;
                if (ret < 0) return ret;
            }
        }
    lab34:
    lab29:
        z->c = c13;
    }
    {   int c19 = z->c; /* do, line 615 */
        {   int ret = r_Normalize_post(z); /* call Normalize_post, line 615 */
            if (ret == 0) goto lab38;
            if (ret < 0) return ret;
        }
    lab38:
        z->c = c19;
    }
    return 1;
}

extern struct SN_env * arabic_UTF_8_create_env(void) { return SN_create_env(0, 1, 3); }

extern void arabic_UTF_8_close_env(struct SN_env * z) { SN_close_env(z, 0); }

