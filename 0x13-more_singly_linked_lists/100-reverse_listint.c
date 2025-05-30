#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverse_listint - A function that reverses a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_node;
	}

	*head = prev;
	return (*head);
}
