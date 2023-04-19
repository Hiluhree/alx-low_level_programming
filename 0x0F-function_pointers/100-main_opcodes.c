#include <stdio.h>
#include <stdlib.h>

/**
 * printOpcodes - print the opcodes of the program
 * @numBytes: number of bytes to print
 */
void printOpcodes(int numBytes)
{
	unsigned char* ptr = *(unsigned char **) &printOpcodes;

	for (int i = 0; i < numBytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
/**
 * main - funtion that prints its own opcodes
 * @argc: number of arguments
 * @argv: array of the arguments
 * Return: returns a 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *array;

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

	array = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
