#include "search_algos.h"

/**
 * jump_list -  a function that searches for a value in a sorted
 *			list of integers using the Jump search algorithm.
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Description: Prints a value every time it is compared in the list.
 *		Use the square root of the list size as the jump step.
 *
 * Return: a pointer to the first node where value is located else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0, size_step = sqrt(size);
	listint_t *node, *jump;

	if (!list || size == 0)
		return (NULL);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += size_step; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
			jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
