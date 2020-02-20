#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source strings
 *
 * Return: the concatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
