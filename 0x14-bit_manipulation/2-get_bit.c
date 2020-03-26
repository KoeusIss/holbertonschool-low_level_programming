#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the base number
 * @index: the given index
 *
 * Return: the value of the bit, (-1) otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = n | (1 << index);
	if (m == n)
	{
		return (1);
	}
	return (0);
}
