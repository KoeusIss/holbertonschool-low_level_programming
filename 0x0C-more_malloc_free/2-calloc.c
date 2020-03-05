#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory fot an array
 * @nmemb: number of elements
 * @size: size bytes
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Declare the result pointer */
	void *result;

	/* Checks for the null member and the null size */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocates memory for the result */
	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	/* Final return */
	return (result);
}
