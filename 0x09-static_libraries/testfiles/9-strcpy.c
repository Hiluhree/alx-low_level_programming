#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: the source strig to copy
 * @src: a pointer to the destination string
 * Return: returns the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
