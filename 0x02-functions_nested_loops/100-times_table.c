#include "holberton.h"
/**
 * print_times_table - print times table start with 0
 * @n: the n times
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i;
		int j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int val = i * j;

				if (val >= 100)
				{
					_putchar(' ');
					_putchar((val / 100) + '0');
					_putchar(((val / 10) % 10) + '0');
				}
				else if (val >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((val / 10) + '0');
				}
				else if (val < 10 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((val % 10) + '0');
				if (j < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
