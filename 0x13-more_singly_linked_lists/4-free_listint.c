#include "lists.h"

/**
 *free_listint - a function that frees memory used by a list
 *@head: a pointer to the head of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
