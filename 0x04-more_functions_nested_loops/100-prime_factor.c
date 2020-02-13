#include <stdio.h>

/**
 * main - print the primer factors
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int i = 2;
	long int largest;

	while (num != 0)
	{
		if (num % i != 0)
		{
			i += 1;
		} else
		{
			largest = num;
			num /= i;
			if (num == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}

	}
	return (0);
}
