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

	while (str[++len])
		;
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
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	new_list->next = *head;
	new_list->str = strdup(str);
	new_list->len = _strlen(str);
	*head = new_list;
	return (new_list);
}
