#include "holberton.h"

/**
 * main - the main function
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	char *file_to, *file_from, buffer[1024];
	ssize_t ftd, ffd, ffr, ftw;
	int ffc, ftc;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1], file_to = av[2];
	ffd = open(file_from, O_RDONLY);
	if (ffd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ftd = open(file_to, O_CREAT | O_RDWR | O_TRUNC, 0664);
	ffr = read(ffd, buffer, 1024);
	if (ffr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	ftw = write(ftd, buffer, 1024);
	if (ftw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	ffc = close(ffd);
	if (ffc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffc);
		exit(100);
	}
	ftc = close(ftd);
	if (ftc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftc);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
