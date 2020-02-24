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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			break;
		haystack++;
	}
	return haystack;
}
