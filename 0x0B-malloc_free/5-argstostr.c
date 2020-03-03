#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - calculate the string length
 * @str: the given string
 *
 * Return: an integer of the length
 */
int _strlen(char *str)
{
	if (*str)
		return (1 + _strlen(str + 1));
	return (0);
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
	i = 1;
	size = 0;
	while (i < ac)
	{
		size += _strlen(av[i]);
		i++;
	}
	/* Allocates memory to the result */
	result = malloc((size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	/* Filling the result */
	i = 0;
	while (i < size)
	{
		for (j = 0; j < ac; j++)
		{
			for (k = 0; av[j][k]; k++)
			{
				result[i] = av[j][k];
				i++;
			}
			result[i++] = '\n';
		}
	}
	result[i] = '\0';
	return (result);
}
