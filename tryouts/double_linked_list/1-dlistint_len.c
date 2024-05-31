#include "list.h"

/**
 * dlistint_len - prints elements of a list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
