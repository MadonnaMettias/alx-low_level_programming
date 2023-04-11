#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars.
 *@size: the size of the memory to print
 *@c: the char to print
 *Return: Null if size = 0, otherwise returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
