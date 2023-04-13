#include "main.h"
#include <stdlib.h>

/**
 *_calloc - a function that allocates memory for an array, using malloc.
 *@nmemb: number of elements of the array.
 *@size: size of the each element.
 *Return: a pointer to the allocated memory, or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	*arr = 0;
	return (arr);
}


