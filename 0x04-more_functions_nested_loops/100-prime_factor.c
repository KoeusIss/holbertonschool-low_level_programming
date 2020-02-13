#include <stdio.h>
#include <math.h>

/**
 * isprime - check if the number is prime
 * @num: the number to be checked
 *
 * Return: 1 if is prime numbre, 0 otherwise
 */
int isprime(long int num)
{
	long int i;
	int prime = 1;

	for (i = 2; i < sqrt(num); i++)
	{
		printf(".");
		if (num % i == 0)
		{
			prime = 0;
		}
	}
	return (prime);
}

/**
 * main - print the primer factors
 *
 * Return: 0
 */
int main(void)
{
	long long int num = 612852475143;
	long long int i;

	for (i = num; i > 2; i--)
	{
		if (num % i == 0)
		{
			if (isprime(i) == 1)
			{
				printf("%lld\n", i);
				break;
			}
		}
	}
	return (0);
}
