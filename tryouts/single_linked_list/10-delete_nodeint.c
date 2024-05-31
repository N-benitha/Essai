#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index index
 * @head: head
 * @index: where the node should be deleted
 *
 * Return: 1 if it succeed, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *temp;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	temp = tmp->next;
	tmp->next = temp->next;
	free(temp);

	return (1);
}
