#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
