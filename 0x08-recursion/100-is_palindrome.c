#include "main.h"
#include <string.h>
int is_palindrome_checker(char *s, int start, int end);
int is_palindrome(char *s);

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: the string to be checked
 * Return: return 1 if string is palindrome
 * returns 0 if not
 */
int is_palindrome(char *s)
{
	int start = 0;
	int end = strlen(s) - 1;

	return (is_palindrome_checker(s, start, end));
}
/**
 * is_palindrome_checker - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The length of s.
 * @end: The index of the string to be checked.
 * Return: returns 1 if the string is palinndrome
 * returns 0 if not
 */
int is_palindrome_checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_checker(s, start + 1, end - 1));
	}
}
