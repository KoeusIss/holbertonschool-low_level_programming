#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: a given string
 *
 * Return: a pointer to an array of words
 */
char **strtow(char *str)
{
	int i;
	int j;
	char **result;
	int words = 0;
	int len;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == " " && str[i - 1] != " ")
			words++;
	}
	/* Allocates memory for the result */
	result = malloc((words + 1) * sizeof(char *));
	for(i = 0; i < words; i++)
	{

	}
	if (result == NULL)
		return (NULL);
	while (i < words)
	{
		result[i] = (int *) malloc(_strlen())
	}
	return (str);
}
