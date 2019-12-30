#ifndef __DYNAMIC_AID_XXXX_H
#define __DYNAMIC_AID_XXXX_H __FILE__

#include "dynamic_aid.h"

enum {
	IV_VT,
	IV_1,
	IV_7,
	IV_11,
	IV_23,
	IV_35,
	IV_51,
	IV_87,
	IV_151,
	IV_203,
	IV_255,
	IV_MAX
};

enum {
	IBRIGHTNESS_002NIT,
	IBRIGHTNESS_003NIT,
	IBRIGHTNESS_004NIT,
	IBRIGHTNESS_005NIT,
	IBRIGHTNESS_006NIT,
	IBRIGHTNESS_007NIT,
	IBRIGHTNESS_008NIT,
	IBRIGHTNESS_009NIT,
	IBRIGHTNESS_010NIT,
	IBRIGHTNESS_011NIT,
	IBRIGHTNESS_012NIT,
	IBRIGHTNESS_013NIT,
	IBRIGHTNESS_014NIT,
	IBRIGHTNESS_015NIT,
	IBRIGHTNESS_016NIT,
	IBRIGHTNESS_017NIT,
	IBRIGHTNESS_019NIT,
	IBRIGHTNESS_020NIT,
	IBRIGHTNESS_021NIT,
	IBRIGHTNESS_022NIT,
	IBRIGHTNESS_024NIT,
	IBRIGHTNESS_025NIT,
	IBRIGHTNESS_027NIT,
	IBRIGHTNESS_029NIT,
	IBRIGHTNESS_030NIT,
	IBRIGHTNESS_032NIT,
	IBRIGHTNESS_034NIT,
	IBRIGHTNESS_037NIT,
	IBRIGHTNESS_039NIT,
	IBRIGHTNESS_041NIT,
	IBRIGHTNESS_044NIT,
	IBRIGHTNESS_047NIT,
	IBRIGHTNESS_050NIT,
	IBRIGHTNESS_053NIT,
	IBRIGHTNESS_056NIT,
	IBRIGHTNESS_060NIT,
	IBRIGHTNESS_064NIT,
	IBRIGHTNESS_068NIT,
	IBRIGHTNESS_072NIT,
	IBRIGHTNESS_077NIT,
	IBRIGHTNESS_082NIT,
	IBRIGHTNESS_087NIT,
	IBRIGHTNESS_093NIT,
	IBRIGHTNESS_098NIT,
	IBRIGHTNESS_105NIT,
	IBRIGHTNESS_111NIT,
	IBRIGHTNESS_119NIT,
	IBRIGHTNESS_126NIT,
	IBRIGHTNESS_134NIT,
	IBRIGHTNESS_143NIT,
	IBRIGHTNESS_152NIT,
	IBRIGHTNESS_162NIT,
	IBRIGHTNESS_172NIT,
	IBRIGHTNESS_183NIT,
	IBRIGHTNESS_195NIT,
	IBRIGHTNESS_207NIT,
	IBRIGHTNESS_220NIT,
	IBRIGHTNESS_234NIT,
	IBRIGHTNESS_249NIT,
	IBRIGHTNESS_265NIT,
	IBRIGHTNESS_282NIT,
	IBRIGHTNESS_300NIT,
	IBRIGHTNESS_316NIT,
	IBRIGHTNESS_333NIT,
	IBRIGHTNESS_350NIT,
	IBRIGHTNESS_357NIT,
	IBRIGHTNESS_365NIT,
	IBRIGHTNESS_372NIT,
	IBRIGHTNESS_380NIT,
	IBRIGHTNESS_387NIT,
	IBRIGHTNESS_395NIT,
	IBRIGHTNESS_403NIT,
	IBRIGHTNESS_412NIT,
	IBRIGHTNESS_420NIT,
	IBRIGHTNESS_MAX,
	IBRIGHTNESS_443NIT = IBRIGHTNESS_MAX,
	IBRIGHTNESS_465NIT,
	IBRIGHTNESS_488NIT,
	IBRIGHTNESS_510NIT,
	IBRIGHTNESS_533NIT,
	IBRIGHTNESS_555NIT,
	IBRIGHTNESS_578NIT,
	IBRIGHTNESS_600NIT,
	IBRIGHTNESS_HBM_MAX
};

#define VREG_OUT_X1000		6500	/* VREG_OUT x 1000 */

static const int index_voltage_table[IV_MAX] = {
	0,	/* IV_VT */
	1,	/* IV_1 */
	7,	/* IV_7 */
	11,	/* IV_11 */
	23,	/* IV_23 */
	35,	/* IV_35 */
	51,	/* IV_51 */
	87,	/* IV_87 */
	151,	/* IV_151 */
	203,	/* IV_203 */
	255	/* IV_255 */
};

static int index_voltage_reference[IV_MAX] = {
	VREG_OUT_X1000,		/* IV_VT */
	VREG_OUT_X1000,
	VREG_OUT_X1000,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	IV_VT,
	VREG_OUT_X1000		/* IV_255 */
};

