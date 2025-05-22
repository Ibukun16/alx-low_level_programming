#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * listint_t *insert_nodeint_at_index - A function that insert a new node at a given position
 * @head: The head of the linked list
 * @idx: Index of the point for insertion of the new node
 * @n: The variable containing the element to add
 *
 * Retutn: The address of the new node else NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
