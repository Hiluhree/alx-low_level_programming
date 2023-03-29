#include "main.h"

/**
 * strcat - a function that concatenates two strings.
 * @dest: A pointer to the string to b concatenated
 * @src: The source string to be appended to @dest
 * Return: Always 0
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
	return (0);
}
