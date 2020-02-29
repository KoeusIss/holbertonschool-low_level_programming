#include <stdio.h>
#include <stdlib.h>

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
	int i = 1;

	while (i < argc && argc > 1)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
