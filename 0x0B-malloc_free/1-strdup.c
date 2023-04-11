#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function contains a copy of the string given as a parameter.
 *@str: a given string
 *Return: NULL if str = NULL or insufficient memory was available
 *otherwise returns a pointer to the duplicated string
 *
 */
char *_strdup(char *str)
{
	char *copy;
	int len;
	int i;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	copy = malloc(len * sizeof(char));

	n = 0;
	while (str[n] != '\0')
	{
		copy[n] = str[n];
		n++;
	}
	copy[n] = '\0';

	return (copy);
}
