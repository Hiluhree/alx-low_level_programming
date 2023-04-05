#include "main.h"

/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @s1: the first string to be compared
 * @s2: the second string to be compared and may contain wildcard
 * Return: return 1 if the string to be compared is identical
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2 || (*s2 == '*' && *(s2 + 1) != '\0'
			&& wildcmp(s1 + 1, s2) == 1))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{

		return (0);
	}
}
