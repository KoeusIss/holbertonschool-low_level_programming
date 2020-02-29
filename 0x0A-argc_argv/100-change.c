#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * make_change - converts an amount to change
 * @num: coin amount
 *
 * Return: An integer
 */
int make_change(int num)
{
	if (num / 25)
		return ((num / 25) + make_change(num % 25));
	else if (num / 10)
		return ((num / 10) + make_change(num % 10));
	else if (num / 5)
		return ((num / 5) + make_change(num % 5));
	else if (num / 2)
		return ((num / 2) + make_change(num % 2));
	else
		return (num);
}
/**
 * main - make change for amount of money
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int coin;

	if ((argc - 1) != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		coin = atoi(argv[1]);
		if (coin < 0)
			return (0);
		printf("%d\n", make_change(coin));
	}
}
