#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: the square array
 * @size: the size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int left_sum = 0;
	int right_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				left_sum += *a;
			if ((i + j) == (size - 1))
				right_sum += *a;
			a += 1;
		}
	}
	printf("%d, %d\n", left_sum, right_sum);
}
