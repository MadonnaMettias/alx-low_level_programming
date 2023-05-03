#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes a node at a given position
 *@head: a pointer to the pointer of the of the list
 *@index: index of the node that should be deleted
 *Return: 1 if it succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;

		free(current);
		return (1);
	}

	previous = NULL;

	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;

		count++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;

	free(current);
	return (-1);
}

