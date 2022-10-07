#include <common.h>

struct Texture
{
	const char * front;
	const char * back;
	const char * floor;
	const char * brown;
	const char * motorside;
	const char * motortop;
	const char * bridge;
	const char * exhaust;
};

char front[256] __attribute__ ((section (".data"))) = {
0x10,0x32,0x42,0x65,0x87,0x99,0x88,0xaa,0x57,0xa6,0xab,0x66,0x87,0x98,0xb9,0xbb,0x10,0x32,0xc2,0x54,0x66,0x77,0x67,0x66,0x45,0x86,0x83,0x46,0x66,0x77,0x77,0xaa,0x10,0x32,0xd2,0x4c,0x54,0x55,0x55,0x55,0xc4,0xa6,0xa3,0xc6,0x54,0x55,0x55,0x55,0x10,0x3e,0xde,0xcd,0x4c,0x44,0x44,0xc4,0xdd,0xa6,0xab,0xd6,0xcd,0x44,0x44,0x44,0x10,0xfe,0xde,0xdd,0xcd,0xcc,0xdd,0xdd,0xdd,0x76,0x79,0xd6,0xdd,0xdd,0xcc,0xdd,0x10,0xfe,0xde,0xcd,0xcc,0xcc,0xcc,0xdd,0xdd,0x76,0x79,0xd6,0xdd,0xcd,0xcc,0xcc,0x10,0xfe,0xde,0x4c,0x54,0x55,0x55,0xc4,0xcc,0x76,0x79,0xd6,0x4c,0x54,0x55,0x55,0x10,0xfe,0xce,0x54,0x65,0x66,0x66,0x56,0xc4,0x76,0x79,0xc6,0x65,0x66,0x66,0x66,0x10,0xfe,0x4e,0x65,0x76,0x77,0x77,0x77,0xc5,0x76,0x78,0x56,0xa7,0x8a,0x98,0x99,0x10,0xfe,0x4e,0x65,0x77,0x77,0x87,0x78,0x46,0x76,0x78,0x66,0x8a,0xb9,0xbb,0x3b,0x10,0x2e,0x4e,0x65,0x76,0x77,0x77,0x77,0xc6,0x76,0x78,0x56,0x77,0x8a,0x99,0x99,0x10,0x2e,0x4e,0x54,0x66,0x77,0x77,0x77,0xc6,0x76,0x78,0x56,0x76,0x77,0x77,0x77,0x10,0x2e,0x4e,0x54,0x66,0x76,0x77,0x67,0xc5,0x76,0x7a,0x46,0x66,0x77,0x77,0x77,0x10,0x2e,0xce,0x4c,0x55,0x66,0x66,0x56,0xd4,0x76,0x7a,0xc6,0x65,0x66,0x66,0x66,0x10,0x2e,0xce,0xcc,0x44,0x55,0x55,0xc4,0xdc,0x76,0x7a,0xd6,0x54,0x55,0x55,0x55,0x10,0x2e,0xde,0xdd,0xcc,0xcc,0xdc,0xdd,0xdd,0x76,0x7a,0xd6,0xdd,0xcc,0xcc,0xcc,};

RECT front_menu_pos __attribute__ ((section (".data"))) = {
	.x = 680,
	.y = 496,
	.w = 8,
	.h = 16
};

char back[256] __attribute__ ((section (".data"))) = {
0x0,0x21,0x43,0x65,0x87,0xa9,0xbb,0xaa,0xac,0xaa,0xac,0xdb,0xbd,0xab,0xca,0xe8,0x0,0x51,0x44,0xe3,0x76,0x98,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xf7,0x0,0x21,0x44,0xe5,0x6e,0x77,0x77,0x77,0x77,0x77,0x77,0x88,0x88,0x78,0x77,0xf6,0x0,0x21,0x43,0xf2,0xee,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0xe6,0xff,0x0,0x21,0x43,0xf2,0xff,0xff,0xff,0xef,0xef,0xee,0xee,0xee,0xff,0xff,0xff,0xff,0x0,0x21,0x43,0xf2,0xef,0xee,0x6e,0x66,0x66,0x66,0x66,0x66,0x66,0xee,0xff,0xff,0x0,0x21,0x33,0xe2,0x6e,0x76,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0xfe,0xff,0x0,0x21,0x33,0x62,0x76,0x87,0x88,0x88,0x88,0x88,0x99,0x89,0x99,0x99,0x68,0xff,0x0,0x21,0x35,0x62,0x87,0x99,0x99,0xc9,0xac,0xba,0xbd,0xab,0xaa,0xca,0x9c,0xfe,0x0,0x21,0x35,0x62,0x87,0x99,0x99,0x99,0xc9,0xcc,0xaa,0xcc,0xcc,0x9c,0x99,0xf8,0x0,0x21,0x35,0x62,0x87,0x98,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xf9,0x0,0x21,0x35,0x62,0x77,0x98,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xe9,0x0,0x21,0x35,0x62,0x76,0x88,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0xe8,0x0,0x21,0x35,0xe2,0x76,0x87,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xf6,0x0,0x21,0x35,0xe2,0x6e,0x76,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0xfe,0x0,0x21,0x35,0xf2,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0x66,0x66,0x66,0xe6,0xff,};

