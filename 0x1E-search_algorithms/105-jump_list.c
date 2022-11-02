#include <stdio.h>
#include "search_algos.h"

/**
 * jump_list - implements jump-search algo an linked list
 * @list: head of the list to search
 * @size: number of nodes in linked list
 * @value: value to search for
 * Return: node where value is found else NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	listint_t *prev = list;

	if (list == NULL)
		return (NULL);
	step = sqrt(size);
	while (list->next && list->index < size - 1)
	{
		if (list->index == step)
		{
			printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
			if (list->n < value)
				prev = list;
			else
				break;
			step += sqrt(size);
		}
		list = list->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
						prev->index, list->index);

	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

