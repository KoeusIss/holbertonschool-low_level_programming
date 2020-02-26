#include "holberton.h"
/**
 * factorial - calculate the factorial
 * @nb: the given number
 *
 * Return: integer factorial
 */
int factorial(int nb)
{
	if (nb < 0)
		return (-1);
	else if (nb == 0)
		return (1);
	else
		return (nb * factorial(nb - 1));
}
