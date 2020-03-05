#include "holberton.h"
#include <stdlib.h>

/**
 * set_to_zero - set memory to zero byte
 * @a: given array
 * @len: length of the array
 *
 * Return: void
 */
void *set_to_zero(void *a, unsigned int len)
{
	char *p = a;
	unsigned int i = 0;

	while (i < len)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (a);
}

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
	/* set the array to null character */
	set_to_zero(result, nmemb * size);
	/* Final return */
	return (result);
}
