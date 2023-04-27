#include "lists.h"

/**
 *free_list - a function that frees memory used by a list
 *@head: a pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
