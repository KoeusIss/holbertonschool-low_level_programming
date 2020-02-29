#include "holberton.h"
/**
 * main - print the number of argument
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	if (argc < 10)
	{
		_putchar(argc + '0');
	}
	else
	{
		_putchar((argc / 10) + '0');
		_putchar((argc % 10) + '0');
	}
	_putchar('\n');
	return (0);
}
