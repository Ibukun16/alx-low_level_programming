#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * size_t free_listint_safe - A function that frees a listint linked list
 * @h: Double pointer to the head of the linked list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0, capacity = 1024, i;
	listint_t **checked, **new_checked;
	listint_t *current, *next;

	if (!h || !*h)
		return (0);
	checked = malloc(sizeof(listint_t *) * capacity);
	if (checked == NULL)
		exit (98);

	current = *h;
	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (checked[i] == current)
			{
				*h = NULL;
				free(checked);
				return (count);
			}
		}
		if (count == capacity)
		{
			capacity *= 2;
			new_checked = realloc(checked, sizeof(listint_t *) * capacity);
			if (new_checked == NULL)
			{
				free(checked);
				return (count);
			}
			checked = new_checked;
		}
		checked[count++] = current;
		next = current->next;
		free(current);
		current = next;
	}
	free(checked);
	*h = NULL;
	return count;
}
