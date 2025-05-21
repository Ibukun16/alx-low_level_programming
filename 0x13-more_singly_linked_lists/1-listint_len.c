#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - A function that returns the number of elements in a linked list
 * @h: The string containing the element of the linked list
 *
 * Return: The number of elements of the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	if (!h)
		return (0);

	for (n = 0; h != NULL; h = h->next)
		n++;
	return (n);
}
