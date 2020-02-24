#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - Locates a character in a string
 * @str: Given string
 * @c: Given character
 *
 * Return: Return a pointer to the fist occurence of c
 */
char *_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			break;
		str++;
	}
	return (str);
}
