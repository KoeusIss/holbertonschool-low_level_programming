#include "holberton.h"
/**
 * print_rev - print a string reverselly
 * @str: the string to be reversed
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i;
	int length = 0;
	char *tmp;

	tmp = str;

	while (*tmp != '\0')
	{
		length++;
		tmp++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
