#include "holberton.h"
#include <stdlib.h>

/**
 * print_error - print error
 *
 * Return: Always 1
 */
int print_error(void)
{
	char *e;

	e = "Error";
	while (*e)
	{
		_putchar(*e);
		e++;
	}
	_putchar('\n');
	return (1);
}

/**
 * print_int - print integer
 * @num: the ginven integer
 *
 * Return: void
 */
void print_int(int num)
{
	if (num / 10)
		print_int(num / 10);
	_putchar(num % 10 + '0');
}

/**
 * make_change - converts an amount to change
 * @num: coin amount
 *
 * Return: An integer
 */
int make_change(int num)
{
	if (num / 25)
		return ((num / 25) + make_change(num % 25));
	else if (num / 10)
		return ((num / 10) + make_change(num % 10));
	else if (num / 5)
		return ((num / 5) + make_change(num % 5));
	else if (num / 2)
		return ((num / 2) + make_change(num % 2));
	else
		return (num);
}
/**
 * main - make change for amount of money
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Retrun: Always 0
 */
int main(int argc, char **argv)
{
	int coin;

	if ((argc - 1) != 1)
	{
		return (print_error());
	}
	else
	{
		coin = atoi(argv[1]);
		if (coin < 0)
			return (0);
		print_int(make_change(coin));
		_putchar('\n');
	}
}
