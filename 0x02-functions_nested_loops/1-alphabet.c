#include "holberton.h"
/**
 * print_alphabet - print the alphabet from 'a' to 'z'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
