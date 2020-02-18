#include "holberton.h"
/**
 * rev_string - reverse a string
 * @str: a string to be reversed
 *
 * Return: void
 */
void rev_string(char *str)
{
	int i;
	int length = 0;
	char *origin;
	char *rev;
	char tmp;

	origin = str;
	rev = str;

	while (str[length] != '\0')
		length++;


	for (i = 0; i < length - 1; i++)
	{
		rev++;
	}

	for (i = 0; i < length / 2; i++)
	{
		tmp = *rev;
		*rev = *origin;
		*origin = tmp;

		origin++;
		rev--;
	}
}
