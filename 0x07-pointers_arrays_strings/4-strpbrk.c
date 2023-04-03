#include "main.h"

/**
 * _strpbrk -  a function that searches a string
 * for any of a set of bytes.
 * @s: pointer tot the string to be searched
 * @accept: the set of bytes to be searced for
 * Return: returns a pointer to the matched byte or
 * null if not matched
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return ('\0');
}
