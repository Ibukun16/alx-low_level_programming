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
	const listint_t *current, *checker;
	size_t i = 0;

	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		i++;

		checker = head;
		while (checker != current)
		{
			if (checker == current->next)
			{
				printf("->[%p] %d\n", (void *)checker, checker->n);
				return (i);
			}
			checker = checker->next;
		}
		current = current->next;
	}
	return (i);
}
