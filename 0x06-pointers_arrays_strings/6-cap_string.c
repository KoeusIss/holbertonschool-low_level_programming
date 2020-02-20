#include "holberton.h"
/**
 * cap_string - Capitalize a string
 * @str: the ginven string
 *
 * Return: A Capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char seperator[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'(', ')', '{', '}', '"'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((i == 0 || str[i - 1] == seperator[j]) &&
					(str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		}
	}
	return (str);
}
