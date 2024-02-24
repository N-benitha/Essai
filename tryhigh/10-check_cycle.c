#include "lists.h"
/**
 * check_cyle - checks if a single list has a cycle in it
 * @list: list
 *
 * Return: 0 if there's no cycle, 1 if there is.
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return(1);
	}
	return (0);
}