static const int index_brightness_table[IBRIGHTNESS_HBM_MAX] = {
	2,	/* IBRIGHTNESS_002NIT */
	3,	/* IBRIGHTNESS_003NIT */
	4,	/* IBRIGHTNESS_004NIT */
	5,	/* IBRIGHTNESS_005NIT */
	6,	/* IBRIGHTNESS_006NIT */
	7,	/* IBRIGHTNESS_007NIT */
	8,	/* IBRIGHTNESS_008NIT */
	9,	/* IBRIGHTNESS_009NIT */
	10,	/* IBRIGHTNESS_010NIT */
	11,	/* IBRIGHTNESS_011NIT */
	12,	/* IBRIGHTNESS_012NIT */
	13,	/* IBRIGHTNESS_013NIT */
	14,	/* IBRIGHTNESS_014NIT */
	15,	/* IBRIGHTNESS_015NIT */
	16,	/* IBRIGHTNESS_016NIT */
	17,	/* IBRIGHTNESS_017NIT */
	19,	/* IBRIGHTNESS_019NIT */
	20,	/* IBRIGHTNESS_020NIT */
	21,	/* IBRIGHTNESS_021NIT */
	22,	/* IBRIGHTNESS_022NIT */
	24,	/* IBRIGHTNESS_024NIT */
	25,	/* IBRIGHTNESS_025NIT */
	27,	/* IBRIGHTNESS_027NIT */
	29,	/* IBRIGHTNESS_029NIT */
	30,	/* IBRIGHTNESS_030NIT */
	32,	/* IBRIGHTNESS_032NIT */
	34,	/* IBRIGHTNESS_034NIT */
	37,	/* IBRIGHTNESS_037NIT */
	39,	/* IBRIGHTNESS_039NIT */
	41,	/* IBRIGHTNESS_041NIT */
	44,	/* IBRIGHTNESS_044NIT */
	47,	/* IBRIGHTNESS_047NIT */
	50,	/* IBRIGHTNESS_050NIT */
	53,	/* IBRIGHTNESS_053NIT */
	56,	/* IBRIGHTNESS_056NIT */
	60,	/* IBRIGHTNESS_060NIT */
	64,	/* IBRIGHTNESS_064NIT */
	68,	/* IBRIGHTNESS_068NIT */
	72,	/* IBRIGHTNESS_072NIT */
	77,	/* IBRIGHTNESS_077NIT */
	82,	/* IBRIGHTNESS_082NIT */
	87,	/* IBRIGHTNESS_087NIT */
	93,	/* IBRIGHTNESS_093NIT */
	98,	/* IBRIGHTNESS_098NIT */
	105,	/* IBRIGHTNESS_105NIT */
	111,	/* IBRIGHTNESS_111NIT */
	119,	/* IBRIGHTNESS_119NIT */
	126,	/* IBRIGHTNESS_126NIT */
	134,	/* IBRIGHTNESS_134NIT */
	143,	/* IBRIGHTNESS_143NIT */
	152,	/* IBRIGHTNESS_152NIT */
	162,	/* IBRIGHTNESS_162NIT */
	172,	/* IBRIGHTNESS_172NIT */
	183,	/* IBRIGHTNESS_183NIT */
	195,	/* IBRIGHTNESS_195NIT */
	207,	/* IBRIGHTNESS_207NIT */
	220,	/* IBRIGHTNESS_220NIT */
	234,	/* IBRIGHTNESS_234NIT */
	249,	/* IBRIGHTNESS_249NIT */
	265,	/* IBRIGHTNESS_265NIT */
	282,	/* IBRIGHTNESS_282NIT */
	300,	/* IBRIGHTNESS_300NIT */
	316,	/* IBRIGHTNESS_316NIT */
	333,	/* IBRIGHTNESS_333NIT */
	350,	/* IBRIGHTNESS_350NIT */
	357,	/* IBRIGHTNESS_357NIT */
	365,	/* IBRIGHTNESS_365NIT */
	372,	/* IBRIGHTNESS_372NIT */
	380,	/* IBRIGHTNESS_380NIT */
	387,	/* IBRIGHTNESS_387NIT */
	395,	/* IBRIGHTNESS_395NIT */
	403,	/* IBRIGHTNESS_403NIT */
	412,	/* IBRIGHTNESS_412NIT */
	420,	/* IBRIGHTNESS_420NIT */
	443,	/* IBRIGHTNESS_443NIT */
	465,	/* IBRIGHTNESS_465NIT */
	488,	/* IBRIGHTNESS_488NIT */
	510,	/* IBRIGHTNESS_510NIT */
	533,	/* IBRIGHTNESS_533NIT */
	555,	/* IBRIGHTNESS_555NIT */
	578,	/* IBRIGHTNESS_578NIT */
	600	/* IBRIGHTNESS_600NIT */
};

static const int gamma_default_0[IV_MAX*CI_MAX] = {
	0x00, 0x00, 0x00,	/* IV_VT */
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x80, 0x80, 0x80,
	0x100, 0x100, 0x100	/* IV_255 */
};

static const int *gamma_default = gamma_default_0;

static const struct formular_t gamma_formula[IV_MAX] = {
	{0, 860},	/* IV_VT */
	{0, 256},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{64, 320},
	{129, 860}	/* IV_255 */
};

