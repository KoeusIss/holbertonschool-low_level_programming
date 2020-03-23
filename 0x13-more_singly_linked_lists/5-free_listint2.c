#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: a pointer to a given list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	while (*head)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
}
