#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: unisgned integer for size
 * @c: a character
 *
 * Return: a pointer to the string
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* Chesks a null size */
	if (size == 0)
		return (NULL);
	/* Allocate a memory for the array */
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	/* Fill the array */
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	/* Final return */
	return (arr);
}