RECT back_menu_pos __attribute__ ((section (".data"))) = {
	.x = 696,
	.y = 496,
	.w = 8,
	.h = 16
};

char brown[32] __attribute__ ((section (".data"))) = {
0x0,0x0,0x10,0x32,0x54,0x76,0x77,0x86,0x0,0x0,0x10,0x32,0x54,0x76,0x77,0x86,0x0,0x0,0x10,0x32,0x54,0x76,0x77,0x86,0x0,0x0,0x10,0x32,0x54,0x76,0x77,0x86,};

RECT brown_menu_pos __attribute__ ((section (".data"))) = {
	.x = 621,
	.y = 468,
	.w = 4,
	.h = 4
};

char motortop[256] __attribute__ ((section (".data"))) = {
0x10,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x1,0x10,0x11,0x11,0x11,0x11,0x0,0x0,0x11,0x11,0x0,0x0,0x11,0x11,0x11,0x11,0x1,0x22,0x22,0x22,0x0,0x0,0x0,0x11,0x11,0x11,0x11,0x0,0x0,0x0,0x22,0x22,0x22,0x43,0x44,0x65,0x22,0x10,0x11,0x11,0x11,0x11,0x11,0x11,0x1,0x22,0x56,0x44,0x34,0x77,0x77,0x54,0x28,0x10,0x99,0x11,0x11,0x11,0x11,0x99,0x1,0x82,0x45,0x77,0x77,0x77,0x77,0x33,0x64,0x2,0xa9,0x1a,0x11,0x11,0xa1,0x9a,0x20,0x46,0x33,0x77,0x77,0x77,0x77,0x77,0x54,0x22,0x91,0xaa,0x9a,0xa9,0xaa,0x19,0x22,0x45,0x77,0x77,0x77,0x77,0x77,0x77,0x47,0x28,0x0,0xa1,0xbb,0xbb,0x1a,0x0,0x82,0x74,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x53,0x22,0x10,0x11,0x11,0x1,0x22,0x35,0x77,0x77,0x77,0x77,0x77,0x43,0x73,0x77,0x37,0x54,0x26,0x2,0x20,0x62,0x45,0x73,0x77,0x37,0x34,0x77,0x77,0x44,0x74,0x77,0x77,0x37,0x54,0x85,0x58,0x45,0x73,0x77,0x77,0x47,0x44,0x77,0x77,0xdc,0x7c,0x77,0x77,0x77,0x37,0x33,0x33,0x73,0x77,0x77,0x77,0xc7,0xcd,0x77,0x77,0xc7,0x77,0xe7,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0x7e,0x77,0x7c,0x77,0x77,0xee,0xee,0xce,0xcc,0xff,0xff,0xff,0xff,0xff,0xff,0xcc,0xec,0xee,0xee,0x77,0xe7,0xee,0xcc,0xfc,0xdf,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xfd,0xcf,0xcc,0xee,0x7e,0x77,0x77,0xee,0xee,0xee,0xee,0xee,0xce,0xec,0xee,0xee,0xee,0xee,0xee,0x77,0x77,};

RECT motortop_menu_pos __attribute__ ((section (".data"))) = {
	.x = 646,
	.y = 472,
	.w = 8,
	.h = 16
};

char floor[64] __attribute__ ((section (".data"))) = {
0x10,0x32,0x54,0x66,0x56,0x87,0x29,0xaa,0xb0,0x18,0x54,0x55,0x55,0x87,0xc9,0xdb,0x80,0x29,0x66,0x66,0x66,0x87,0xc9,0xeb,0x30,0x64,0x66,0x66,0x66,0x87,0xc9,0xeb,0x30,0x64,0x66,0x66,0x66,0x87,0xc9,0xeb,0x1b,0x2c,0x66,0x66,0x66,0x87,0xc9,0xeb,0xb0,0x88,0x54,0x55,0x55,0x87,0xc9,0xeb,0xfb,0x3a,0x54,0x66,0x56,0x87,0x29,0xaa,};

RECT floor_menu_pos __attribute__ ((section (".data"))) = {
	.x = 646,
	.y = 488,
	.w = 4,
	.h = 8
};

