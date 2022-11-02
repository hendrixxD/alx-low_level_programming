#include "search_algos.h"
#include <stdio.h>
/**
 * linear_skip - searches for node with n field == value
 * @list: head of linked list
 * @value: value to search for
 *
 * Return: node with n == value or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current = list, *prev = list;

	if (!list)
		return (NULL);
	current = list->express;
	if (!current)
		current = list;
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (current->n >= value)
			break;
		prev = current;
		current = current->express;
	}
	if (!current)
	{
		current = prev;
		while (current->next)
			current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		       prev->index, current->index);
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

