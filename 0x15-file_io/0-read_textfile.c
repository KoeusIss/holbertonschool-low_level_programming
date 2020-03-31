#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX output
 * @filename: the given file
 * @letters: is the number of letters should read
 *
 * Return: the actual number of letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i = 0;
	char *buf;

	buf = malloc(letters + 1);
	if (!buf)
		return (0);
	while (i < letters)
	{
		buf[i] = '\0';
		i++;
	}
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	read(fd, buf, letters);
	close(fd);

	i = 0;
	while (buf[i++])
	{
		printf("%c", buf[i]);
	}
	free(buf);
	if (i < letters)
		return (i);
	return (letters);
} /* read_textfile */
