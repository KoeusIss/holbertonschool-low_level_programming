#include "holberton.h"
/**
 * _pow_recursion - calculates the base raised by the power of expon
 * @base: the given base
 * @expon: the given exponention
 *
 * Return: the power
 */
int _pow_recursion(int base, int expon)
{
	if (expon < 0)
		return (-1);
	else if (expon == 0)
		return (1);
	else
		return (base * _pow_recursion(base, expon - 1));
}
