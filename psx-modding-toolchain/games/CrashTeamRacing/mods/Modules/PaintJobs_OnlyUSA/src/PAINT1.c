#include <common.h>

struct Texture
{
	const short * front;
	const short * back;
	const short * floor;
	const short * brown;
	const short * motorside;
	const short * motortop;
	const short * bridge;
	const short * exhaust;
};

short back_crash[16] __attribute__ ((section (".data"))) = {
0x1cc5,0x39ac,0x3651,0x4b37,0x5b7a,0x46d5,0x34a0,0x48e0,0x5d40,0x7580,0x7a46,0x7aca,0x7a02,0x72ee,0x2460,0x1020,};

short front_crash[16] __attribute__ ((section (".data"))) = {
0x1ce6,0x35ee,0x4737,0x677c,0x3cc0,0x4900,0x6540,0x7980,0x7a47,0x7acb,0x7a02,0x7b30,0x2880,0x1440,0x3ab3,0x4f38,};

short brown_crash[16] __attribute__ ((section (".data"))) = {
0x3880,0x3480,0x3060,0x2860,0x1c40,0x1420,0x214d,0x190b,0x2d8f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short motortop_crash[16] __attribute__ ((section (".data"))) = {
0x6140,0x7980,0x5100,0x24c2,0x1462,0x1862,0x38c0,0x2d03,0x2481,0x79e1,0x7a46,0x7aaa,0x3d88,0x4e2d,0x3545,0x41a9,};

short floor_crash[16] __attribute__ ((section (".data"))) = {
0x2060,0x34a0,0x5520,0x40c0,0x5920,0x6560,0x6140,0x2480,0x38a0,0x4900,0x48e0,0x2c80,0x4d00,0x0,0x0,0x0,};

short motorside_crash[16] __attribute__ ((section (".data"))) = {
0x4900,0x6140,0x6960,0x2480,0xc42,0x1ca2,0x2905,0x79a0,0x4186,0x49ea,0x524f,0x820,0x7180,0x7a04,0x7a68,0x7b0c,};

short bridge_crash[16] __attribute__ ((section (".data"))) = {
0x18a3,0x2926,0x2040,0x6100,0x79c5,0x2c60,0x7540,0x7a08,0x3dca,0x44a0,0x7a6e,0x7ab1,0x4a2e,0x5ed3,0x5271,0x6f57,};

short exhaust_crash[16] __attribute__ ((section (".data"))) = {
0x2460,0x34a0,0x5d40,0x7580,0x4630,0x56b3,0x5ed6,0x4a52,0x6b37,0x779c,0x6f59,0x41ec,0x318a,0x18c5,0x2528,0xc63,};

struct Texture PAINT1[] __attribute__ ((section (".sdata"))) = {
	[0] =
	{
		.front = front_crash,
		.back = back_crash,
		.floor = floor_crash,
		.brown = brown_crash,
		.motorside = motorside_crash,
		.motortop = motortop_crash,
		.bridge = bridge_crash,
		.exhaust = exhaust_crash,
	},
};