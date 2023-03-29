#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: returns the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char c[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == c[j] || s[i] - 32 == c[j])
			{
				s[i] = j + '0';
			}
		}
		i++;
	}
	return (s);
}
