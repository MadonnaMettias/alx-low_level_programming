#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: is a pointer to a char.
 */
void print_rev(char *s)
{
	int i, n, l;

	for (n = 0; s[n] != '\0'; n++)
		;
	l = n;

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
