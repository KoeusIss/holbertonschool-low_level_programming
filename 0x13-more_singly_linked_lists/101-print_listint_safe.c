#include "lists.h"

#define NORMAL_PRINT (while (head)			\
	{						\
	printf("[%p] %d\n", (void *) head, head->n);	\
	head = head->next;				\
	})						\

/**
 * print_listint_safe - prints list
 * @head: a pointer to a given list
 *
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast, *slow, *tmp, *meet_point;
	size_t counter = 0;

	slow = head;
	fast = head->next;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow == fast)
	{
		slow = head;
		tmp = fast;
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *) slow, slow->n);
			counter++;
			slow = slow->next;
			fast = tmp;
			while (fast->next != tmp && fast != slow)
				fast = fast->next;
		}
		if (slow == fast)
			meet_point = slow;
		while (slow->next != fast)
		{
			printf("[%p] %d\n", (void *) slow, slow->n);
			counter++;
			slow = slow->next;
		}
		printf("[%p] %d\n", (void *) slow, slow->n);
		printf("-> [%p] %d\n", (void *) meet_point, meet_point->n);
	}
	else
		while (head)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	return (counter);
}
