#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the sorted array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, half = 0;

	if (array == NULL || value == 0)
		return (-1);

	print_array(array, low, size);
	while (low < high)
	{
		half = (low + high) / 2;
		if (array[half] < value)
		{
			low = half + 1;
			print_array(array, low, high + 1);
		}
		else if (array[half] > value)
		{
			high = half - 1;
			print_array(array, low, high + 1);
		}
		else
			return (array[half]);
	}
	return (-1);
}

/**
 * print_array - Prints elements of an array
 * @array: Pointer to the array
 * @i: Starting index
 * @size: Size of the array
 */
void print_array(int *array, size_t i, size_t size)
{
	printf("Searching in array: ");
	while (i < size)
	{
		if (i + 1 == size)
			printf("%d ", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	} printf("\n");
}
