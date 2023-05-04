#include "main.h"
#include <limits.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the bit
 * @index: index to set the value at
 * Return: returns -1 if an error occurs, otherwise returns 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