char motorside[256] __attribute__ ((section (".data"))) = {
0x10,0x22,0x1,0x43,0x44,0x55,0x55,0x55,0x55,0x65,0x66,0x66,0x66,0x66,0x66,0x56,0x10,0x77,0x1,0x63,0x88,0x88,0x88,0x88,0x98,0x99,0xa9,0xaa,0xaa,0xaa,0xaa,0x89,0x10,0x77,0x17,0x30,0x44,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x10,0x77,0x77,0x12,0x1,0x30,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0x10,0x7c,0x77,0x77,0x77,0x12,0x53,0x55,0x55,0x55,0x55,0x55,0x66,0x66,0x66,0x56,0x10,0x7c,0x77,0x77,0x12,0x0,0x63,0x88,0x88,0x88,0x88,0x99,0xa9,0xaa,0xaa,0x89,0x10,0x72,0x77,0x77,0xc7,0x12,0x30,0x54,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x10,0x72,0x77,0x77,0x77,0xc7,0x1,0x33,0xb4,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0x10,0x71,0x77,0x77,0x77,0x77,0x77,0xc7,0x31,0x55,0x55,0x55,0x55,0x65,0x66,0x56,0x10,0x71,0x77,0x77,0x77,0x77,0x77,0x77,0x30,0x85,0x88,0x88,0x88,0x99,0xaa,0x89,0x0,0xc1,0x77,0x77,0x77,0x77,0x77,0x77,0x1,0x43,0x54,0x55,0x55,0x55,0x55,0x55,0x0,0xc1,0x77,0x77,0x77,0x77,0x77,0x2c,0x77,0x12,0x33,0xbb,0xbb,0xbb,0xbb,0xbb,0x0,0x11,0xc2,0xdd,0xfe,0xff,0xee,0x7d,0xc7,0x72,0x27,0x11,0x30,0x44,0x65,0x56,0x10,0x72,0xd7,0xde,0xc7,0x11,0x7c,0xed,0x7d,0xc7,0x72,0x77,0x32,0x65,0x98,0x89,0xc0,0x77,0x11,0x0,0x33,0x33,0x33,0x10,0x71,0x77,0x77,0xc7,0x11,0xb3,0x44,0x44,0x11,0x30,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,0x3b,0x3,0x10,0x31,0xb3,0xb4,0xbb,0xbb,};

RECT motorside_menu_pos __attribute__ ((section (".data"))) = {
	.x = 654,
	.y = 472,
	.w = 8,
	.h = 16
};

char bridge[128] __attribute__ ((section (".data"))) = {
0x10,0x32,0x44,0x44,0x44,0x44,0x34,0x12,0x10,0x65,0x77,0x77,0x77,0x77,0x37,0x85,0x81,0x49,0xaa,0xaa,0xaa,0xaa,0x6a,0x89,0x88,0x73,0xbb,0xbb,0xbb,0xbb,0x4b,0xc3,0xc8,0x69,0xaa,0xaa,0xaa,0xaa,0x6a,0xd9,0xde,0x39,0x44,0x44,0x44,0x44,0x34,0xe5,0xec,0x92,0x66,0x66,0x66,0x66,0x96,0x82,0xc8,0x92,0x33,0x33,0x33,0x33,0x93,0xc2,0xc8,0x92,0x33,0x33,0x33,0x33,0x93,0xc2,0xe8,0x95,0x33,0x33,0x33,0x33,0x93,0xe5,0xec,0x99,0x66,0x66,0x66,0x66,0x96,0xe9,0xdc,0x95,0x33,0x66,0x66,0x36,0x93,0xd5,0xfe,0x52,0x95,0x39,0x33,0x99,0x55,0xd2,0xfd,0x10,0x88,0xcc,0xee,0xed,0x18,0xf0,0x1f,0x88,0xcc,0xee,0xdd,0xdf,0xce,0xf8,0x0,0x11,0x11,0x88,0xc8,0xce,0x18,0x1,};

RECT bridge_menu_pos __attribute__ ((section (".data"))) = {
	.x = 762,
	.y = 488,
	.w = 4,
	.h = 16
};

