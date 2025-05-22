#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - A function that sum all data of linked list n.
 * @head: Pointer to the head of the linked list
 *
 * Return: The sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
