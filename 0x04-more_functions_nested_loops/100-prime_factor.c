#include "main.h"
#include <stdio.h>

/**
 * main - a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 * Return: Success of 0
 */
int main(void)
{
	long int i = 612852475143;
	long int prime;

	for (prime = 2; prime < i; prime++)
	{
		if (i % prime == 2)
		{
			i = i / prime;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
