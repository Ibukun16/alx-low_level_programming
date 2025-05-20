#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - A function that add a new node at the end of a list
 * @head: Pointer to the beginning of the linked list
 * @str: The string holding the element of the linked list
 *
 * Return: The address of the new element else NULL, if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	char *copied;
	int n;

	if (!str || !head)
		return (NULL);

	copied = strdup(str);
	if (!copied)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(copied);
		return (NULL);
	}

	for (n = 0; str[n] != 0; n++)
		;

	new_node->str = copied;
	new_node->len = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
