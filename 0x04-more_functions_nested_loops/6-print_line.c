#include "main.h"

/**
 * print_line - a function that draws a straight line un the terminal.
 *@n: is a single number.
 */
void print_line(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 1 ; y <= n ; y++)
			_putchar('_');
	}

	_putchar('\n');
}
