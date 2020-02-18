#include "holberton.h"
/**
 * puts_half - prints a half of string
 * @str: the string to be hafed
 *
 * Return: void
 */
void puts_half(char* str)
{
	int length;
	int i;
	int half;

	for (length = 0; str[length] != '\0'; length++);

	half = (length + 1) / 2;
	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
