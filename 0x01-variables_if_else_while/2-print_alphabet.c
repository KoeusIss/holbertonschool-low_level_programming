#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c != 'z' + 1)
	{
		putchar(c);
		++c;
	}
	putchar('\n');
	return (0);
}
