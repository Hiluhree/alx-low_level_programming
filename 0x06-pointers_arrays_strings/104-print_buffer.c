#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer 10 bytes at a time
 * starting with the byte position, then showing the hex content,
 * then displaying printable charcaters.
 * @b: The buffer to be printed
 * @size: The number of bytes to be printed from the buffer
 */
void print_buffer(char *b, int size)
{
	int byte;
	int i;

	for (buffer_byte = 0; buffer_byte < size; buffer_byte += 10)
	{
		printf("%08x: ", buffer_byte);

		for (i = 0; i < 10; i++)
		{
			if ((i + buffer_byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + i + buffer_byte));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + buffer_byte) >= size)
				break;

			else if (*(b + i + buffer_byte) >= 31 &&
				 *(b + i + buffer_byte) <= 126)
				printf("%c", *(b + i + buffer_byte));

			else
				printf(".");
		}

		if (buffer_byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
