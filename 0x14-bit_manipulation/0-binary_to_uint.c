#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 chars
 * Return: returns 0 if b is NULL or contains char not 0 or 1
 * Otherwise returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = num << 1;

		if (*b == '1')
		{
			num = num | 1;
		}
		b++;
	}

	return (num);
}
