#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, start = 0;
	va_list args;
	char *p;

	va_start(args, format);
	while (format && format[i] != '\0')
		switch (format[i])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(args, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(args, double));
			break;
		case 's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(args, char *);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break;
		}
		i++;
	printf("\n");
	va_end(args);
}
