#include "lists.h"

/**
 * free_listint2 - make lstint_t list free
 * @head: A pointer to the address of the head
 *
 *
 * Description: Sets head to NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
