#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *m;
	listint_t *temp;

	(void)temp;

	m = malloc(sizeof(listint_t));

	if (m == NULL)
		return (NULL);

	m->n = n;
	m->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = m;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = m;
	}

	return (*head);
}