static const int vt_voltage_value[] = {
	0, 12, 24, 36, 48, 60, 72, 84, 96, 108, 138, 148, 158, 168, 178, 186
};

static const int m_gray[IBRIGHTNESS_MAX][IV_MAX] = {
	/* VT ~ V255 */
	{0, 1, 7, 11, 20, 24, 32, 50, 84, 113, 140},
	{0, 1, 7, 11, 19, 24, 31, 50, 84, 113, 140},
	{0, 1, 7, 11, 18, 23, 31, 50, 84, 113, 140},
	{0, 1, 7, 11, 18, 23, 31, 50, 84, 113, 140},
	{0, 1, 7, 10, 17, 23, 31, 50, 84, 113, 140},
	{0, 1, 7, 10, 17, 22, 32, 50, 84, 113, 140},
	{0, 1, 12, 14, 19, 25, 32, 50, 84, 113, 140},
	{0, 1, 15, 16, 20, 25, 33, 50, 84, 113, 140},
	{0, 1, 16, 17, 21, 26, 33, 50, 84, 113, 140},
	{0, 1, 17, 18, 22, 26, 33, 50, 84, 113, 140},
	{0, 1, 18, 19, 23, 27, 33, 50, 84, 113, 140},
	{0, 1, 19, 20, 23, 27, 33, 50, 84, 113, 140},
	{0, 1, 19, 20, 23, 27, 33, 50, 84, 113, 140},
	{0, 1, 19, 20, 23, 27, 33, 50, 84, 113, 140},
	{0, 1, 19, 20, 23, 27, 33, 50, 84, 113, 140},
	{0, 1, 19, 19, 22, 26, 33, 50, 84, 113, 140},
	{0, 1, 18, 19, 22, 25, 33, 50, 84, 113, 140},
	{0, 1, 17, 18, 21, 25, 33, 50, 84, 113, 140},
	{0, 1, 17, 18, 21, 25, 32, 49, 84, 113, 140},
	{0, 1, 16, 18, 21, 25, 32, 49, 84, 113, 140},
	{0, 1, 15, 17, 20, 24, 32, 49, 84, 113, 140},
	{0, 1, 15, 17, 20, 24, 32, 49, 84, 113, 140},
	{0, 1, 14, 16, 19, 23, 32, 49, 84, 113, 140},
	{0, 1, 14, 15, 19, 23, 31, 49, 84, 113, 140},
	{0, 1, 14, 15, 19, 23, 31, 49, 84, 113, 140},
	{0, 1, 14, 15, 19, 23, 31, 49, 84, 113, 140},
	{0, 1, 13, 14, 18, 23, 31, 49, 84, 113, 140},
	{0, 1, 13, 14, 18, 23, 31, 49, 84, 113, 140},
	{0, 1, 12, 13, 18, 22, 30, 49, 84, 113, 140},
	{0, 1, 12, 13, 18, 22, 30, 49, 84, 113, 140},
	{0, 1, 12, 13, 17, 21, 30, 49, 84, 113, 140},
	{0, 1, 11, 12, 17, 21, 30, 49, 84, 113, 140},
	{0, 1, 11, 12, 16, 21, 30, 49, 84, 113, 140},
	{0, 1, 10, 12, 16, 21, 30, 49, 84, 113, 140},
	{0, 1, 10, 11, 16, 21, 30, 49, 84, 113, 140},
	{0, 1, 10, 11, 16, 21, 30, 49, 84, 113, 140},
	{0, 1, 9, 11, 16, 21, 30, 49, 84, 113, 140},
	{0, 1, 9, 11, 16, 21, 30, 50, 85, 115, 142},
	{0, 1, 9, 11, 16, 22, 31, 51, 87, 118, 146},
	{0, 1, 9, 11, 16, 23, 32, 52, 90, 121, 150},
	{0, 1, 10, 11, 17, 23, 32, 54, 92, 124, 154},
	{0, 1, 10, 11, 17, 24, 33, 56, 96, 127, 158},
	{0, 1, 10, 11, 18, 24, 34, 58, 99, 130, 163},
	{0, 1, 10, 11, 18, 25, 35, 59, 101, 134, 167},
	{0, 1, 10, 12, 18, 26, 36, 61, 105, 138, 172},
	{0, 1, 10, 12, 19, 26, 37, 63, 108, 141, 176},
	{0, 1, 10, 12, 19, 27, 38, 65, 111, 146, 182},
	{0, 1, 11, 12, 20, 28, 39, 66, 114, 149, 186},
	{0, 1, 11, 12, 20, 28, 40, 68, 116, 153, 191},
	{0, 1, 11, 12, 21, 29, 41, 70, 120, 158, 197},
	{0, 1, 11, 12, 21, 30, 42, 72, 123, 162, 202},
	{0, 1, 11, 13, 21, 30, 43, 73, 126, 166, 207},
	{0, 1, 11, 13, 21, 30, 44, 75, 129, 170, 212},
	{0, 1, 10, 12, 21, 31, 44, 75, 129, 171, 213},
	{0, 1, 10, 12, 21, 31, 44, 75, 129, 171, 213},
	{0, 1, 10, 12, 21, 31, 44, 75, 129, 171, 213},
	{0, 1, 9, 11, 20, 31, 44, 75, 129, 171, 213},
	{0, 1, 9, 11, 20, 31, 44, 75, 129, 171, 213},
	{0, 1, 9, 11, 21, 31, 45, 76, 132, 174, 218},
	{0, 1, 8, 11, 21, 32, 46, 78, 135, 179, 223},
	{0, 1, 8, 11, 22, 33, 47, 80, 138, 182, 228},
	{0, 1, 8, 11, 22, 33, 48, 81, 141, 186, 233},
	{0, 1, 8, 11, 23, 34, 49, 82, 144, 190, 238},
	{0, 1, 8, 11, 23, 34, 50, 84, 146, 194, 242},
	{0, 1, 8, 11, 23, 34, 51, 85, 148, 198, 246},
	{0, 1, 7, 11, 23, 35, 51, 86, 149, 198, 248},
	{0, 1, 7, 11, 23, 35, 52, 86, 150, 200, 250},
	{0, 1, 7, 11, 23, 35, 52, 86, 150, 200, 250},
	{0, 1, 7, 11, 23, 35, 52, 86, 150, 200, 250},
	{0, 1, 7, 11, 23, 35, 52, 86, 150, 200, 250},
	{0, 1, 7, 11, 23, 35, 52, 86, 150, 200, 250},
	{0, 1, 7, 11, 24, 36, 52, 87, 151, 202, 252},
	{0, 1, 7, 11, 24, 36, 52, 88, 152, 203, 253},
	{0, 1, 7, 11, 23, 35, 51, 87, 151, 203, 255},
};


