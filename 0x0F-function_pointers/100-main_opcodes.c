#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of itself
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 if success, 1 fail argument, 2 negatif count
 */
int main(int ac, char **av)
{
	int *main_func;
	int i;

	main_func = (int *) main;
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(av[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(av[1]); i++)
	{
		printf("%2X\n", *(main_func + i));
	}
}
