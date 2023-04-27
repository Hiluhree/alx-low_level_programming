#include <stdio.h>

void __attribute__((constructor)) print_quote(void);

/**
 * print_quote -  a function to print quote
 */
void print_quote(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
