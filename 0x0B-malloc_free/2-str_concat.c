#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenaes two strings
 * @s1: the first given string
 * @s2: the second given string
 *
 * Return: a pointer to the newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
        unsigned int size1 = 0;
        unsigned int size2 = 0;
        char *result;
        unsigned int i;
        unsigned int j;

        while (*(s1 + size1))
                size1++;
        while (*(s2 + size2))
                size2++;

        result = malloc(size1 + size2);
        if (result == NULL)
                return (NULL);
        i = 0;
        while(i < size1)
        {
                *(result + i) = *(s1 + i);
                i++;
        }
        j = 0;
        while (j < size2)
        {
                *(result + size1 + j) = *(s2 + j);
                j++;
        }
        return (result);
}