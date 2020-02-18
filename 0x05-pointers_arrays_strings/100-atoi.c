#include "holberton.h"
/**
 * _atoi - convert a string to integer
 * @str: giving string
 *
 * Return: the value if true, 0 otherwise
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
		{
			sign *= (-1);
		}else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				break;
		}
	}
	return (sign * result);
}
