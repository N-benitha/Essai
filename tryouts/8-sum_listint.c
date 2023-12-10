#include "lists.h"
/**
 * sum_listint - sum of data in a list
 * @head: head
 *
 * Return: sum of data in a list
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
