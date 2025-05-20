#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - A function that free up the memory of a linked list.
 * @head: The beginning of the linked list
 *
 * Return: NULL
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while(head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
