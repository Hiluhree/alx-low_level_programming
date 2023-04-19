#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: returns a 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	int (*address)(int, char **) = main;
	unsigned char array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		array = *(unsigned char *)address;
		printf("%.2x", array);
		if (i == num_bytes - 1)
		{
			continue;
		}
		printf(" ");
		address++;
	}

	printf("\n");
	return (0);
}
