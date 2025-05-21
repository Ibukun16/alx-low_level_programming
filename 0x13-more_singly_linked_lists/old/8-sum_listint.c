#include "lists.h"
/**
 * sum_listint - A function that sum all the data (n) of
 * a linked list.
 * @head: A double pointer to the head node in the list
 *
 * Return: 0 for empty list.
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
