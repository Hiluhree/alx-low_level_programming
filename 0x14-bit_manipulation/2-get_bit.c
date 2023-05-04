#include "main.h"
#include <limits.h>
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the bit
 * @index: the index to get the value at
 * Return: return -1 if error occurss
 * Otherrwise, returns the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}


	return ((n & mask) ? 1 : 0);
}
