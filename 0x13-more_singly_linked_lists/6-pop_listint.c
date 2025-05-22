#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - A function that deletes the head node of a linked list
 * and returns the head node's data.
 * @head: Pointer to the head of the linked list
 *
 * Return: The head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
