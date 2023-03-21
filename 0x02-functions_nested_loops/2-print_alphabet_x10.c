#include "main.h"

/**
 * print_alphabet_10x - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: no return value
 */
void print_alphabet_10x(void)
{
	char ch;
	int i;

	for (i = 0; i <= 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
