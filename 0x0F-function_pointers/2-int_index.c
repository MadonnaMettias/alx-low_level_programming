#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - a function that searches for an integer.
 *@array: the array where the function search for the int.
 *@size: size of the array
 *@cmp: a pointer function
 *Return: the index of the first element for which the cmp function success
 *or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
