#include "dog.h"

/**
 * init_dog - function that initialize a variable
 * @d: the dog that will be init
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
