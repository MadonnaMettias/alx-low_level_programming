#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *@size: is a single number.
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
