#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: The linked list
 *
 * Description: Iterates over each element of a linked list and print its content
 * If an element string is NULL, print (nil);
 *
 * Return: The number of nodes of the linked list traversed
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (nodes);
}
