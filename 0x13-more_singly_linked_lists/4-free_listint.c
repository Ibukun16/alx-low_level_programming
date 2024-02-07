#include "lists.h"
/**
 * free_listint - A function that frees a listint_t list
 * @head: A pointer to the node element
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *checker, *p;

	p = head;
	while (p)
	{
		checker = p->next;
		free(p);
		p = checker;
	}
}

