#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a dog_t dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *my_name = name;
	char *my_owner = owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = my_name;
	newdog->age = age;
	newdog->owner = my_owner;

	return (newdog);
}
