/*
 * metainfo.c
 *
 *  Created on: 2019. 4. 23.
 *      Author: KIKI
 */
#include "main.h"
#include "stm32f4xx_hal.h"

#define VERSION_MAJOR	0x0001
#define VERSION_MINOR	0x0002
#define PRODUCT_ID		0x9999
#define APP_DELAY		100

__attribute__((section(".metainfo")))
const uint16_t metainfo[16] =
{
		0xCAFE,
		VERSION_MAJOR,
		VERSION_MINOR,
		PRODUCT_ID,
		APP_DELAY,
		0x1111,
		0x2222,
		0x3333,
		0x4444,
		0x5555,
		0x6666,
		0x7777,
		0x8888,
		0x9999,
		0xAAAA,
		0xDEAD
};
