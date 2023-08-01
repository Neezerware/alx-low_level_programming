#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index of the list where the node should be added
 * @n: new node to be added
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *temp = *head;
	unsigned int i;

	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;
	if (i == idx - 1)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
