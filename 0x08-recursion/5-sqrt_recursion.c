#include "main.h"

int sqrt_helper(int num, int r);
int _sqrt_recursion(int n);

/**
 * sqrt_helper - Finds the natural square root of an inputted number.
 * @num: the number to find the suare root of
 * @r: the root to be tested
 *
 * Return: returns the square root if it has a natural number
 * returns -1 if the number does not have a natural number
 */
int sqrt_helper(int num, int r)
{
	if ((r * r) == num)
	{
		return (r);
	}
	else if (r == num / 2)
	{
		return (-1);
	}

	return (sqrt_helper(num, r + 1));
}
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: the number to return the square root of
 * Return: If n has a natural square root
 * it returns the natural square root of n.
 *  If n does not have a natural square root it returns -1.
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
		return (1);
	return (sqrt_helper(n, r));
}
