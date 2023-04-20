#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that prints numbers, followed by a new line.
 * @n: The number of parameters passed to the function
 * @...: The number of variables or parameters to calculate its sum
 *
 * Return: returns 0 if n == 0 is 0
 * otherwise it returns the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
