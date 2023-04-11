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

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';

	/**if (copy == NULL)
	*{
	*	return (NULL);
	}*/

	return (copy);
}
