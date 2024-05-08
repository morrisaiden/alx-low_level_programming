#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using jump search
 * @array: Pointer to the sorted array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int index, i, j, prev;

	if (array == NULL || size == 0)
		return (-1);

	i = (int)sqrt((double)size);
	j = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		j++;
		prev = index;
		index = j * i;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
