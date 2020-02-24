#include "holberton.h"
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
		str++;
		if (*str == c)
			break;
	}
	if (*str == '\0')
		str = 0;
	return (str);
}
