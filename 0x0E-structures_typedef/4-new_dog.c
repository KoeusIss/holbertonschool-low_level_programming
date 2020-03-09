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
	char *my_name;
	char *my_owner;
	int l1 = 0;
	int l2 = 0;
	int i;

	while (name[l1])
		l1++;
	while (owner[l2])
		l2++;

	my_name = malloc(l1 + 1);
	if (my_name == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		my_name[i] = name[i];
		i++;
	}
	my_name[i] = '\0';

	my_owner = malloc(l2 + 1);
	if (my_owner == NULL)
		return (NULL);
	i = 0;
	while (i < l2)
	{
		my_owner[i] = owner[i];
		i++;
	}
	my_owner[i] = '\0';

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = my_name;
	newdog->age = age;
	newdog->owner = my_owner;

	return (newdog);
}
