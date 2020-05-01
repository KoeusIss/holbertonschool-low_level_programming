#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly list
 * @head: the pointer to the head
 *
 * Return: (Success) a number of the nodes
 * ------- (Fail) return negative number
 */
size_t print_dlistint(const dlistint_t *head)
{
	const dlistint_t *cursor;
	int count = 0;

	cursor = head;
	while (cursor)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
		count++;
	}
	return (count);
}
