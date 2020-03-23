#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: a pointer to a given list
 *
 * Return: a head's data n
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
