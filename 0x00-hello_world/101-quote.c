#include <stdio.h>
#include <unistd.h>
/**
 * main - return a ginius simplicity
 * Return: 1
 */
int main(void)
{
	char string[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, string, sizeof(string));
	return (1);
}
