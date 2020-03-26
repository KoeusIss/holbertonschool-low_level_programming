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
	int arr[64];
	unsigned int i = 0;

	while (i < 64 && n > 0)
	{
		arr[i] = (n & 1);
		n = n >> 1;
		i++;
	}
	if (index > i)
	{
		return (-1);
	}
	return (arr[index]);
}
