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

	while(*s != '\0')
		len++;
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
	while(*e)
		_putchar(*e++);
	_putchar('\n');
}

/**
 * _is_digit - checks if digit
 * @c: a given character
 *
 * Return: 1 if is digit, 0 otherwise
 */
int _is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * _chartoi - converts charcter to integer
 * @c: given character
 *
 * Return: integer
 */
int _chartoi(char c)
{
	if (_is_digit(c))
		return (c - '0');
	else
		return (0);
}

/**
 * print_arr - prints array of string
 * @arr: given string
 *
 * Return: void
 */
void print_arr(char *arr)
{
	int i;
	int len;

	len = _strlen(arr);
	for (i = 0; i < len; i++)
		_putchar(arr[i] + '0');
}

/**
 * main - multiplies two positive numbers
 * @argc: the first given number
 * @argv: the second given number
 *
 * Return: Always 0
 */
int main(int ac __attribute__((unused)), char **av)
{
	char *result;
	int l1;
	int l2;
	int carry;
	int i;
	int j;
	int tmp;
	int a, b;

	/* Checks the length of arguments */
	if (ac != 3)
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
	/* Fill the result */
	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = l2 - 1; j >= 0; j++)
		{
			a = _chartoi(av[1][i]);
			b = _chartoi(av[2][j]);
			if (!a || !b)
			{
				_error();
				exit(98);
			}
			tmp += carry + a * b + result[i + j + 1];
			carry = result[i + j - 1] / 10;
			result[i + j - 1] = (tmp % 10) + '0';
		}
		result[i + j + 1] += carry;
	}
	print_arr(result);
	return (0);
}
