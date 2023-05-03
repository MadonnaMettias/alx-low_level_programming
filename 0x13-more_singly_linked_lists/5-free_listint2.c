#include "lists.h"

/**
 *free_listint2 - a function that frees a memory used by a list
 *@head: a poniter to the pinter of the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}

	*head = NULL;
}
