#include "holberton.h"
/**
 * _strspn - Gets the length of substring
 * @str: Given string
 * @accept: Substring bytes
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int i;
	unsigned int j;
	int occurance;

	for (i = 0; str[i] != '\0'; i++)
	{
		occurance = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (str[i] == accept[j])
				occurance += 1;
		}
		if (occurance == 0)
		{
			break;
		}
	}
	return (i);
}
