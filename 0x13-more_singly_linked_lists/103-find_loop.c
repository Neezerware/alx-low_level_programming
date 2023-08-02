#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *end = head;
	listint_t *start = head;

	if (!head)
		return (NULL);

	while (end && start && start->next)
	{
		start = start->next->next;
		end = end->next;
		if (start == end)
		{
			end = head;
			while (end != start)
			{
				end = end->next;
				start = start->next;
			}
			return (start);
		}
	}

	return (NULL);
}
