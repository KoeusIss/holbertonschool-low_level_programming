#include "holberton.h"
/**
 * reverse_array - reverse the content of the an array of integer
 * @a: the given array
 * @n: number of elemets to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int num;
	int i;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		num = a[i];
		a[i] = a[(n -1) - i];
		a[(n - 1) - i] = num;
	}
}
