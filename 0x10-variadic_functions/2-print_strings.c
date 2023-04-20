#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: the string that is printed between the strings
 * @n: the number of strings passed to the function
 * @...: Variable num er of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(string);
}
