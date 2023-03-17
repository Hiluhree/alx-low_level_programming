#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 * of single-digit numbers.
 * Return: returns a success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
