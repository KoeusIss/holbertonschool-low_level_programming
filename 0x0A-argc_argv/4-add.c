#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 if exit with success, 1 exit with error
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]) && atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
