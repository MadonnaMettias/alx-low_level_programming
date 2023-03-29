#include "main.h"

/**
 * _puts - a function that prints a string in reverse followed by a new line
 * @str: is a single charachter.
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0' ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
