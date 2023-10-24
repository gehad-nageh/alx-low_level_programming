#include "dog.h"
#include "stdio.h"

/**
 * print_dog - function that prints a struct dog
 * @d: the dog to print
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %s\n", d->age);
		pritnf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
