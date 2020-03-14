#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct format - structure of different format
 * @c: the character format
 * @f: the function printer
 *
 * Description: Align every character with the needed format
 */
typedef struct format
{
	char *c;
	void (*f)(va_list);
} format_t;

int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);

#endif /* VARIADIC_FUNCTIONS_H */
