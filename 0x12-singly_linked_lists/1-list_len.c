#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements in a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		h = h->next;
		m++;
	}
	return (m);
}
