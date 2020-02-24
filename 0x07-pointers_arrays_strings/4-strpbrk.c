#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string fir any of set of bytes
 * @str: Given string
 * @accept: Substring set of bytes
 *
 * Return: A pointer to the byte in @str
 */
char *_strpbrk(char *str, char *accept)
{
	int i;
	int occur;

	while (*str != '\0')
	{
		occur = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*str == accept[i])
				occur += 1;
		}
		if (occur > 0)
			break;
		str++;
	}
	if (*str == '\0')
		return (NULL);
	return (str);
}
