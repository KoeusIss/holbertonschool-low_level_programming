#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	int c = 'a';
	int b = 'A';

	while (c != 'z' + 1)
	{
		putchar(c);
		++c;
	}
	while (b != 'Z' + 1)
	{
		putchar(b);
		++b;
	}
	putchar('\n');
	return (0);
}
