#include "holberton.h"
/**
 * string_toupper - changes lowercase letter to uppercase
 * @str: the given string
 *
 * Return: An uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
