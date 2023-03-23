#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: the number of times to draw
 * Return: void
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < n; spaces++)
			{
				if (spaces == i)
				{
					_putchar('\\');
				}
				else if (spaces < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
