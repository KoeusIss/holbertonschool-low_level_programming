#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @str: the given string
 *
 * Return: void
 */
void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
		_putchar('\n');
}
