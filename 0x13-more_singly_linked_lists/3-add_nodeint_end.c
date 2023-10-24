#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to the head of the list
 * @n: number used as content
 *
 * Return:  if function fails-NULL
 *         else- the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n;
	listint_t *cursor = *head;

	new_n = malloc(sizeof(listint_t));
	if (new_n != NULL)
	{
		new_n->n = n;
		new_n->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = new_n;
	}
	else
		*head = new_n;
	return (new_n);
}
