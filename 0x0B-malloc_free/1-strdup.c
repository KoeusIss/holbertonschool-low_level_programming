#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: given string
 *
 * Return: a pointer to the newly duplicated string
 */
char *_strdup(char *str)
{
        char *dupl;
        int size = 0;
        int i;

        if (str == NULL)
                return (NULL);

        while (*(str + size))
                size++;

        dupl = malloc(size);
        if (dupl == NULL)
                return (NULL);

        i = 0;
        while (i < size)
        {
                *(dupl + i) = *(str + i);
                i++;
        }
        return (dupl);
}