static const int offset_color[IBRIGHTNESS_MAX][CI_MAX * IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 0, 0, 0, 0, -33, 0, 29, -40, 0, 41, -55, 0, 11, -35, 0, 10, -30, 0, 2, -12, 0, 1, -6, 0, -2, -3, 0, -1, -5, 0, 0},
	{0, 0, 0, 0, 0, 0, -33, 0, 29, -40, 0, 35, -50, 0, 10, -30, 0, 7, -25, 0, -1, -10, 0, 0, -3, 0, -2, -3, 0, -1, -4, 0, -1},
	{0, 0, 0, 0, 0, 0, -33, 0, 29, -40, 0, 29, -48, 0, 10, -28, 0, 7, -20, 0, -3, -8, 0, -1, -3, 0, -2, -3, 0, -1, -3, 0, -1},
	{0, 0, 0, 0, 0, 0, -33, 0, 29, -40, 0, 28, -45, 0, 7, -27, 0, 5, -18, 0, -5, -7, 0, -1, -3, 0, -2, -2, 0, 0, -2, 0, -1},
	{0, 0, 0, 0, 0, 0, -33, 0, 29, -35, 0, 30, -40, 0, 10, -22, 0, 5, -17, 0, -6, -6, 0, -2, -2, 0, -1, -2, 0, 0, -2, 0, -1},
	{0, 0, 0, 0, 0, 0, -33, 0, 25, -35, 0, 28, -32, 0, 8, -22, 0, 4, -13, 0, -6, -5, 0, -2, -2, 0, -1, -1, 0, 0, -2, 0, -1},
	{0, 0, 0, 0, 0, 0, -33, 0, 4, -35, 0, 8, -28, 0, 2, -16, 0, -1, -13, 0, -8, -5, 0, -2, -2, 0, -1, -1, 0, 0, -2, 0, -1},
	{0, 0, 0, 0, 0, 0, -33, 0, 0, -28, 0, 0, -26, 0, -3, -16, 0, -3, -11, 0, -7, -5, 0, -2, -2, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -30, 0, -3, -24, 0, -3, -19, 0, -6, -14, 0, -3, -11, 0, -8, -5, 0, -3, -2, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -26, 0, -4, -22, 0, -8, -15, 0, -6, -15, 0, -5, -11, 0, -9, -5, 0, -3, -1, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -24, 0, -5, -19, 0, -11, -13, 0, -7, -11, 0, -3, -11, 0, -10, -5, 0, -3, -1, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -22, 0, -5, -15, 0, -11, -13, 0, -8, -11, 0, -5, -10, 0, -9, -5, 0, -4, -1, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -22, 0, -5, -15, 0, -12, -13, 0, -10, -10, 0, -5, -10, 0, -10, -5, 0, -4, -1, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -22, 0, -5, -15, 0, -14, -12, 0, -11, -10, 0, -5, -10, 0, -11, -4, 0, -4, -1, 0, -1, -2, 0, -1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -20, 0, -6, -14, 0, -15, -13, 0, -12, -9, 0, -6, -10, 0, -11, -4, 0, -3, -2, 0, -2, -1, 0, 0, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -20, 0, -6, -14, 0, -12, -12, 0, -13, -11, 0, -8, -9, 0, -10, -3, 0, -3, -2, 0, -2, -1, 0, 0, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -21, 0, -8, -14, 0, -14, -9, 0, -9, -11, 0, -8, -8, 0, -10, -3, 0, -3, -1, 0, -1, -1, 0, 0, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -22, 0, -7, -14, 0, -14, -11, 0, -12, -11, 0, -8, -7, 0, -9, -3, 0, -3, -1, 0, -1, -1, 0, 0, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -22, 0, -7, -13, 0, -15, -10, 0, -11, -10, 0, -7, -7, 0, -10, -4, 0, -2, -1, 0, -1, -1, 0, 0, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -22, 0, -7, -13, 0, -15, -9, 0, -10, -10, 0, -7, -6, 0, -9, -4, 0, -2, -1, 0, -1, -2, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -21, 0, -7, -13, 0, -15, -10, 0, -11, -9, 0, -6, -6, 0, -9, -3, 0, -1, -1, 0, -1, -2, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -21, 0, -6, -13, 0, -14, -10, 0, -11, -9, 0, -6, -6, 0, -8, -3, 0, -2, 0, 0, 0, -2, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -20, 0, -6, -13, 0, -14, -11, 0, -13, -10, 0, -6, -5, 0, -8, -3, 0, -2, 0, 0, 0, -2, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -18, 0, -6, -13, 0, -20, -10, 0, -11, -10, 0, -6, -6, 0, -8, -3, 0, -2, 0, 0, 0, -2, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -16, 0, -6, -13, 0, -20, -10, 0, -11, -9, 0, -6, -6, 0, -8, -3, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -13, 0, -6, -13, 0, -18, -10, 0, -11, -8, 0, -5, -6, 0, -8, -3, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -11, 0, -6, -13, 0, -19, -10, 0, -12, -8, 0, -5, -5, 0, -7, -3, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -6, -14, 0, -18, -9, 0, -11, -7, 0, -3, -4, 0, -7, -3, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -6, -15, 0, -21, -8, 0, -8, -6, 0, -3, -3, 0, -6, -3, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -1, 0, -5, -15, 0, -21, -7, 0, -8, -6, 0, -3, -3, 0, -6, -2, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -2, 0, -6, -14, 0, -16, -7, 0, -8, -6, 0, -4, -3, 0, -6, -2, 0, -1, 0, 0, 0, -1, 0, 0, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -2, 0, -7, -15, 0, -20, -7, 0, -8, -5, 0, -3, -3, 0, -6, -2, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -2, 0, -7, -15, 0, -17, -7, 0, -9, -5, 0, -3, -3, 0, -6, -2, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, -9, -14, 0, -14, -7, 0, -9, -5, 0, -2, -3, 0, -6, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, 2, 0, -5, -18, 0, -20, -6, 0, -8, -4, 0, -1, -3, 0, -6, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -1, 0, -7, -16, 0, -17, -5, 0, -7, -4, 0, -1, -2, 0, -5, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, 1, 0, -10, -15, 0, -15, -4, 0, -5, -4, 0, -1, -2, 0, -5, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, 1, 0, -10, -15, 0, -14, -4, 0, -5, -4, 0, -1, -2, 0, -6, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 1, 0, -10, -15, 0, -14, -5, 0, -6, -4, 0, -1, -1, 0, -6, 0, 0, 1, 0, 0, 0, -1, 0, 0, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, 1, 0, -10, -15, 0, -14, -6, 0, -7, -4, 0, -1, -1, 0, -5, -1, 0, 0, 1, 0, 0, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, -3, 0, -8, -15, 0, -14, -5, 0, -6, -4, 0, 0, -2, 0, -5, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -3, 0, -7, -15, 0, -14, -5, 0, -5, -4, 0, 0, 0, 0, -5, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, -3, 0, -7, -15, 0, -16, -5, 0, -5, -3, 0, 1, -2, 0, -5, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -3, 0, -7, -15, 0, -16, -5, 0, -5, -3, 0, 1, -1, 0, -5, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0},
	{0, 0, 0, 0, 0, 0, -5, 0, -11, -14, 0, -13, -5, 0, -5, -3, 0, 0, 0, 0, -4, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -7, 0, -12, -14, 0, -13, -5, 0, -4, -2, 0, 0, -1, 0, -4, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -7, 0, -12, -13, 0, -13, -5, 0, -4, -1, 0, 0, -1, 0, -3, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -4, 0, -6, -13, 0, -13, -4, 0, -5, 0, 0, 1, -1, 0, -3, 0, 0, 1, -1, 0, -1, 1, 0, 1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -4, 0, -6, -13, 0, -13, -3, 0, -4, -1, 0, 0, -2, 0, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -4, 0, -6, -13, 0, -14, -3, 0, -3, -1, 0, 0, -1, 0, -3, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -4, 0, -6, -13, 0, -14, -3, 0, -3, -1, 0, 0, 0, 0, -2, 0, 0, 1, 0, 0, -1, 0, 0, 1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -9, -11, 0, -10, -3, 0, -3, -1, 0, 0, -1, 0, -3, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 0, -9, -11, 0, -10, -3, 0, -3, -2, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -10, -13, 0, -13, -2, 0, -3, -2, 0, -1, 0, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -6, 0, -10, -11, 0, -10, -2, 0, -3, -2, 0, -1, 0, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -5, 0, -8, -11, 0, -10, -2, 0, -2, -1, 0, -1, 0, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -6, 0, -10, -11, 0, -10, -2, 0, -2, -1, 0, -1, 0, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, 1, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -5, 0, -7, -10, 0, -8, -2, 0, -2, 0, 0, 0, 0, 0, -2, 1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, -2},
	{0, 0, 0, 0, 0, 0, -5, 0, -7, -9, 0, -8, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -7, 0, -11, -8, 0, -7, 0, 0, 0, -1, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -7, 0, -9, -6, 0, -5, -1, 0, -1, -1, 0, 0, 1, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -7, -5, 0, -4, -2, 0, -1, -1, 0, -1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 0, -6, -5, 0, -4, -2, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -5, -4, 0, -3, -1, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, -1, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 0, -4, -3, 0, -2, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, 0, 0, 1, 0, 1, -1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 0, -4, -2, 0, -1, -1, 0, 0, 1, 0, -1, -1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -5, 0, -3, -2, 0, -1, -1, 0, 0, 1, 0, -1, -1, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -4, 0, -3, -2, 0, -1, -1, 0, 0, 1, 0, -1, -1, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -3, 0, -1, -1, 0, 0, 0, 0, 1, 1, 0, -1, -1, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -3, 0, -1, -1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -2, 0, -2, 0, 0, 0, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -2, 0, -3, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};


