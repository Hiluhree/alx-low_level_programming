#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: The array
 * @size: The size of the array
 * @cmp: The pointer to the string to be compared
 * Return: return -1 if no element matches or size <= 0
 * Otherwise, turns the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[size]) != 0)
				return (i);
		}
	}

	return (-1);
}
