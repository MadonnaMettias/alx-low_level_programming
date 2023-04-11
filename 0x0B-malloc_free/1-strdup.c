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
	int len = 0;
	int i = 0;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	copy = malloc((len + 1) * sizeof(char));

	while (str[n] != '\0')
	{
		copy[n] = str[n];
		n++;
	}
	copy[n] = '\0';

	if (copy == NULL)
	{
		return (NULL);
	}

	return (copy);
}
