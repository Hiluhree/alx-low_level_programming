#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the string to be concatenated upon
 * @s2: the string to be concatenated to s1
 * Return: returns NULL if concatenation fails, othewise
 * returns a pointer the newly-allocated space in memory
 *  containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len = 0, len1 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[len1++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[len1++] = s2[i];

	return (str);
}
