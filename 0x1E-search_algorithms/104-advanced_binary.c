#include "search_algos.h"
#include <stdio.h>

/**
 * bs_algo - binary search algorithm
 * @array: array to be searched
 * @sz: size of array
 * @value: number to search for
 * @lst_idx: list index in arry to be searched
 * Return: index where value is located
 */

int bs_algo(int *array, int sz, int value, int lst_idx)
{
	int mid_idx, i;

	if (lst_idx > sz || sz < 0)
		return (-1);

	printf("Searching in array:");
	for (i = lst_idx; i <= sz; i++)
	{
		if (i == sz)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}

	mid_idx = (sz + lst_idx) / 2;
	if (array[mid_idx] >= value && mid_idx > lst_idx)
	{
		return (bs_algo(array, mid_idx, value, lst_idx));
	}

	else if (array[mid_idx] < value)
	{
		lst_idx = mid_idx + 1;
		return (bs_algo(array, sz, value, lst_idx));
	}

	return (mid_idx);
}

/**
 * advanced_binary - implementation of advanced binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int lst_idx = 0;

	if (!array)
		return (-1);
	return (bs_algo(array, size - 1, (int)value, lst_idx));
}

