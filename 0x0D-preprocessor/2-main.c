#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file
 *
 * Return: always 0
 */
int main(void)
{
	char *file;

	file = __FILE__;
	printf("%s\n", file);
	exit(EXIT_SUCCESS);
}
