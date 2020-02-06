#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i != 16)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i + 'a' - 10);
		++i;
	}
	putchar ('\n');
	return (0);
}
