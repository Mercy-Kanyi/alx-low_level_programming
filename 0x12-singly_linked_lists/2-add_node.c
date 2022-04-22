#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds anew node at the beginming of a list_t list
 * @head: pointer to pointer pointing to the list_t list
 * @str: string contained in list_t lists
 * Return: pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int len = 0;

	p = malloc(sizeof(list_t));

		if (p == NULL)
		{
			return (NULL);
		}
	while (str[len])
		len++;

	p->str = strdup(str);
	p->len = len;
	p->next = (*head);
	(*head) = p;

	return (p);
}
