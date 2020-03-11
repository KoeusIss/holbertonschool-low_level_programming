#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct function
 * @s: the operand string
 *
 * Return: a pointer the the selected function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while ((ops + i)->op)
	{
		if (*s == *(ops + i)->op)
			return ((ops + i)->f);
		++i;
	}
	printf("Error\n");
	exit(99);
}
