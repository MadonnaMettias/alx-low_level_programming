#include "lists.h"

/**
 *print_listint_safe - a function that prints a listint_t linked list
 *@head: a pointer to the head of the list
 *Return: the number of the nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t count = 0;

	temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;

		if (temp >= temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}
	return (count);
}
