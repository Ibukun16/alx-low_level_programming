#include "lists.h"
/**
 * pop_listint - A function that delete the head node of listint list
 * @head: Double pointer to the head node in the list
 *
 * Return: Linked list data n or 0 for an empty linked list.
 */
int pop_listint(listint_t **head)
{
	listint_t *b;
	unsigned int n;

	b = *head;
	if (!b)
		return (0);
	*head = b->next;
	n = b->n;
	free(b);
	return (n);
}
