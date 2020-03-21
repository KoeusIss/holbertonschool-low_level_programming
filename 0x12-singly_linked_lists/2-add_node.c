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
 * add_node - adds a new node at the beginning of list
 * @head: a given head pointer of the list
 * @str: the str element to be add
 *
 * Return: a pointer to the newly add head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	*head = new_node;

	return (new_node);
}
