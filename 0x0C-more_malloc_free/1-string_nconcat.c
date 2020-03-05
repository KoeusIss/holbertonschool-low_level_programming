#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - determine the string length
 * @str: the given string
 *
 * Return: integer length
 */
int _strlen(char *str)
{
	/* Declare the return length */
	int len = 0;

	/* Determine the length of string */
	while (*(str + len))
		len++;
	/* Final return */
	return (len);
}

/**
 * set_to_zero - set memory to zero byte
 * @a: given array
 * @len: length of the array
 *
 * Return: void
 */
void *set_to_zero(void *a, unsigned int len)
{
	char *p = a;
	unsigned int i = 0;

	while (i < len)
	{
		*p = '\0';
		p++;
		i++;
	}
	return (a);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first given string
 * @s2: second given string
 * @n: amount of bytes from the second string
 *
 * Return: a pointer to the newly concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Declaration */
	char *result;
	unsigned int l1;
	unsigned int l2;
	unsigned int i;

	/* Checks for null string argument */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* Determine the length */
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	/* Checks fi n exceed the string length */
	if (n >= l2)
		n = l2;
	/* Allocate memory for the result */
	result = malloc(l1 + n + 1);
	if (result == NULL)
		return (NULL);
	/* set memory to zero */
	set_to_zero(result, l1 + n + 1);
	/* Filling the result array */
	for (i = 0; i < l1; i++)
		result[i] = s1[i];
	for (i = 0; i < n; i++)
		result[l1 + i] = s2[i];
	/* Final return */
	return (result);
}
