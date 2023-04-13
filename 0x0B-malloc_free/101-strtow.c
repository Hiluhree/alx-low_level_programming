#include "main.h"
#include <stdlib.h>

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * word_count - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int word_count(char *str)
{
	int i = 0, num_words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			num_words++;
			i += word_len(str + i);
		}
	}

	return (num_words);
}

/**
 * strtow - a function that splits a string into words.
 * @str: The string to be split.
 *
 * Return: returns NULL if str = NULL, str = "", or the function fails
 *         Otherwise, returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, num_words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	num_words = word_count(str);
	if (num_words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (num_words + 1));
	if (s == NULL)
		return (NULL);

	for (w = 0; w < num_words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		s[w] = malloc(sizeof(char) * (letters + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);

			free(s);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			s[w][l] = str[i++];

		s[w][l] = '\0';
	}
	s[w] = NULL;

	return (s);
}
