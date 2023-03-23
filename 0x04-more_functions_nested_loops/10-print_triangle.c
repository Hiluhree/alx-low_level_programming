#include "main.h"

/**
 * print_triangle - a function that prints a triangle,
 * followed by a new line.
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchare('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
