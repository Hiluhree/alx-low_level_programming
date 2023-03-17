#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Always returns a success(0)
 */
int main(void)
{
	char ch = 'a';

	do {
		putchar(ch);
		ch++;
	} while (ch <= 'z');

	putchar('\n');
	return 0;
}
