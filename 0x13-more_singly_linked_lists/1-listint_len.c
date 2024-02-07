#include "lists.h"
/**
 * listint_len - A function that returns thet number of elements
 * in a linked list
 * @h: The pointer to the list node
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
