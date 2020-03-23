#include "lists.h"

/**
 * free_listint - frees a list
 * @head: a pointer to a given list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
