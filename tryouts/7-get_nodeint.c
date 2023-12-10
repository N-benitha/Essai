#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head
 * @index: index of the node, starting at 0
 *
 * Return: nth node, and NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
