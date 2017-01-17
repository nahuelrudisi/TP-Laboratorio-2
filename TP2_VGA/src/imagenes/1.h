#include "..\lib_draw.h"


const uint8_t uno_Table[] = {
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x4A,0x6E,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x4A,
		0xB6,0x72,0x6E,0x01,0x01,0x01,0x01,0x01,
		0x01,0x25,0x6D,0x72,0x6E,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x25,0x4D,0x4D,
		0x71,0x72,0x01,0x01,0x01,0x01,0x01,0x6E,
		0x4D,0x4D,0xBA,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x25,0x4D,0x4D,0x4D,0x4D,
		0x72,0x72,0x71,0x71,0x6D,0x6D,0x4D,0x4D,
		0x4D,0xB6,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x25,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,
		0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x71,
		0x96,0x01,0x01,0x01,0x01,0x01,0x01,0x25,
		0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,0x4D,
		0x4D,0x4D,0x4D,0x4D,0x4D,0x49,0x96,0x4A,
		0x01,0x01,0x01,0x01,0x01,0x25,0x4D,0x4D,
		0x4D,0x4D,0x6D,0x6D,0x6D,0x6D,0x4D,0x4D,
		0x4D,0x4D,0x4D,0x4D,0x72,0x4A,0x01,0x01,
		0x01,0x01,0x01,0x25,0x4D,0x4D,0x6D,0x92,
		0x4A,0x49,0x49,0x29,0x6E,0x49,0x49,0x49,
		0x29,0x49,0x25,0x01,0x01,0x01,0x01,0x01,
		0x01,0x6A,0xB6,0x6E,0x4E,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
		0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
};

VGA_Image uno = { uno_Table, 20, 22, };
