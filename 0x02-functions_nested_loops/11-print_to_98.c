#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print the natural number from n to 98
 * @n: the print start
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else if (n == 98)
	{
		printf("%d", n);
	} else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
