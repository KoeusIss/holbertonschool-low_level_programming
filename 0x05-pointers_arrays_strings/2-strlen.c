#include "holberton.h"
/**
 * _strlen - find the length of string
 * @s: the streng to be sized
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
