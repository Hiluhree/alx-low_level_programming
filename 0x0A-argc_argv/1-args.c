#include "main.h"
#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program
 * @argv: The pointer to the arguments
 * Return: Always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
