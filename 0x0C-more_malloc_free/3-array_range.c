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
	int i = 0;


	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

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

