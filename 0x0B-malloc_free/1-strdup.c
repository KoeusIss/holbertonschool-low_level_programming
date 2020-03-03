#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: given string
 *
 * Return: a pointer to the newly duplicated string
 */
char *_strdup(char *str)
{
	char *dupl;
	int size = 0;
	int i;

	/* Checks the null string */
	if (str == NULL)
		return (NULL);
	/* Determine the size of the string */
	while (*(str + size))
		size++;
	/* Allocate a memory for the duplicate string */
	dupl = malloc(size);
	if (dupl == NULL)
		return (NULL);
	/* Fill the duplicated string */
	i = 0;
	while (i < size)
	{
		*(dupl + i) = *(str + i);
		i++;
	}
	/* Final return */
	return (dupl);
}
