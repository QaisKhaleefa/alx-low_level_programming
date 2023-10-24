#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to the head of a list
 * @index: index of the node - indices starts at 0
 *
 * Return: NULL - if node does not exist nth node
 *		otherwise -now node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}

	return (head);
}
