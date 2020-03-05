#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of memory on byte to be allocated
 *
 * Return: pointer to the allocated memoty
 */
void *malloc_checked(unsigned int b)
{
	/* Desclare the returnded result */
	int *result;

	/* Allocate memory for the result */
	result = malloc(b);
	if (result == NULL)
		exit(98);
	/* Final return */
	return (result);
}
