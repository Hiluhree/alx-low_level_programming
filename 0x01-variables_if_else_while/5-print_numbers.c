#include <stdio.h>

/**
 * main - a program that prints all single digit numbers o
 * base 10 starting from 0, followed by a new line.
 * Return: returns a success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