char exhaust[128] __attribute__ ((section (".data"))) = {
0x10,0x32,0x13,0x54,0x55,0x55,0x76,0x98,0x10,0x32,0x13,0x85,0x88,0x88,0x6a,0x9a,0x10,0x32,0x13,0x96,0x99,0x99,0x89,0x99,0x10,0x32,0x13,0xa5,0xaa,0xaa,0x6a,0x9a,0x10,0x32,0x13,0x54,0x55,0x55,0x46,0x96,0x10,0x22,0x13,0x7b,0x77,0x77,0xb5,0x95,0x10,0x22,0x2,0x54,0x55,0x55,0x46,0x96,0x0,0x21,0x2,0xbc,0xbb,0xbb,0xc4,0xa4,0x0,0x11,0x1,0xed,0xee,0xee,0xde,0x8c,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x6f,0x0,0x0,0x0,0xff,0xff,0xff,0xff,0x8d,0x0,0x11,0x1,0xdd,0xdd,0xdd,0xde,0x8e,0x10,0x21,0x12,0xed,0xee,0xee,0xde,0xab,0x10,0x22,0x12,0xce,0xcc,0xcc,0xec,0xa4,0x10,0x32,0x13,0xbc,0xbb,0xbb,0xcb,0xa7,0x10,0x32,0x13,0xbc,0xbb,0xbb,0xcb,0xa5,};

RECT exhaust_menu_pos __attribute__ ((section (".data"))) = {
	.x = 836,
	.y = 216,
	.w = 4,
	.h = 16
};
RECT motorside_pos __attribute__ ((section (".data"))) = {
	.x = 1000,
	.y = 24,
	.w = 8,
	.h = 16
};

RECT exhaust_pos __attribute__ ((section (".data"))) = {
	.x = 1002,
	.y = 96,
	.w = 4,
	.h = 16
};

RECT back_pos __attribute__ ((section (".data"))) = {
	.x = 1008,
	.y = 24,
	.w = 8,
	.h = 16
};

RECT floor_pos __attribute__ ((section (".data"))) = {
	.x = 328,
	.y = 248,
	.w = 4,
	.h = 8
};

RECT motortop_pos __attribute__ ((section (".data"))) = {
	.x = 940,
	.y = 170,
	.w = 8,
	.h = 16
};

RECT brown_pos __attribute__ ((section (".data"))) = {
	.x = 944,
	.y = 186,
	.w = 4,
	.h = 4
};

RECT front_pos __attribute__ ((section (".data"))) = {
	.x = 984,
	.y = 48,
	.w = 8,
	.h = 16
};

RECT bridge_pos __attribute__ ((section (".data"))) = {
	.x = 998,
	.y = 96,
	.w = 4,
	.h = 16
};

/*
RECT brown_menu_pos __attribute__ ((section (".data"))) = {
	.x = 621,
	.y = 468,
	.w = 4,
	.h = 4
};
RECT motortop_menu_pos __attribute__ ((section (".data"))) = {
	.x = 646,
	.y = 472,
	.w = 8,
	.h = 16
};
RECT floor_menu_pos __attribute__ ((section (".data"))) = {
	.x = 646,
	.y = 488,
	.w = 4,
	.h = 8
};
RECT motorside_menu_pos __attribute__ ((section (".data"))) = {
	.x = 654,
	.y = 472,
	.w = 8,
	.h = 16
};
RECT front_menu_pos __attribute__ ((section (".data"))) = {
	.x = 680,
	.y = 496,
	.w = 8,
	.h = 16
};
RECT back_menu_pos __attribute__ ((section (".data"))) = {
	.x = 696,
	.y = 496,
	.w = 8,
	.h = 16
};
RECT bridge_menu_pos __attribute__ ((section (".data"))) = {
	.x = 762,
	.y = 488,
	.w = 4,
	.h = 16
};
RECT exhaust_menu_pos __attribute__ ((section (".data"))) = {
	.x = 836,
	.y = 216,
	.w = 4,
	.h = 16
};
*/

struct Texture PAINTK[] __attribute__ ((section (".sdata"))) = {
	[0] =
	{
		.front = front,
		.back = back,
		.floor = floor,
		.brown = brown,
		.motorside = motorside,
		.motortop = motortop,
		.bridge = bridge,
		.exhaust = exhaust,
	},
	[1] =
	{
		.front = (char *) &front_pos,
		.back = (char *) &back_pos,
		.floor = (char *) &floor_pos,
		.brown = (char *) &brown_pos,
		.motorside = (char *) &motorside_pos,
		.motortop = (char *) &motortop_pos,
		.bridge = (char *) &bridge_pos,
		.exhaust = (char *) &exhaust_pos,
	},
	[2] =
	{
		.front = (char *) &front_menu_pos,
		.back = (char *) &back_menu_pos,
		.floor = (char *) &floor_menu_pos,
		.brown = (char *) &brown_menu_pos,
		.motorside = (char *) &motorside_menu_pos,
		.motortop = (char *) &motortop_menu_pos,
		.bridge = (char *) &bridge_menu_pos,
		.exhaust = (char *) &exhaust_menu_pos,
	},
};