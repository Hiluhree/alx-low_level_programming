#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the string to be encoded
 * Return: returns the encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	int j;

	char alphabet[] = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';
	char ro13key[] = 'NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm';

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot13key[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
