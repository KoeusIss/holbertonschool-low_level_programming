#include "variadic_functions.h"
#include <stdarg.h>
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
	printf("%s", va_arg(ap, char *));
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
	unsigned int i = 0, j;
	format_t form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		while ((form + j)->c)
		{
			if (format[i] == *(form + j)->c)
			{
				(form + j)->f(ap);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
