#include "lists.h"

/**
 *get_nodeint_at_index -  a function that returns the nth node of a list
 *@head: the pinter of the head of the list
 *@index: the index of the node
 *Return: a pinter to the nth node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (count == index)
		return (head);

	return (NULL);
}
