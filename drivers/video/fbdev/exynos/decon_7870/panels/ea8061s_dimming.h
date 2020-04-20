/* linux/drivers/video/exynos/decon_7580/panels/s6e88a0_dimming.h
 *
 * Header file for Samsung AID Dimming Driver.
 *
 * Copyright (c) 2013 Samsung Electronics
 * Minwoo Kim <minwoo7945.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __S6E88AO_DIMMING_H__
#define __S6E88AO_DIMMING_H__

#include <linux/types.h>
#include <linux/kernel.h>

/* CAUTION !!!
 * This file was generated by Smart Dimming Header Generation Tool Do not modify manually
 */

struct v_constant {
	int nu;
	int de;
};

enum {
	V0 = 0,
	V3,
	V11,
	V23,
	V35,
	V51,
	V87,
	V151,
	V203,
	V255,
	VMAX
};

#define VT						V0
#define NUM_VREF				VMAX	/* 10 */

#define LDI_MODEL				EA8061S

#define MAX_BRIGHTNESS			360
#define MAX_GRADATION			256

#define MULTIPLY_VALUE			1024
#define MULTIPLE_VREGOUT		6758
#define DOUBLE_MULTIPLE_VREGOUT		6920601

#define REFERENCE_GAMMA			2.2
#define MAX_GRAYSCALE			255

#define TBL_INDEX_V0			0
#define TBL_INDEX_V3			3
#define TBL_INDEX_V11			11
#define TBL_INDEX_V23			23
#define TBL_INDEX_V35			35
#define TBL_INDEX_V51			51
#define TBL_INDEX_V87			87
#define TBL_INDEX_V151			151
#define TBL_INDEX_V203			203
#define TBL_INDEX_V255			255


#define OLED_CMD_GAMMA_CNT		34
#define OLED_CMD_ELVSS_CNT		3
#define OLED_CMD_AID_CNT		6
#define OLED_CMD_GAMMA			0xCA

#define MAX_BR_INFO				63

#define HAS_NO_V0_GAMMA

