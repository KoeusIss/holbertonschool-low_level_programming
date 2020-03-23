#include "lists.h"

/**
 * get_nodeint_at_index - returns a nth element in a list
 * @head: a pointer to given list
 * @index: is the index of the node
 *
 * Return: a pointer to the given node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (idx < index && head->next)
	{
		head = head->next;
		idx++;
	}
	if (idx < index)
		return (NULL);
	return (head);
}
