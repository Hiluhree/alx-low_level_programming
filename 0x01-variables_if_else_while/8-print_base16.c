#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: returns a success
 */
int main(void)
{
	int num;
	char  ch;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
