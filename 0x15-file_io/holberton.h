#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Header file */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);

#endif /* HOLBERTON_H */
