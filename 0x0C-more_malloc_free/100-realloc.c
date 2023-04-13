#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the previously allocated memory
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes for the new memory block
 * Return: returns NULL if new_size == 0 and ptr is not NULL and
 * returns ptr if new_size == old_size
 * otherwise, it returns a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_mem;
	char *new_ptr, *f;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr_mem = malloc(new_size);
		if (ptr_mem == NULL)
			return (NULL);
		return (ptr_mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = ptr;
	ptr_mem = malloc(sizeof(*new_ptr) * new_size);

	if (ptr_mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	f = ptr_mem;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		f[i] = *new_ptr++;
	}
	free(ptr);

	return (ptr_mem);
}
