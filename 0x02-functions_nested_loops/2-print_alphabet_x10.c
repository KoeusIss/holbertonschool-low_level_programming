#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		counter++;
	}
}
