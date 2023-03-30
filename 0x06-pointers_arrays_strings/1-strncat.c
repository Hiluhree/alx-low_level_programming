#include "main.h"

/**
 * _strncat - a function that concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended to @dest
 * @n: The number of bytes from src to be appended to dest.
 * Return: returns the result to the string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
