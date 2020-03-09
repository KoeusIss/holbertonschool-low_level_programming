#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Django is a nice dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: this is a dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *);

#endif /* DOG_H */
