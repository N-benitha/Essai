#include "lists.h"
/**
 * pop_listint - removes an element at the top of the list
 * @head: head
 *
 * Return: element removed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int a;

	if (head == NULL)
		return (0);
	tmp = *head;
	if (tmp == NULL)
		return (0);
	a = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (a);
}