#ifdef CONFIG_LCD_HMT
enum {
	IBRIGHTNESS_HMT_010NIT,
	IBRIGHTNESS_HMT_011NIT,
	IBRIGHTNESS_HMT_012NIT,
	IBRIGHTNESS_HMT_013NIT,
	IBRIGHTNESS_HMT_014NIT,
	IBRIGHTNESS_HMT_015NIT,
	IBRIGHTNESS_HMT_016NIT,
	IBRIGHTNESS_HMT_017NIT,
	IBRIGHTNESS_HMT_019NIT,
	IBRIGHTNESS_HMT_020NIT,
	IBRIGHTNESS_HMT_021NIT,
	IBRIGHTNESS_HMT_022NIT,
	IBRIGHTNESS_HMT_023NIT,
	IBRIGHTNESS_HMT_025NIT,
	IBRIGHTNESS_HMT_027NIT,
	IBRIGHTNESS_HMT_029NIT,
	IBRIGHTNESS_HMT_031NIT,
	IBRIGHTNESS_HMT_033NIT,
	IBRIGHTNESS_HMT_035NIT,
	IBRIGHTNESS_HMT_037NIT,
	IBRIGHTNESS_HMT_039NIT,
	IBRIGHTNESS_HMT_041NIT,
	IBRIGHTNESS_HMT_044NIT,
	IBRIGHTNESS_HMT_047NIT,
	IBRIGHTNESS_HMT_050NIT,
	IBRIGHTNESS_HMT_053NIT,
	IBRIGHTNESS_HMT_056NIT,
	IBRIGHTNESS_HMT_060NIT,
	IBRIGHTNESS_HMT_064NIT,
	IBRIGHTNESS_HMT_068NIT,
	IBRIGHTNESS_HMT_072NIT,
	IBRIGHTNESS_HMT_077NIT,
	IBRIGHTNESS_HMT_082NIT,
	IBRIGHTNESS_HMT_087NIT,
	IBRIGHTNESS_HMT_093NIT,
	IBRIGHTNESS_HMT_099NIT,
	IBRIGHTNESS_HMT_105NIT,
	IBRIGHTNESS_HMT_MAX
};