#define dimm_err(fmt, ...)					\
	{							\
		pr_err(pr_fmt(fmt), ##__VA_ARGS__);		\
	}

#define dimm_info(fmt, ...)					\
	{							\
		pr_info(pr_fmt(fmt), ##__VA_ARGS__);		\
	}

#define dimm_dbg(fmt, ...)					\
	{							\
		pr_debug(pr_fmt(fmt), ##__VA_ARGS__);		\
	}

static const unsigned int vref_index[NUM_VREF] = {
	TBL_INDEX_V0,
	TBL_INDEX_V3,
	TBL_INDEX_V11,
	TBL_INDEX_V23,
	TBL_INDEX_V35,
	TBL_INDEX_V51,
	TBL_INDEX_V87,
	TBL_INDEX_V151,
	TBL_INDEX_V203,
	TBL_INDEX_V255,
};

static const int vreg_element_max[NUM_VREF] = {
	0x0f,
	0xff,
	0xff,
	0xff,
	0xff,
	0xff,
	0xff,
	0xff,
	0xff,
	0x1ff,
};


static const struct v_constant vt_fix_const = {
	.nu = 0,
	.de = 860
};

static const struct v_constant fix_const[NUM_VREF] = {
	{.nu = 0,	.de = 860},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 64,	.de = 320},
	{.nu = 72,	.de = 860},
};


static const unsigned int vt_trans_volt[16] = {
	6920601,
	6824035,
	6727468,
	6630901,
	6534335,
	6437768,
	6341202,
	6244635,
	6148069,
	6051502,
	5810086,
	5729614,
	5649142,
	5568670,
	5488198,
	5423820,
};

static const unsigned int v255_trans_volt[512] = {

	6341202,
	6333155,
	6325107,
	6317060,
	6309013,
	6300966,
	6292919,
	6284871,
	6276824,
	6268777,
	6260730,
	6252683,
	6244635,
	6236588,
	6228541,
	6220494,
	6212447,
	6204399,
	6196352,
	6188305,
	6180258,
	6172210,
	6164163,
	6156116,
	6148069,
	6140022,
	6131974,
	6123927,
	6115880,
	6107833,
	6099786,
	6091738,
	6083691,
	6075644,
	6067597,
	6059550,
	6051502,
	6043455,
	6035408,
	6027361,
	6019313,
	6011266,
	6003219,
	5995172,
	5987125,
	5979077,
	5971030,
	5962983,
	5954936,
	5946889,
	5938841,
	5930794,
	5922747,
	5914700,
	5906652,
	5898605,
	5890558,
	5882511,
	5874464,
	5866416,
	5858369,
	5850322,
	5842275,
	5834228,
	5826180,
	5818133,
	5810086,
	5802039,
	5793992,
	5785944,
	5777897,
	5769850,
	5761803,
	5753755,
	5745708,
	5737661,
	5729614,
	5721567,
	5713519,
	5705472,
	5697425,
	5689378,
	5681331,
	5673283,
	5665236,
	5657189,
	5649142,
	5641095,
	5633047,
	5625000,
	5616953,
	5608906,
	5600858,
	5592811,
	5584764,
	5576717,
	5568670,
	5560622,
	5552575,
	5544528,
	5536481,
	5528434,
	5520386,
	5512339,
	5504292,
	5496245,
	5488198,
	5480150,
	5472103,
	5464056,
	5456009,
	5447961,
	5439914,
	5431867,
	5423820,
	5415773,
	5407725,
	5399678,
	5391631,
	5383584,
	5375537,
	5367489,
	5359442,
	5351395,
	5343348,
	5335301,
	5327253,
	5319206,
	5311159,
	5303112,
	5295064,
	5287017,
	5278970,
	5270923,
	5262876,
	5254828,
	5246781,
	5238734,
	5230687,
	5222640,
	5214592,
	5206545,
	5198498,
	5190451,
	5182403,
	5174356,
	5166309,
	5158262,
	5150215,
	5142167,
	5134120,
	5126073,
	5118026,
	5109979,
	5101931,
	5093884,
	5085837,
	5077790,
	5069743,
	5061695,
	5053648,
	5045601,
	5037554,
	5029506,
	5021459,
	5013412,
	5005365,
	4997318,
	4989270,
	4981223,
	4973176,
	4965129,
	4957082,
	4949034,
	4940987,
	4932940,
	4924893,
	4916846,
	4908798,
	4900751,
	4892704,
	4884657,
	4876609,
	4868562,
	4860515,
	4852468,
	4844421,
	4836373,
	4828326,
	4820279,
	4812232,
	4804185,
	4796137,
	4788090,
	4780043,
	4771996,
	4763949,
	4755901,
	4747854,
	4739807,
	4731760,
	4723712,
	4715665,
	4707618,
	4699571,
	4691524,
	4683476,
	4675429,
	4667382,
	4659335,
	4651288,
	4643240,
	4635193,
	4627146,
	4619099,
	4611051,
	4603004,
	4594957,
	4586910,
	4578863,
	4570815,
	4562768,
	4554721,
	4546674,
	4538627,
	4530579,
	4522532,
	4514485,
	4506438,
	4498391,
	4490343,
	4482296,
	4474249,
	4466202,
	4458154,
	4450107,
	4442060,
	4434013,
	4425966,
	4417918,
	4409871,
	4401824,
	4393777,
	4385730,
	4377682,
	4369635,
	4361588,
	4353541,
	4345494,
	4337446,
	4329399,
	4321352,
	4313305,
	4305257,
	4297210,
	4289163,
	4281116,
	4273069,
	4265021,
	4256974,
	4248927,
	4240880,
	4232833,
	4224785,
	4216738,
	4208691,
	4200644,
	4192597,
	4184549,
	4176502,
	4168455,
	4160408,
	4152360,
	4144313,
	4136266,
	4128219,
	4120172,
	4112124,
	4104077,
	4096030,
	4087983,
	4079936,
	4071888,
	4063841,
	4055794,
	4047747,
	4039700,
	4031652,
	4023605,
	4015558,
	4007511,
	3999463,
	3991416,
	3983369,
	3975322,
	3967275,
	3959227,
	3951180,
	3943133,
	3935086,
	3927039,
	3918991,
	3910944,
	3902897,
	3894850,
	3886802,
	3878755,
	3870708,
	3862661,
	3854614,
	3846566,
	3838519,
	3830472,
	3822425,
	3814378,
	3806330,
	3798283,
	3790236,
	3782189,
	3774142,
	3766094,
	3758047,
	3750000,
	3741953,
	3733905,
	3725858,
	3717811,
	3709764,
	3701717,
	3693669,
	3685622,
	3677575,
	3669528,
	3661481,
	3653433,
	3645386,
	3637339,
	3629292,
	3621245,
	3613197,
	3605150,
	3597103,
	3589056,
	3581008,
	3572961,
	3564914,
	3556867,
	3548820,
	3540772,
	3532725,
	3524678,
	3516631,
	3508584,
	3500536,
	3492489,
	3484442,
	3476395,
	3468348,
	3460300,
	3452253,
	3444206,
	3436159,
	3428111,
	3420064,
	3412017,
	3403970,
	3395923,
	3387875,
	3379828,
	3371781,
	3363734,
	3355687,
	3347639,
	3339592,
	3331545,
	3323498,
	3315450,
	3307403,
	3299356,
	3291309,
	3283262,
	3275214,
	3267167,
	3259120,
	3251073,
	3243026,
	3234978,
	3226931,
	3218884,
	3210837,
	3202790,
	3194742,
	3186695,
	3178648,
	3170601,
	3162553,
	3154506,
	3146459,
	3138412,
	3130365,
	3122317,
	3114270,
	3106223,
	3098176,
	3090129,
	3082081,
	3074034,
	3065987,
	3057940,
	3049893,
	3041845,
	3033798,
	3025751,
	3017704,
	3009656,
	3001609,
	2993562,
	2985515,
	2977468,
	2969420,
	2961373,
	2953326,
	2945279,
	2937232,
	2929184,
	2921137,
	2913090,
	2905043,
	2896996,
	2888948,
	2880901,
	2872854,
	2864807,
	2856759,
	2848712,
	2840665,
	2832618,
	2824571,
	2816523,
	2808476,
	2800429,
	2792382,
	2784335,
	2776287,
	2768240,
	2760193,
	2752146,
	2744099,
	2736051,
	2728004,
	2719957,
	2711910,
	2703862,
	2695815,
	2687768,
	2679721,
	2671674,
	2663626,
	2655579,
	2647532,
	2639485,
	2631438,
	2623390,
	2615343,
	2607296,
	2599249,
	2591201,
	2583154,
	2575107,
	2567060,
	2559013,
	2550965,
	2542918,
	2534871,
	2526824,
	2518777,
	2510729,
	2502682,
	2494635,
	2486588,
	2478541,
	2470493,
	2462446,
	2454399,
	2446352,
	2438304,
	2430257,
	2422210,
	2414163,
	2406116,
	2398068,
	2390021,
	2381974,
	2373927,
	2365880,
	2357832,
	2349785,
	2341738,
	2333691,
	2325644,
	2317596,
	2309549,
	2301502,
	2293455,
	2285407,
	2277360,
	2269313,
	2261266,
	2253219,
	2245171,
	2237124,
	2229077,
};

static const unsigned int v203_trans_volt[256] = {
	204, 208, 211, 214, 217, 220, 224, 227,
	230, 233, 236, 240, 243, 246, 249, 252,
	256, 259, 262, 265, 268, 272, 275, 278,
	281, 284, 288, 291, 294, 297, 300, 304,
	307, 310, 313, 316, 320, 323, 326, 329,
	332, 336, 339, 342, 345, 348, 352, 355,
	358, 361, 364, 368, 371, 374, 377, 380,
	384, 387, 390, 393, 396, 400, 403, 406,
	409, 412, 416, 419, 422, 425, 428, 432,
	435, 438, 441, 444, 448, 451, 454, 457,
	460, 464, 467, 470, 473, 476, 480, 483,
	486, 489, 492, 496, 499, 502, 505, 508,
	512, 515, 518, 521, 524, 528, 531, 534,
	537, 540, 544, 547, 550, 553, 556, 560,
	563, 566, 569, 572, 576, 579, 582, 585,
	588, 592, 595, 598, 601, 604, 608, 611,
	614, 617, 620, 624, 627, 630, 633, 636,
	640, 643, 646, 649, 652, 656, 659, 662,
	665, 668, 672, 675, 678, 681, 684, 688,
	691, 694, 697, 700, 704, 707, 710, 713,
	716, 720, 723, 726, 729, 732, 736, 739,
	742, 745, 748, 752, 755, 758, 761, 764,
	768, 771, 774, 777, 780, 784, 787, 790,
	793, 796, 800, 803, 806, 809, 812, 816,
	819, 822, 825, 828, 832, 835, 838, 841,
	844, 848, 851, 854, 857, 860, 864, 867,
	870, 873, 876, 880, 883, 886, 889, 892,
	896, 899, 902, 905, 908, 912, 915, 918,
	921, 924, 928, 931, 934, 937, 940, 944,
	947, 950, 953, 956, 960, 963, 966, 969,
	972, 976, 979, 982, 985, 988, 992, 995,
	998, 1001, 1004, 1008, 1011, 1014, 1017, 1020,
};

static const short int_tbl_v0_v3[2] = {
	341,	683,
};


static const short int_tbl_v3_v11[7] = {
	128,	256,	384,	512,	640,	768,	896,
};


static const short int_tbl_v11_v23[11] = {
	85,		171,	256,	341,	427,	512,	597,	683,
	768,	853,	939,
};


static const short int_tbl_v23_v35[11] = {
	85,		171,	256,	341,	427,	512,	597,	683,
	768,	853,	939,
};


static const short int_tbl_v35_v51[15] = {
	64,		128,	192,	256,	320,	384,	448,	512,
	576,	640,	704,	768,	832,	896,	960,
};


static const short int_tbl_v51_v87[35] = {
	28,		57,		85,		114,	142,	171,	199,	228,
	256,	284,	313,	341,	370,	398,	427,	455,
	484,	512,	540,	569,	597,	626,	654,	683,
	711,	740,	768,	796,	825,	853,	882,	910,
	939,	967,	996,
};


static const short int_tbl_v87_v151[63] = {
	16,		32,		48,		64,		80,		96,		112,	128,
	144,	160,	176,	192,	208,	224,	240,	256,
	272,	288,	304,	320,	336,	352,	368,	384,
	400,	416,	432,	448,	464,	480,	496,	512,
	528,	544,	560,	576,	592,	608,	624,	640,
	656,	672,	688,	704,	720,	736,	752,	768,
	784,	800,	816,	832,	848,	864,	880,	896,
	912,	928,	944,	960,	976,	992,	1008,
};


static const short int_tbl_v151_v203[51] = {
	20,		39,		59,		79,		98,		118,	138,	158,
	177,	197,	217,	236,	256,	276,	295,	315,
	335,	354,	374,	394,	414,	433,	453,	473,
	492,	512,	532,	551,	571,	591,	610,	630,
	650,	670,	689,	709,	729,	748,	768,	788,
	807,	827,	847,	866,	886,	906,	926,	945,
	965,	985,	1004,
};


static const short int_tbl_v203_v255[51] = {
	20,		39,		59,		79,		98,		118,	138,	158,
	177,	197,	217,	236,	256,	276,	295,	315,
	335,	354,	374,	394,	414,	433,	453,	473,
	492,	512,	532,	551,	571,	591,	610,	630,
	650,	670,	689,	709,	729,	748,	768,	788,
	807,	827,	847,	866,	886,	906,	926,	945,
	965,	985,	1004,
};

#endif
