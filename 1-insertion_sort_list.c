#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly linked list
 * of integers in ascending order using the insertion sort
 * algorithm
 * @list: list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *present, *temp, *swap;

	if (list == NULL || *list == NULL)
		return;

	present = *list;
	while ((present = present->next))
	{
		swap = present;
		while (swap->prev && swap->n < swap->prev->n)
		{
			temp = swap->prev;
			if (swap->next)
				swap->next->prev = temp;
			if (temp->prev)
				temp->prev->next = swap;
			else
				*list = swap;
			temp->next = swap->next;
			swap->prev = temp->prev;
			swap->next = temp;
			temp->prev = swap;
			print_list(*list);
		}
	}
}
