#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - A function that frees a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The freed nodes
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
