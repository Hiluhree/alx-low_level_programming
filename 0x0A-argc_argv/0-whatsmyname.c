#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: The number of arguments supplied to the program
 * @argv: The pointer to the arguments
 * Return: Always 0
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
