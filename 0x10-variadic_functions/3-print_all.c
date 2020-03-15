#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_int - print integer
 * @ap: list
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_char - print character
 * @ap: list
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: list
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}

/**
 * print_all - print anything
 * @format: list of types of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	int indicator;

	va_start(ap, format);

	while (format[i])
	{
		indicator = 1;
		switch (format[i])
		{
			case 'c':
				print_char(ap);
				break;
			case 'i':
				print_int(ap);
				break;
			case 'f':
				print_float(ap);
				break;
			case 's':
				print_string(ap);
				break;
			default:
				indicator = 0;
				break;
		}
		i++;
		if (format[i] && indicator)
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
