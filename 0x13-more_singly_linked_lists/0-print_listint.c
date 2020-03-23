#include "lists.h"

/**
 * print_listint - print all the elements of list
 * @h: the given pointer to the list
 *
 * Return: the number of the elements
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
