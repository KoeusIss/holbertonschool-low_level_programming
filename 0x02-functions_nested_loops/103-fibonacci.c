#include "holberton.h"
#include <stdio.h>
/**
 * main - print out the first 50 fibonacci
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long fib0 = 1;
	long fib1 = 2;
	long fib;
	long sum = fib0 + fib1;

	for (i = 3; i < 4000000; i++)
	{
		fib = fib0 + fib1;
		sum += fib;

		fib0 = fib1;
		fib1 = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
