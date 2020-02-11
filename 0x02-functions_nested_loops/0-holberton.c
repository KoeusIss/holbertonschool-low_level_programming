#include "holberton.h"
/**
 * main - print out the "Holberton" word
 *
 * Return: always 0
 */
int main(void)
{
	char c[] = "Holberton";
	int i;

	while (i < 10)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
