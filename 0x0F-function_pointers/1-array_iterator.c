#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: the array
 * @size: The size of the array
 * @action: The pointer to the array to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL)
	{
		return;
	}

	while (size < 0)
	{
		action(array);
		array++;
	}
}