static const int index_brightness_table_hmt[IBRIGHTNESS_HMT_MAX] = {
	10,	/* IBRIGHTNESS_HMT_010NIT */
	11,	/* IBRIGHTNESS_HMT_011NIT */
	12,	/* IBRIGHTNESS_HMT_012NIT */
	13,	/* IBRIGHTNESS_HMT_013NIT */
	14,	/* IBRIGHTNESS_HMT_014NIT */
	15,	/* IBRIGHTNESS_HMT_015NIT */
	16,	/* IBRIGHTNESS_HMT_016NIT */
	17,	/* IBRIGHTNESS_HMT_017NIT */
	19,	/* IBRIGHTNESS_HMT_019NIT */
	20,	/* IBRIGHTNESS_HMT_020NIT */
	21,	/* IBRIGHTNESS_HMT_021NIT */
	22,	/* IBRIGHTNESS_HMT_022NIT */
	23,	/* IBRIGHTNESS_HMT_023NIT */
	25,	/* IBRIGHTNESS_HMT_025NIT */
	27,	/* IBRIGHTNESS_HMT_027NIT */
	29,	/* IBRIGHTNESS_HMT_029NIT */
	31,	/* IBRIGHTNESS_HMT_031NIT */
	33,	/* IBRIGHTNESS_HMT_033NIT */
	35,	/* IBRIGHTNESS_HMT_035NIT */
	37,	/* IBRIGHTNESS_HMT_037NIT */
	39,	/* IBRIGHTNESS_HMT_039NIT */
	41,	/* IBRIGHTNESS_HMT_041NIT */
	44,	/* IBRIGHTNESS_HMT_044NIT */
	47,	/* IBRIGHTNESS_HMT_047NIT */
	50,	/* IBRIGHTNESS_HMT_050NIT */
	53,	/* IBRIGHTNESS_HMT_053NIT */
	56,	/* IBRIGHTNESS_HMT_056NIT */
	60,	/* IBRIGHTNESS_HMT_060NIT */
	64,	/* IBRIGHTNESS_HMT_064NIT */
	68,	/* IBRIGHTNESS_HMT_068NIT */
	72,	/* IBRIGHTNESS_HMT_072NIT */
	77,	/* IBRIGHTNESS_HMT_077NIT */
	82,	/* IBRIGHTNESS_HMT_082NIT */
	87,	/* IBRIGHTNESS_HMT_087NIT */
	93,	/* IBRIGHTNESS_HMT_093NIT */
	99,	/* IBRIGHTNESS_HMT_099NIT */
	105,	/* IBRIGHTNESS_HMT_105NIT */
};

