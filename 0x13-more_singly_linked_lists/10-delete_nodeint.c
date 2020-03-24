#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in the nth index
 * @head: a pointer to the given list
 * @index: a given index
 *
 * Return: 1 if succeed, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *cursor;
	unsigned int idx = 1;

	if (*head == NULL)
		return (-1);

	cursor = *head;

	if (index == 0)
	{
		*head = cursor->next;
		free(cursor);
		return (1);
	}

	while (idx < index && cursor->next)
	{
		cursor = cursor->next;
		idx++;
	}

	tmp = cursor->next;
	cursor->next = tmp->next;
	free(tmp);

	return (1);
}
