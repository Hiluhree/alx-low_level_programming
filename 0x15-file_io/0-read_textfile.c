#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, br, bw;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	br = read(fd, buffer, letters);
	bw = write(STDOUT_FILENO, buffer, br);

	if (fd == -1 || br == -1 || bw == -1 || bw != br)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bw);
}
