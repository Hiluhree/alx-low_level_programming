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
	char c[] = "aAeEoOtTlL";
	char c1[] = "4433007711";

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = c1[j];
			}
			j++
		}
		i++;
	}
	return (s);
}
