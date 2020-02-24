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
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		if (needle[j] != '\0' && haystack[i] == needle[j])
			j++;
		else
			break;
		i++;
	}
	if (needle[j] == '\0')
		return (haystack + (i - j));
	return (0);
}
