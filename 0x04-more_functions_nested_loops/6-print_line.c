#include "holberton.h"
/**
 * print_line - draws a straight line int the terminal
 * @n: numbers of time
 *
 * Retutn: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
