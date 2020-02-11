#include "holberton.h"
/**
 * jack_bauer - print out the time from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		int i_dozen = i / 10;
		int i_unit = i % 10;

		for (j = 0; j < 60; j++)
		{
			int j_dozen = j / 10;
			int j_unit = j % 10;

			_putchar(i_dozen + '0');
			_putchar(i_unit + '0');
			_putchar(':');
			_putchar(j_dozen + '0');
			_putchar(j_unit + '0');
			_putchar('\n');
		}
	}
}
