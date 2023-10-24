#include "lists.h"

/**
 * free_listint - make the listint_t list free
 * @head: pointer to the head
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
