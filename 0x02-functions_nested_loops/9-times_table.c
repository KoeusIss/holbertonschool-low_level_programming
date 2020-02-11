#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < j * i; j++)
		{
			_putchar((j * i));
			_putchar(';')
		}
		_putchar('\n');
	}
}
