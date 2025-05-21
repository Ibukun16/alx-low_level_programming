#include "lists.h"
/**
 * add_nodeint - A function that add nodes to the beginning of a listint_t
 * @head: The pointer to thepointer of the first node on list
 * @n: The data in the new node.
 *
 * Return: address of the new element, of NULL for failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
