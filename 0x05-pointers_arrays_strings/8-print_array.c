#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of
 * integers, followed by a new line.
 * @a: pointer to the array of integers
 * @n: The number of the elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
