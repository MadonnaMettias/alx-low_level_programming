#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: is a single number
 */
void print_diagonal(int n)
{
	int y, x;

	if (n > 0)
	{
		for (y = 1 ; y <= n ; y++)
		{

			for (x = 1 ; x <= y ; x++)
			{
			_putchar(32);
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
