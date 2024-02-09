#include "lists.h"
/**
 * get_nodeint_at_index - A function that returned the nth node of
 * a linked list
 * @head: Double pointer to the head node of the list
 * @index: index of the node
 *
 * Return: The index of the specified node or NULL for for fail.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n = 0;

	while (n < index && head->next)
	{
		head = head->next;
		n++;
	}
	if (n < index)
		return (NULL);
	return (head);
}
