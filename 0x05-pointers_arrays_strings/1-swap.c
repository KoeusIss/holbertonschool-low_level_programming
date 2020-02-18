#include "holberton.h"
/**
 * swap_int - swap two integer
 * @arg1: first integer
 * @arg2: second integer
 *
 * Return: void
 */
void swap_int(int *arg1, int *arg2)
{
	int c;

	c = *arg1;
	*arg1 = *arg2;
	*arg2 = c;
}
