#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @str: Given string
 * @c: Given character
 *
 * Return: Return a pointer to the fist occurence of c
 */
char *_strchr(char *str, char c)
{
	while (*str++)
	{
		if (*str == c)
			return (str);
	}
	return (NULL);
}
