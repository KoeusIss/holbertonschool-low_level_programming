#include "holberton.h"
/**
 * _strncpy - cpies a string
 * @dest: setination string
 * @src: source string
 * @n: amount of the spoied character
 *
 * Return: The copied character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
