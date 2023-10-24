#include "lists.h"

/**
 * listint_len - the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: numbers of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
