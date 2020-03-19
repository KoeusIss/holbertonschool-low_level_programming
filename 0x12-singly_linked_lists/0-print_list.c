#include "lists.h"

/**
 * print_list - prints all element of a list
 * @h: the given list head
 *
 * Retur: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while(h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		length++;
		h = h->next;
	}
	return (length);
}
