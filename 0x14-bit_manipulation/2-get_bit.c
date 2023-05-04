#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: the bit
 * @index: the index to get the value at
 * Return: return -1 if error occurss
 * Otherrwise, returns the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
		return (0);

	return (0);
}
