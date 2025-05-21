#include "lists.h"
/**
 * free_listint2 - A function that frees listint while setting
 * head to NULL.
 * @head: The pointer to the pointer to the listint_t list
 *
 *Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!head)
		return;
	while (*head)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	head = NULL;
}
