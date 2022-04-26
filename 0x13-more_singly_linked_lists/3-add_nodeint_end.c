#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: pointer to the firstnode in the list
* @n: data to insert in that new node
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	p = malloc(sizeof(listint_t));

	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		p->n = n;
		p->next = NULL;

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
	}
	return (p);
}
