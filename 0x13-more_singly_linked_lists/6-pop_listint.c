#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to the first node
 *
 * Return: the data inside the head node,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = (*head)->next;

	if (!head || !*head == NULL)
		return (0);

	int value = (*head)->n;

	free(*head)
	* head = temp;

	return (value);
}
