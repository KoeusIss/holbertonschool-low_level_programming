#include "holberton.h"
/**
 * infinite_add - adds two numbers
 * @n: the first number in char form
 * @m: the second number in char form
 * @r: the buffer
 * @size_r: the buffer size
 *
 * Return: char
 */
char *infinite_add(char *n, char *m, char *r, int size_r)
{
	int i;
	int j;
	int k;
	char buf[size_r];

	for (i = 0; n[i] != '\0'; i++)
		;
	for (j = 0; m[j] != '\0'; j++)
		;
	
	int first;
	int second;
	int rest = 0;
	int o;

	for (k = 0; k < size_r; k++, i--, j--)
	{
		if (i > 0)
			first = n[i - 1] - '0';
		else
			first = 0;
		if (j > 0)
			second = m[j - 1] - '0';
		else 
			second = 0;

		r[k] = ((first + second + rest) % 10) + '0';

		for (o = 0; o < k; o++)
		{
			if (o == 0)
			buf[0] = ((first + second + rest) % 10) + '0';
			buf[o] = r[o];
		}
		rest = (first + second + rest) / 10;
	}
	r = buf;
	return (r);
}
