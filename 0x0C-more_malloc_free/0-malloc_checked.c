#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: The number of bytes to be allocated
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr_mem = malloc(b);

	if (ptr_mem == NULL)
		exit(98);

	return (ptr_mem);
}
