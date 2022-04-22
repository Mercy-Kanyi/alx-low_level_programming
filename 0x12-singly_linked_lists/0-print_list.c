#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list_t list to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("empty string\n");
		}
		else
		{
			printf("Length of string : %u, string : %s\n", h->len, h->str);
		}
		h = h->next;
		m++;
	}
	return (m);
}
