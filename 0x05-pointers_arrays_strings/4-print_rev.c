#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int i, j, length;

	i = 0;
	length = i;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
