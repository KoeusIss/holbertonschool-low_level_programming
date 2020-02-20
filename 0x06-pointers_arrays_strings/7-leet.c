#include "holberton.h"
/**
 * leet - encode a string into 1337
 * @str: given string
 *
 * Return: Encoded character
 */
char *leet(char *str)
{
	int i;
	int j;
	char sipher[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == sipher[j] || str[i] == (sipher[j] - 32))
				str[i] = code[j];
		}
	}
	return (str);
}
