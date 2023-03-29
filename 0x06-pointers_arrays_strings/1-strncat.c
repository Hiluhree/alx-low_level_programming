#include "main.h"

/**
 * _strncat - a function that concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended to @dest
 * Return: returns the result to the string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
