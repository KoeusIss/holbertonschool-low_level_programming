#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function as parameter
 * @array: the given array
 * @size: the given size
 * @action: the assigned action
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	/* Checks if array is NULL */
	if (array == NULL || action == NULL)
		return;
	/* Iterat array for action */
	i = 0;
	while(i < size)
	{
		action(array[i]);
		i++;
	}
}
