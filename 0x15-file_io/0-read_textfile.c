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
	ssize_t r, w;
	char *buf;

	buf = malloc((letters + 1) * sizeof(char));
	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	r = read(fd, buf, letters);
	buf[letters] = '\0';
	close(fd);
	w = write(1, buf, letters);
	if (w != r || w < 0)
		return (0);
	free(buf);
	return (r);
} /* read_textfile */
