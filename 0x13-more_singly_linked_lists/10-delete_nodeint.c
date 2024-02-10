#include "lists.h"
/**
 * delete_nodeint_at_index - A function that deletes node at an index of
 * a linked list.
 * @head: Double pointer to the node to delete.
 * @index: Index of the node to delete.
 *
 * Return: 1 for success and -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *cu_node;
	unsigned int i;

	if (!*head)
		return (-1);
	cu_node = *head;

	if (index == 0)
	{
		*head = cu_node->next;
		free(cu_node);
		return (1);
	}
	for (i = 0; i < index && cu_node->next; i++)
	{
		p = cu_node;
		cu_node = cu_node->next;
	}
	if (i < index)
		return (-1);
	p->next = cu_node->next;
	free(cu_node);

	return (1);
}

