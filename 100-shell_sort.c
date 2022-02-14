#include "sort.h"

/**
 * shell_sort - Function that sorts an array of integers in
 * ascending order using the Shell sort algorithm, using the
 * Knuth sequence
 * @array: array
 * @size: size of array
 *
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t interval = size / 2, x, y;
	int tmp;

	for (; interval > 0; interval /= 2)
	{
		for (x = interval; x < size; x += 1)
			tmp = array[x];
		for (y = x; y >= interval && array[y - interval] > tmp; y -= interval)
			array[y] = array[y - interval];
		array[y] = temp;
	}
}
