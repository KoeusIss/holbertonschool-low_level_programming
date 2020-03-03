#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: unsigned integer for array size
 * @c: a character
 *
 * Return: A poiter to character
 */
char *create_array(unsigned int size, char c)
{
        char *arr;
        unsigned int i;

        if (size == 0)
                return (NULL);

        arr = malloc(size * sizeof(*arr));
        if (arr == NULL)
                return (NULL);

        i = 0;
        while (i < size)
        {
                *(arr + i) = c;
                i++;
        }
        return (arr);
}
