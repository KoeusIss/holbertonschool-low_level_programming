#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns the sum of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an sum integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the sum of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an sub integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the sum of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an mul integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the sum of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an div integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the sum of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: an mod integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
