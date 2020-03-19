#include "lists.h"

/**
 * free_list - frees a list
 * @head: the head of the given list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
