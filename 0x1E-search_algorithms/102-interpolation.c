#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - implementation of interpolation search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index where value is located else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (array[low] != array[high])
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos < size - 1 && (int)pos >= 0)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] < value)
			low = pos + 1;

		else if (array[pos] > value)
			high = pos - 1;

		else
			return (pos);
	}

	if (array[low] == value)
		return (low);
	return (-1);
}

