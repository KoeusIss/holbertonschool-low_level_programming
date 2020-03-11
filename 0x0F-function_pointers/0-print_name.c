#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the given name
 * @f: the gieven function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* Check if name is NULL */
	if (name == NULL)
		name = "";
	/* Check if function is NULL */
	if (f == NULL)
		return;
	/* Processing */
	f(name);
}
