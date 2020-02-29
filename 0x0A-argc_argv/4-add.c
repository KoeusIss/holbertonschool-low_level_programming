#include "holberton.h"

/**
 * print_int - print integer
 * @num: the given integer
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
 * _atoi - converts character to integer
 * @c: the given character
 *
 * Return: An integer
 */
int _atoi(char *c)
{
	unsigned int val = 0;

	while (*c)
	{
		val = (val * 10) + (*c - '0');
		c++;
	}
	return (val);
}
/**
 * error - print error message
 *
 * Return: Always 1
 */

int error(void)
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
 * main - multiplies two numbers
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 if exit with success, 1 exit with error
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;

	while (i < argc && argc > 1)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += _atoi(argv[i]);
		}
		else
		{
			return (error());
		}
		i++;
	}
	print_int(sum);
	_putchar('\n');
}
