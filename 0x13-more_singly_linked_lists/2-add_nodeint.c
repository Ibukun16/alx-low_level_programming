#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint - A function that add a new node at the beginning of a linked list
 * @head: Pointer to the node that begins the linked list
 * @n: The integer to add into the new node of the linked list
 *
 * Return: The address of the new element else NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!head)
		return (NULL);
	
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
