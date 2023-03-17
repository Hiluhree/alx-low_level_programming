#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * Return: retuns a success
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
