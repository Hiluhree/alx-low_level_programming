#include "main.h"

int is_prime_div(int num, int i);
int is_prime_number(int n);

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: ther number to be checked
 * Return: returns 0 if it is not a prime number
 * returns 1 if it is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_div(n, 2));
}
/**
 * is_prime_div - checks if the number is prime
 * @num: the number to be checked
 * @i: the divisor
 * Return: returns 0 if the number is divisble
 * returns 1 if number is not divisible
 */
int is_prime_div(int num, int i)
{
	if (i == num)
	{
		return (1);
	}
	else if (num % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_div(num, i + 1));
	}
}
