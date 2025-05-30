#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * find_listint_loop - A function that finds loop in a linked list
 * @head: The head of the linked list
 *
 * Return: The address of the node where the loop starts,
 * else NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (!head)
		return (NULL);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
