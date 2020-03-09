#include "dog.h"

/**
 * init_dog - initialise a dog structure
 * @d: a dog struture
 * @name: a dog's name
 * @age: a dog's age
 * @owner: a dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
