#include "lists.h"
/**
 * *insert_nodeint_at_index - A function that insert a new node at
 * a given index.
 * @head: Double pointer to the head node.
 * @idx: Index to the given position
 * @n: Data of the new node
 *
 * Return: Address of the new node or NULL for fail.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *p;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	p = *head;
	for (i = 0; (i < idx - 1) && p->next; i++)
		p = p->next;

	if (i < idx - 1)
		return (NULL);
	new->next = p->next;
	p->next = new;
i
	return (new);
}

