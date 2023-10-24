#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head : point to the linked list head
 * Return: head node's data (x)
 *         otherwise 0 - if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->x;
	free(tmp);

	return (x);
}
