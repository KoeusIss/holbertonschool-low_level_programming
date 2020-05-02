#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: a pointer to the linked list
 * @index: the given index
 *
 * Return: (Success) return 1
 * ------- (Fail) return -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor;
	unsigned int count = 1;

	if (index == 0 && (*head)->next)
	{
		cursor = *head;
		*head = (*head)->next;
		free(cursor);
		return (1);
	}
	cursor = (*head)->next;
	while(cursor)
	{
		if (index == count)
		{
			cursor->prev->next = cursor->next;
			cursor->next->prev = cursor->prev;
			free(cursor);
			return (1);
		}
		count++;
		cursor = cursor->next;
	}
	return (-1);
}