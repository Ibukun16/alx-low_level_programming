#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that add a new node at the beginning of a list
 * @head: The node that signifies the beginning of the linked list
 * @str: The string containing the elements of the linked list
 *
 * Return: The address of the new element else NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *copy;
	int str_len, n;

	if (!str || !head)
		return (NULL);
	copy = strdup(str);
	if (!copy)
		return (NULL);
	
	for (n = 0; str[n] != 0; n++)
		;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(copy);
		return (NULL);
	}
	new_node->str = copy;
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
