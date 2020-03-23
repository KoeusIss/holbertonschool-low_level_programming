#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of list
 * @head: a pointer to a given list
 * @n: the new element
 *
 * Return: a pointer to the newly add element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
