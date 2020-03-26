#include "holberton.h"

/**
 * power - Determines the power of integer
 * @base: the given integer base
 * @exp: the exponent
 *
 * Return: the integer power
 */
int power(int base, int exp)
{
	if (exp == 0)
		return (1);
	return (base * power(base, exp - 1));
}

/**
 * binary_to_uint - converts binary to unisgned int
 * @b: the given binary as character
 *
 * Return: the converted number uint, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, i = 0, length = 0;

	if (!b)
	{
		return (0);
	}
	while (b[length])
	{
		length++;
	}
	while (length > 0)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
		{
			return (0);
		}
		if (b[length - 1] == '1')
		{
			uint += (b[length - 1] - '0') * power(2, i);
		}
		i++;
		length--;
	}
	return (uint);
}
