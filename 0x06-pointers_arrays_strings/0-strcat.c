#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be appended to @dest
 * Return: return the string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
