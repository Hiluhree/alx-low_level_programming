#include "3-calc.h"
#include <stdio.h>
#include <stdio.h>

/**
 * main - a function that prints the result of a simple operation
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: returns a 0
 */
int main(int __attribute__(unused) argc, ahcr *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98)
	}

	a = atoi(argv[1]);

	op = =argv[2];
	b= atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) ||
		(*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
