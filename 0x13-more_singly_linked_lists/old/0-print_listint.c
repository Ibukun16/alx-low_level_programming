#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t
 * @h: The pointer to the listint_t node
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
