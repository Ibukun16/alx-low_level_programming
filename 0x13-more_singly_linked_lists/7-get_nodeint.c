#include "lists.h"
#include <stdio.h>
#include <string.h>


/**
 * get_nodeint_at_index - A function that gets the nth node of a linked list
 * @index: The index of the node, starting at 0
 *
 * Return: The nth node of the linked list at the ginven index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	for (idx = 0; head != 0; idx++)
	{
		if (idx == index)
			return (head);

		head = head->next;
	}
	return (NULL);
}
