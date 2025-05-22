#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **checked = NULL;
	const listint_t **new_checked;
	size_t i, count = 0, capacity = 1024;

	checked = malloc(sizeof(listint_t *) * capacity);
	if (!checked)
		exit(98);

	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == checked[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(checked);
				return (count);
			}
		}
		if (count == capacity)
		{
			capacity *= 2;
			new_checked = realloc(checked, sizeof(listint_t *) * capacity);
			if (!new_checked)
			{
				free(checked);
				exit(98);
			}
			checked = new_checked;
		}
		checked[count++] = (listint_t *)head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(checked);
	return (count);
}
