#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function to find the length of the string
 * @s: string to be measured
 *
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
        int l = 0;
        while (*s++)
                l++;
        return (l);
}

/**
 * _strcpy -copies a string pointed to by scr
 * @dest: the buffer storing the striing copy
 * @src: the string source
 *
 * Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
        int i = 0;

        for (i = 0; src[i]; i++)
                dest[i] = src[i];
        dest[i] = '\0';

        return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns the new struct of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcpy(my_dog->owner, owner);

	return (my_dog);
}
