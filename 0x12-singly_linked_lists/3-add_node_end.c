#include "lists.h"

/**
 * _strlen - determines the string length
 * @str: given string
 *
 * Return: an integer length
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - add a node at the end of list
 * @head: the head of the list
 * @str: a given string
 *
 * Return: a pointer to the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	tmp = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
