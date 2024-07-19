#include "search_algos.h"

/**
 * linear_skip - a function that searches for a value in a
 *		sorted skip list of integers.
 *
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: a pointer on the first node where value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *aux = NULL, *buf = NULL;

	if (!list)
		return (NULL);

	aux = list;
	while (aux && aux->express && aux->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				aux->express->index, aux->express->n);
		aux = aux->express;
	}
	buf = aux;
	while (buf && buf->next != buf->express)
		buf = buf->next;
	/* value potentially lies between two express nodes */
	if (aux->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				aux->express->index, aux->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				aux->index, aux->express->index);
	}
	/* value is greater than last express node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
				aux->index, buf->index);

	while (aux != buf && aux->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				aux->index, aux->n);
		aux = aux->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
			aux->index, aux->n);

	if (aux == buf)
		return (NULL);
	return (aux);
}
