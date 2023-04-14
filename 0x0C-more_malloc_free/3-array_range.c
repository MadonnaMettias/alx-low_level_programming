#include "main.h"
#include <stdlib.h>

/**
 *array_range - a function that creates an array of integers.
 *@min: the minimum int
 *@max: the maximum int
 *Return: a pointer to the newly created array, null if fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, len;


	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}

