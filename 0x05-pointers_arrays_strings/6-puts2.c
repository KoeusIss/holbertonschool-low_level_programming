#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: the string to be filtred
 *
 * Return: void
 */
void puts2(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
