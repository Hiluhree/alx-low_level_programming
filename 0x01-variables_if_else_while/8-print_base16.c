#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: returns a success
 */
int main(void)
{
	char num;
	
	for (num = 0; num < 10; num++)
		putchar(num);
	
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);

	putchar('\n');
	return (0);
}
