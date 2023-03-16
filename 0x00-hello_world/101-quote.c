#include <stdio.h>
#include <unistd.h>

/**
 * main - outputs and that piece of art is useful - Dora Korpar, 2015-10-19
 * Return: Exits with 0 as a success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
