#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
 * _atoi - converts array to integer
 * @str: given array
 *
 * Return: integer
 */
int _atoi(char *str)
{
	int val = 0;

	while (*str)
	{
		if (_is_digit(*str))
		{
			val = val * 10 + (*str - '0');
		}
		else
		{
			return (0);
		}
		str++;
	}
	return (val);
}

/**
 * main - multiplies two positive numbers
 * @argc: the first given number
 * @argv: the second given number
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	unsigned long int result;

	if (argc != 3)
	{
		_error();
		exit(98);
	}
	
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	if (!num1 || !num2)
	{
		_error();
		exit(98);
	}
	result = num1 * num2;
	printf("%lu", result);
	return (0);
}
