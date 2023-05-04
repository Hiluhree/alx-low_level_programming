#include "main.h"
#include <limits.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: return the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-10);
	}

	return ((n & mask) ? 1 : 0);
}
