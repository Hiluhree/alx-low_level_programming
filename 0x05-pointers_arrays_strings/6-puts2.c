#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string that contains the characters
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
