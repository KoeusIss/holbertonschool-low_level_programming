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
	long int fib0 = 1;
	long int fib1 = 2;
	long int fib;

	printf("%lu, %lu, ", fib0, fib1);
	for (i = 3; i <= 50; i++)
	{
		fib = fib0 + fib1;
		printf("%lu", fib);
		if (i < 50)
			printf(", ");
		fib0 = fib1;
		fib1 = fib;
	}
	printf("\n");
	return (0);
}
