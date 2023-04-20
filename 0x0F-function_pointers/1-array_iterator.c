#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - function that executes a function given as a parameter
 *on each element of an array.
 *@array: the array to be printed.
 *@size: size of the array
 *@action: a pointer function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
