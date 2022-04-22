#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds anew node at the end of a list
 * @head: pointer to the head
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *temp;
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
	p->next = 0;

	if (*head == NULL)
	{
		*head = p;
		return (p);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = p;

	return (p);
}
