#include "holberton.h"
#include <math.h>
/**
 * print_number - prints an integer
 * @n: the ginven integer
 *
 * Return: void
 */
void print_number(int n)
{
	int digit = log10(n) + 1;
	int i;


	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (i = 0; i < digit; i++)
	{
		_putchar((n / pow(10, digit)) + '0');
	}
	_putchar('\n');
}