static const int m_gray_hmt[IBRIGHTNESS_HMT_MAX][IV_MAX] = {
	/* VT ~ V255 */
	{0, 1, 13, 14, 16, 19, 24, 36, 59, 78, 96},
	{0, 1, 13, 14, 16, 20, 24, 37, 61, 80, 100},
	{0, 1, 13, 14, 17, 20, 26, 38, 64, 84, 105},
	{0, 1, 15, 14, 17, 21, 26, 40, 66, 86, 108},
	{0, 1, 13, 14, 17, 21, 27, 41, 68, 89, 112},
	{0, 1, 13, 14, 18, 22, 28, 42, 71, 92, 116},
	{0, 1, 13, 14, 18, 22, 28, 43, 73, 95, 119},
	{0, 1, 13, 14, 18, 22, 29, 44, 74, 97, 122},
	{0, 1, 13, 14, 18, 23, 30, 46, 78, 103, 128},
	{0, 1, 14, 14, 19, 23, 31, 47, 79, 106, 131},
	{0, 1, 13, 14, 19, 23, 31, 48, 81, 107, 133},
	{0, 1, 14, 15, 19, 24, 32, 49, 83, 110, 136},
	{0, 1, 14, 15, 20, 24, 32, 50, 85, 113, 139},
	{0, 1, 14, 15, 20, 25, 33, 51, 87, 116, 143},
	{0, 1, 14, 15, 20, 25, 34, 53, 89, 120, 147},
	{0, 1, 14, 15, 20, 26, 35, 55, 93, 124, 152},
	{0, 1, 14, 15, 20, 27, 36, 57, 97, 128, 157},
	{0, 1, 14, 15, 21, 27, 37, 59, 99, 131, 161},
	{0, 1, 14, 16, 21, 28, 38, 61, 102, 135, 166},
	{0, 1, 14, 16, 21, 29, 38, 62, 105, 138, 170},
	{0, 1, 14, 16, 22, 29, 39, 64, 107, 141, 174},
	{0, 1, 14, 16, 22, 29, 40, 65, 109, 143, 177},
	{0, 1, 15, 16, 22, 30, 41, 67, 113, 148, 183},
	{0, 1, 15, 16, 23, 31, 42, 69, 116, 151, 188},
	{0, 1, 15, 17, 23, 31, 43, 71, 120, 156, 193},
	{0, 1, 15, 17, 24, 32, 44, 72, 123, 160, 198},
	{0, 1, 15, 17, 24, 33, 45, 74, 125, 163, 202},
	{0, 1, 15, 17, 24, 33, 46, 76, 129, 168, 208},
	{0, 1, 15, 17, 25, 34, 48, 78, 132, 173, 213},
	{0, 1, 15, 17, 25, 35, 48, 80, 136, 178, 218},
	{0, 1, 16, 18, 26, 36, 50, 83, 140, 183, 223},
	{0, 1, 11, 13, 21, 30, 42, 70, 120, 157, 196},
	{0, 1, 11, 13, 21, 30, 43, 72, 123, 161, 201},
	{0, 1, 11, 14, 22, 31, 44, 74, 126, 166, 206},
	{0, 1, 12, 14, 22, 32, 45, 76, 131, 172, 212},
	{0, 1, 12, 14, 23, 33, 46, 78, 133, 175, 217},
	{0, 1, 12, 14, 23, 33, 48, 80, 137, 181, 222},
};

