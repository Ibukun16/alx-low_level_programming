#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: Pointer to the head of the linked list
 *
 * Description: Iterates over each element of a linked list and print
 * its content if an element string is NULL, print (nil);
 *
 * Return: The number of nodes of the linked list traversed
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
