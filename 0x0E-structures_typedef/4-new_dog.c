#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function thart calculate the length of the string
 * @str: the string that will be get the length
 * Return: Nothing
 */

int _strlen(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}

/**
 * _strcopy - function that returns a copy of the string
 * @s: string to copy
 * @d: the string will be copied
 * Return: Nothing
 */
char *_strcopy(char *d, char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		d[i] = s[i];
	d[i] = '\0';

	return (d);
}

/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 * Return: struct pointer dog
 *	NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->name, owner);

	return (dog);
}
