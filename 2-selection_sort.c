#include "sort.h"

/**
 * swap - Function to swap integers
 * @a: int 1
 * @b: int 2
 *
 * Return: void
 */

/*void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}*/

/**
 * selection_sort - Function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, min;
	int tmp;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
				min = b;
		}
		tmp = array[min];
		array[min] = array[a];
		array[a] = tmp;
		print_array(array, size);
	}
}
