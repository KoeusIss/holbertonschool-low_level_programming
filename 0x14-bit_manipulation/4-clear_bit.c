#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the given number
 * @index: the given index
 *
 * Return: (1) if succeed, (-1) otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	if (n == NULL)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
