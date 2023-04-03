#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: the pointer to the string to be searched
 * @needle: the pointer to the substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 * returns null if the substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
