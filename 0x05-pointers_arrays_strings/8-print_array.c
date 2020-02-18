#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print an amount of array's element
 * @n: amount of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
