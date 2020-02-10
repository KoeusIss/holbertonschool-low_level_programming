#include "holberton.h"
/**
 * main - main function print out the "Holberton"
 *
 * Return: 0
 */
int main(void)
{
	char c[] = "Holberton";
	int length = sizeof(c);
	int i = 0;

	while (i < length - 1)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
