#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - A function that prints all the element of a list
 * @h: The string that contains the element
 *
 * Return: The elements of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
