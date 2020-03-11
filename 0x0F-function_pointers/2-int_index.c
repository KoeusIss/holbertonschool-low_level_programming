#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for un integer
 * @array: given array
 * @size: the size of the array
 * @cmp: the comparison function
 *
 * Return: the index of the first founded element, (-1) otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
