#include "sort.h"

/**
 * Lomuto_partition - Function for Lomuto partition scheme
 * @array: array
 * @lowest: lowest number entering
 * @highest: highest number entering
 * @size: size of array
 *
 * Return: int
 */

int Lomuto_partition(int *array, int lowest, int highest, size_t size)
{
	int pivot = array[highest], x = (lowest - 1), z, y;

	for (z = lowest; z <= highest; z++)
	{
		if (array[z] <= pivot)
		{
			x++;
			if (x != z)
			{
				y = array[x];
				array[x] = array[z];
				array[z] = y;
				print_array(array, size);
			}
		}
	}
	return (x);
}

/**
 * sort - Function to sort an array
 * @array: array
 * @lowest: first element of the array
 * @highest: last element of the array
 * @size: size of array
 *
 * Return: void
 */

void sort(int *array, int lowest, int highest, size_t size)
{
	int pos;

	if (lowest < highest)
	{
		pos = Lomuto_partition(array, lowest, highest, size);
		sort(array, lowest, pos - 1, size);
		sort(array, pos + 1, highest, size);
	}
}

/**
 * quick_sort - Function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array
 * @size: size of array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	unsigned int highest = size - 1;

	if (array == NULL || size < 2)
		return;
	sort(array, 0, highest, size);
}
