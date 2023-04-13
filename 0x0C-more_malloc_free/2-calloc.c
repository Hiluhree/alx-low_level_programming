#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: the number of elements
 * @size: The size of each byte of each array element
 * Return: returns NULL if nmemb = 0, size = 0, or the function fails
 * otherwise, it returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_mem;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_mem = malloc(size * nmemb);

	if (ptr_mem == NULL)
		return (NULL);

	f = ptr_mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		f[i] = '\0';
	}

	return (ptr_mem);
}
