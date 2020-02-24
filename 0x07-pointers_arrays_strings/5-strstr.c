#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: Given string
 * @needle: Substring
 *
 * Return: A pointer to the beginning of occurance, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int match = 0;

	while (*haystack != '\0' && *haystack != *needle)
		haystack++;

	for (i = 0; haystack[i] != '\0' && match == 0; i++)
	{
		if (haystack[i] == needle[i])
			match = 0;
		else
			match += 1;
	}
	if (haystack[i] == '\0')
		return (haystack);
	return (0);
}
