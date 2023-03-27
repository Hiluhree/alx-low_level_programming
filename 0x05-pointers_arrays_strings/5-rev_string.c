#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len, i, j;
	char ver1, ver2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	j = len - 1;
	i = 0;

	while (i > j)
	{
		ver1 = s[i];
		ver2 = s[j];
		s[i] = ver2;
		s[j] = ver1;
		j--;
		j++;
	}
}
