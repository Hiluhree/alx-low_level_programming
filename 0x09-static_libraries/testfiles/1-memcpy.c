#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * the function copies n bytes from
 * memory area @src to memory area @dest
 * @dest: pointer to the memory area to copy to @src
 * @src: the source memory to copy the characters from
 * @n: number of times to copy the characters
 * Return: pointer to the destination @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
