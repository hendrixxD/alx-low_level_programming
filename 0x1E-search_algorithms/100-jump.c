#include "search_algos.h"
#include <stdio.h>

/**
 * jump_search - implements jump search algo
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: returns index where value is located else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, current, prev;

	if (!array)
		return (-1);

	step = sqrt(size);
	current = 0;
	while (current < size && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, current);

	while (prev <= current && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}

