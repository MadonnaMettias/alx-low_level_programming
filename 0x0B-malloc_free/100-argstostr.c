#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  a function that concatenates all the arguments of your program
 *@ac: the number of arguments passed to the program
 *@av: array of strings "arguments" passed to the program.
 *Return: null if either parameter is null otherwise a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(ac * sizeof(char *));

	for (i = 0; i < ac; i++)
	{
		str[i] = *av[i];
		_putchar(str[i]);
		_putchar('\n');
	}
	return (0);
}


