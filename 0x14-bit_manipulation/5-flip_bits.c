#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: the number
 * @m: the number to flip to
 * Return: returns the necessary number of bitd to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff =  n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
