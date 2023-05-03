#include "lists.h"

/**
 *listint_len - a function that return the count of the elements inside a list
 *@h: a pointer to the head of the list
 *Return: number of elements inside the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
