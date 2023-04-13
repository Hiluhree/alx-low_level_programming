#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: The number of arguments passed to the program
 * @av: The array of pointers to the argument
 * Return: returns NULL if ac == 0, av == NULL, or the function fails
 * otherwise, it returns a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i = 0, s = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s++;
	}
	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];
		str[i++] = '\n';
	}
	str[s] = '\0';

	return (str);

}
