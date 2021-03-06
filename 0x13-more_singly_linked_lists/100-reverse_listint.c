#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: a pointer to the given list
 *
 * Return: a pointer to the newly reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reversed;
	
	if (head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	reversed = reverse_listint(&(*head)->next);
	(*head)->next->next = *head;
	(*head)->next = NULL;

	return (reversed);
}
