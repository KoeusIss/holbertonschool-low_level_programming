#include "lists.h"

/**
 * list_len - returns the number of node in a list
 * @h: a given lsit head
 *
 * Return: a length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
