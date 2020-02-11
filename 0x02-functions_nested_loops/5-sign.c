#include "holberton.h"
/**
 * print_sign - print the sign of the digit
 * @n: the number to be checked
 *
 * Return: 1 if positive, 0 if zero and -1 otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('+');
	return (1);
}
