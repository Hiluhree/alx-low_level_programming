#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: the first value of the array
 * @max: the last value of the array
 * Return: retunrs NULL if min > max or the function fails
 * otherwise, it returns a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
