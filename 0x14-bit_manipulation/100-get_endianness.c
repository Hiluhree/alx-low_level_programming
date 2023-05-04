#include "main.h"
#include <stdint.h>

/**
 * get_endianness - a function that checks the endianness
 * Return: returns 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint16_t test = 0x1234;
	uint8_t *ptr = (uint8_t *)&test;

	if (*ptr == 0x12)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
