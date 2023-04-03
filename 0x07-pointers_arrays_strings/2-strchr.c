#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: the string to be searched
 * @c: the character to be located
 * Return: a pointer to the first occurence if c is found
 * returns null if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
