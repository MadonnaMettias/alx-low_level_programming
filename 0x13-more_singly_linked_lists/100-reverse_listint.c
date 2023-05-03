#include "lists.h"

/**
 *reverse_listint - a function that reerses a list
 *@head: a pointer to the pointer of the head of the list
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *previous;

	current = *head;
	previous = NULL;

	while (current != NULL)
	{
		*head = current->next;
		current->next = previous;
		previous = current;
		current = *head;
	}

	*head = previous;

	return (*head);
}
