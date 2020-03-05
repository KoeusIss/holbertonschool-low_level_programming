#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the first contaned element
 * @max: the last contaned element
 *
 * Return: a pointer to newly created array
 */
int *array_range(int min, int max)
{
	/* Declaration */
	int *result;
	int len;
	int i;

	/* Checks if the max greater than min */
	if (min > max)
		return (NULL);
	/* Calculates length of the array */
	len = max - min;
	/* Allocates memory for the result */
	result = malloc((len + 1) * sizeof(*result));
	if (result == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		result[i] = min + i;

	}
	/* Final return */
	return (result);
}
