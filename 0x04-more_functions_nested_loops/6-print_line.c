#include "main.h"

/**
 * print_line - a function that draws a straight line un the terminal.
 *@n: is a single number.
 */
void print_line(int n)
{
	char line = '_';

	for (n = 1; n <= n ; n++)
	{
		if (n > 0)
		{
			_putchar(line);
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}


