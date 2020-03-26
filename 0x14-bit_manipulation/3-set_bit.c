#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the given integer number
 * @index: the given index
 *
 * Return: (1) if succeed, (-1) otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n |= (1 << index);
	return (1);
}
