#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * delete_nodeint - A function that delete the node at a given index of a linked list
 * @head: Pointer to the head node of the linked list
 * @index: The index of the node that is to be deleted
 *
 * Return: 1 for success and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delete;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (-1);
	}

	tmp = *head;
	while (tmp != NULL && i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	delete = tmp->next;
	tmp->next = tmp->next->next;
	free(delete);
	return (1);
}
