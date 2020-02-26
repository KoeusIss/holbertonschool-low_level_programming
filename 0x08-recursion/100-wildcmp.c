#include "holberton.h"
/*
 * wildcmp - compares two strings
 * @s1: the first given string
 * @s2: the second given string
 *
 * Return: 1 if same, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 && *s2)
		return (1);
	if (*s2 == '*' && *(s2 + 1) && !s1)
		return (0);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1));
	return (0);
}
