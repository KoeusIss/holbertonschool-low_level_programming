#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: the string to be filtred
 *
 * Return: void
 */
void puts2(char *str)
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

	for (i = 0; i < length; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
