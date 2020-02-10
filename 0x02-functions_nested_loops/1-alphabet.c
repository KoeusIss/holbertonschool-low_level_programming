#include "holberton.h"
/**
 * print_alphabet - print the alphabet in lowercase.
 *
 */
void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
}
