#include "holberton.h"
/**
 * times_table - print the times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int times = i * j;

			if (times < 10)
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(times + '0');
			} else
			{
				_putchar(' ');
				_putchar((times / 10) + '0');
				_putchar((times % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
