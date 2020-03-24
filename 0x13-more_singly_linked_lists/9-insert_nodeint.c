#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: a pointer to the given list
 * @index: the given index
 * @n: the given number
 *
 * Return: a pointer to the newly add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node;
	listint_t *tmp;
	unsigned int idx = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	tmp = *head;
	while (idx < (index - 1) && tmp->next)
	{
		tmp = tmp->next;
		idx++;
	}
	if (idx < index - 1)
		return (NULL);

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
