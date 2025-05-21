#include "lists.h"
/**
 * add_nodeint_end - A function that add node at the end of
 * a listint_t list
 * @head: The pointer to the pointer to the node of the listint_t
 * @n: The data contained in the new node
 *
 * Return: The address of the new element or NULL for failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p_hold;

	p_hold = *head;
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p_hold->next)
		p_hold = p_hold->next;
	p_hold->next = new;
	return (new);
}
