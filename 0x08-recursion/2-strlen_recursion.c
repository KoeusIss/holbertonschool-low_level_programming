#include "holberton.h"
/**
 * _strlen_recursion - returns the length of the string
 * @str: given string
 *
 * Return: integer of the length
 */
int _strlen_recursion(char *str)
{
	if (*str)
	{
		return (1 + _strlen_recursion(str + 1));
	}
	return (0);
}
