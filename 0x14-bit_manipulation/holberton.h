#ifndef HOLBERTON_H
#define HOLBERTON_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Prototypes */
int _putchar(char);
unsigned int binary_to_uint(const char *);
void print_binary(unsigned long int);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif /* HOLBERTON_H */