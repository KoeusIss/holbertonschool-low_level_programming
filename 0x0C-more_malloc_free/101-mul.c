#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - determines the string length
 * @s: given string
 *
 * Return: length integer
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len]; len++);
	return (len);
}

/**
 * _error - prints error
 *
 * Return: void
 */
void _error(void)
{
	char *e;

	e = "Error";
	while (*e)
		_putchar(*e++);
	_putchar('\n');
}

/**
 * _is_digit - checks if digit
 * @c: a given character
 *
 * Return: 1 if is digit, 0 otherwise
 */
int _is_digit(char *str)
{
	int i;
	int res = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = 1;
		else
			return (0);
	}
	return (res);
}

/**
 * print_arr - prints array of string
 * @arr: given string
 *
 * Return: void
 */
void print_arr(char *arr)
{
	while (*arr)
	{
		_putchar(*arr);
		arr++;
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: the first given number
 * @argv: the second given number
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	/* Declaration */
	char *result;
	int l1, l2;
	int carry;
	int i, j, t;
	int tmp;
	int a, b, r;

	/* Checks the length of arguments */
	if (ac != 3)
	{
		_error();
		exit(98);
	}
	/* Checks if the two number is digit */
	if (!_is_digit(av[1]) || !_is_digit(av[2]))
	{
		_error();
		exit(98);
	}
	/* Determine the length of the two arguments */
	l1 = _strlen(av[1]);
	l2 = _strlen(av[2]);
	/* Allocate space for result */
	result = malloc(l1 + l2);
	if (result == NULL)
	{
		_error();
		exit(98);
	}
	/* Initialize the allocated result */
	for (t = 0; t < l1 + l2; t++)
		result[t] = '0';
	/* Fill the result */
	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			a = (av[1][i] - '0');
			b = (av[2][j] - '0');
			r = (result[i + j + 1] - '0');
			tmp = carry + a * b + r;
			carry = tmp / 10;
			result[i + j + 1] = (tmp % 10) + '0';
		}
		result[i + j + 1] += carry;
	}
	print_arr(result);
	return (0);
}
