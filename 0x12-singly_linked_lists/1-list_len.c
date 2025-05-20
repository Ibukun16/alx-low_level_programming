#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - A function that print the number of elements in a linked list
 * @h: The string containing the elements
 *
 * Return: The number of elements in the list else NULL
 */
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; h = h->next)
		n++;
	return (n);
}
