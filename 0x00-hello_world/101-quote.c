#include <stdio.h>
/**
 * main - return a ginius simplicity
 * Return: 1
 */
int main(void)
{
	char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	while(*c != '\0')
	{
		putchar(*c);
		c++;
	}
	return (1);
}
