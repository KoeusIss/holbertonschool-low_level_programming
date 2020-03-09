#include "dog.h"
#include <stdlib.h>
#define CHECK(s) ((s == NULL) ? (s = "") : (s))

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
	int l1 = 0, l2 = 0, i;

	CHECK(name);
	CHECK(owner);
	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(l1 + 1);
	if (newdog->name == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		newdog->name[i] = name[i];
		i++;
	}
	newdog->name[i] = '\0';
	newdog->owner = malloc(l2 + 1);
	if (newdog->owner == NULL)
		return (NULL);
	i = 0;
	while (i < l2)
	{
		newdog->owner[i] = owner[i];
		i++;
	}
	newdog->owner[i] = '\0';
	newdog->age = age;
	return (newdog);
}
