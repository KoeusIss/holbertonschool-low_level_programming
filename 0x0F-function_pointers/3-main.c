#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - returns the result of operation
 * @ac: argument counts
 * @av: arguments vector
 *
 * Return: 0 if success, 98 if failed, 100 division by zero
 */
int main(int ac, char **av)
{
	int result;

	if (strlen(av[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
#define I(A) (atoi(av[A]))
	result = get_op_func(av[2])(I(1), I(3));
	printf("%d\n", result);
#undef I
	return (0);
}
