#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: The number of arguments supplied to the program
 * @argv: The pointer to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	multi = num1 * num2;
	printf("%d\n", multi);

	return (0);
}
