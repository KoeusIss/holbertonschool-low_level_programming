#include "holberton.h"
/**
 * rot13 - Encode a string using rot13
 * @str: given string
 *
 * Return: Encoded string
 */
char *rot13(char *str)
{
	int i;
	int j;
	char *alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *shift ="nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alph[j] != '\0'; j++)
		{
			if (str[i] == alph[j])
			{
				str[i] = shift[j];
				break;
			}
		}
	}
	return (str);
}
