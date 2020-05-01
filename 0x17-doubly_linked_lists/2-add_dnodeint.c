#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: a pointer to the linked list
 * @n: a given integer of the new node
 *
 * Return: (Success) a pointer to the newly add node
 * ------- (Fail) return a NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
	}
	*head = new_node;
	return (new_node);
}
