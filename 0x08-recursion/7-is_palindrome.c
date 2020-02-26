#include "holberton.h"
/**
 * _length - returns the length of string
 * @str: the given string
 *
 * Return: length integer
 */
int _length(char *str)
{
	if (*str)
	{
		return (1 + _length(str + 1));
	}
	return (0);
}
/**
 * _is_palindrome - checks if is palindrome with length
 * @str: the given string
 * @len: the given length
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _is_palindrome(char *str, int len)
{
	if (len <= 1)
		return (1);
	if (*str != *(str + (len - 1)))
		return (0);

	return (_is_palindrome(str + 1, len - 2));
}

/**
 * is_palindrome - checks the string is palindrome
 * @str: the given string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *str)
{
	return (_is_palindrome(str, _length(str)));
}
