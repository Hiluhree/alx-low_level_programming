#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the letter to be checked
 * Return: returns 1 as a succes and 0 as a failure
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
