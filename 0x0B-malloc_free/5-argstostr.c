#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - calculate the string length
 * @ac: argument count
 * @av: arguments vector
 * Return: an integer of the length
 */
int _strlen(int ac, char **av)
{
	int length = 0;
	int i;
	int j;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
		length += 1;
	}
	return (length);
}

/**
 * argstostr - Concatenates all the arguments string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int size;
	char *result;

	/* Checks the null arguments */
	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the final string size */
	size = _strlen(ac, av);
	/* Allocates memory to the result */
	result = malloc((size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	/* Filling the result */
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			result[i] = av[j][k];
			i++;
		}
		result[i++] = '\n';
	}
	result[i] = '\0';
	return (result);
}
