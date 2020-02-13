#include "holberton.h"
/**
 * print_number - print an integer
 * @num: the integer to be printed
 *
 * Retrun: void
 */
void print_number(int num)
{
	int digit = 1;
	int n = num;

	while (n >= 10)
	{
		digit++;
		n /= 10;
	}
	if (num < 0)
	{
		_putchar('-');
		num *= (-1);
	}

	int i;
	int j;

	for (i = 1; i <= digit; i++)
	{
		int val;
		int power = 1;

		for (j = 1; j <= digit - i; j++)
		{
			power *= 10;
		}
		val = num / power;
		num -= power * val;
		_putchar(val + '0');
	}
}
