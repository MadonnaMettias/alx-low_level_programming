#include "lists.h"

/**
 * list_len - a function that return the count of elements inside a list
 *@h: a pointer to the head of the list
 *Return: number of the elments inside the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