static const int offset_color_hmt[IBRIGHTNESS_HMT_MAX][CI_MAX * IV_MAX] = {
	/* VT ~ V255 */
	{0, 0, 0, 0, 0, 0, -3, 1, -2, -12, 3, -6, -16, 4, -10, -10, 4, -8, -7, 4, -8, -3, 2, -6, -1, 0, -1, -2, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -3, 0, -2, -14, 3, -7, -16, 5, -11, -9, 3, -7, -8, 4, -8, 0, 2, -5, -1, 0, 0, -1, 0, -1, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -3, 0, -2, -17, 4, -9, -14, 4, -9, -10, 4, -8, -7, 3, -8, -2, 2, -5, -1, 0, 0, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -3, 0, -1, -14, 4, -8, -15, 4, -10, -8, 3, -7, -6, 3, -8, -1, 2, -4, -1, 0, 0, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -3, 0, -2, -17, 4, -8, -15, 4, -10, -9, 3, -8, -6, 3, -8, -1, 2, -4, -2, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -2, 1, -2, -21, 5, -11, -13, 4, -9, -7, 3, -6, -6, 3, -8, -1, 1, -3, -2, 0, -1, -1, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -4, 1, -2, -20, 5, -11, -13, 4, -9, -7, 3, -6, -6, 3, -8, -2, 1, -4, -2, 0, -1, 0, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -6, 1, -3, -20, 5, -11, -11, 4, -8, -8, 3, -7, -5, 3, -8, -1, 1, -2, -2, 0, -1, 0, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -8, 1, -3, -19, 5, -11, -13, 5, -10, -7, 3, -6, -4, 3, -8, -1, 0, -2, -2, 0, -1, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, -1, 0, -1, -25, 6, -14, -10, 4, -8, -7, 3, -7, -4, 3, -7, -1, 0, -2, -1, 0, 0, 0, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -4, 1, -2, -22, 6, -13, -10, 4, -8, -7, 3, -7, -3, 3, -7, -2, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -2, 1, -2, -16, 5, -11, -12, 4, -9, -7, 3, -7, -3, 3, -7, -3, 0, -2, -1, 0, 0, 0, 0, -1, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -4, 1, -3, -19, 6, -13, -8, 3, -7, -7, 3, -7, -3, 3, -7, -2, 0, -2, -2, 0, -1, 0, 0, 0, 0, 0, -1},
	{0, 0, 0, 0, 0, 0, -1, 1, -2, -20, 6, -13, -9, 4, -8, -7, 2, -6, -2, 3, -8, -2, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -5, 1, -3, -19, 6, -13, -9, 4, -8, -7, 2, -6, -3, 3, -8, -2, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -2, 1, -2, -20, 6, -13, -11, 4, -9, -6, 2, -6, -2, 3, -7, -3, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -3, 1, -3, -21, 6, -13, -11, 4, -10, -6, 2, -5, -1, 3, -6, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -4, 1, -3, -23, 7, -15, -8, 4, -8, -5, 2, -6, -3, 3, -6, -2, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 1, -4, -18, 6, -13, -10, 3, -8, -5, 2, -6, -3, 2, -6, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -7, 2, -4, -19, 6, -13, -9, 4, -8, -4, 2, -5, -3, 2, -5, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 2, -4, -19, 7, -14, -8, 3, -7, -4, 2, -6, -3, 2, -5, -1, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, -7, 1, -4, -19, 7, -14, -7, 3, -7, -4, 2, -5, -1, 2, -5, 0, 0, 0, -1, 0, 0, -1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 1, -4, -19, 6, -14, -9, 4, -8, -3, 2, -5, -2, 2, -5, -1, 0, 0, -2, 0, -1, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, -4, 1, -3, -20, 7, -14, -8, 3, -8, -2, 2, -4, -2, 1, -4, -2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, -6, 2, -4, -17, 6, -13, -7, 3, -7, -4, 2, -6, -1, 1, -3, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 0, 0, 0, -6, 2, -4, -19, 6, -14, -6, 3, -7, -3, 2, -5, -2, 1, -4, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
	{0, 0, 0, 0, 0, 0, -7, 2, -4, -18, 6, -14, -7, 3, -7, -2, 2, -6, -2, 1, -3, -1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3},
	{0, 0, 0, 0, 0, 0, -7, 2, -5, -18, 6, -14, -6, 3, -6, -3, 2, -6, -3, 1, -4, 0, 0, 0, -1, 0, 0, 0, 0, 0, 2, 0, 2},
	{0, 0, 0, 0, 0, 0, -5, 2, -4, -18, 7, -14, -7, 3, -6, 0, 2, -5, -2, 1, -2, -2, 0, -1, -1, 0, -1, 0, 0, 0, 2, 0, 2},
	{0, 0, 0, 0, 0, 0, -6, 2, -4, -18, 7, -14, -7, 3, -7, -1, 2, -5, -2, 1, -2, -1, 0, 0, 0, 0, -1, 0, 0, 0, 3, 0, 3},
	{0, 0, 0, 0, 0, 0, -7, 2, -5, -16, 6, -13, -5, 3, -6, 0, 2, -5, -3, 0, -2, -1, 0, 0, -1, 0, -2, 0, 0, 0, 2, 0, 3},
	{0, 0, 0, 0, 0, 0, -7, 2, -5, -15, 6, -13, -5, 2, -5, -2, 1, -3, -1, 1, -3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2},
	{0, 0, 0, 0, 0, 0, -7, 2, -5, -14, 6, -13, -4, 2, -4, -2, 1, -4, -1, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3},
	{0, 0, 0, 0, 0, 0, -9, 3, -7, -13, 5, -11, -3, 2, -4, -1, 1, -4, -2, 1, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3},
	{0, 0, 0, 0, 0, 0, -6, 2, -5, -14, 5, -12, -3, 2, -4, -1, 1, -4, -1, 1, -2, 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 0, 3},
	{0, 0, 0, 0, 0, 0, -6, 2, -5, -12, 5, -11, -4, 1, -4, -2, 1, -4, -1, 0, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 3},
	{0, 0, 0, 0, 0, 0, -6, 2, -5, -13, 5, -11, -4, 1, -4, -1, 1, -4, -2, 0, -2, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 3},
};
#endif
#endif /* __DYNAMIC_AID_XXXX_H */