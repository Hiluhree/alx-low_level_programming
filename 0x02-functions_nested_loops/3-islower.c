#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: the letter that is being tested
 * Return: returns 1 on success and 0 on failure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
