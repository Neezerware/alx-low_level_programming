#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list
 * @h: type listint_t linked list to be traversed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (head != NULL)
	{
		length++;
		head = head->next;
	}

	return (length);
}
