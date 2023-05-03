#include "lists.h"

/**
 *pop_listint - a function that deletes the head node of a list
 *@head: a pointer to the pointer of the head of the list
 *Return: the head node's data or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);

	data = temp->n;
	*head = temp->next;

	free(temp);

	return (data);
}
