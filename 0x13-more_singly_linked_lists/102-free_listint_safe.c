#include "lists.h"

/**
 * free_listint_safe - a function that frees a linstint_t linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int alter;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		alter = *h - (*h)->next;
		if (alter > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
