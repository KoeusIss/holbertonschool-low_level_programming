#include "holberton.h"
/**
 * _is_prime - checks if the number is prime
 * @nb: the given number
 * @count: the counter
 *
 * Return: 1 if is prime, 0 otherwise
 */
int _is_prime(int nb, int count)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % count == 0)
		return (0);
	if (count * count > nb)
		return (1);
	
	return _is_prime(nb, count + 1);
}

/**
 * is_prime_number - Checks for the prime number
 * @nb: the given number
 *
 * Return: 1 if is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return _is_prime(n, 2);
}
