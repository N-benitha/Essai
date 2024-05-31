#include "lists.h"
/**
 * listint_len - finds number of elements in a list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	for (; h != NULL; nodes++)
		h = h->next;

	return (nodes);
}
