#include "holberton.h"
/**
 * main - write his name, self-consciousness
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0;
 */
int main(int argc __attribute__((unused)), char **argv)
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
