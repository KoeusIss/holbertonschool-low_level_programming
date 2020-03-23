#include "lists.h"

/**
 * sum_listint - returns the sum of the list n data
 * @head: a pointer to the given list
 *
 * Return: the sum integer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
