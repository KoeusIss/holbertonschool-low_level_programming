#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to be checked
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * n);
	}
	return (n);
}
