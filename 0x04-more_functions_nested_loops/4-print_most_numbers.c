#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbersi,
 * from 0 to 9 except 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9' && (n != '2' || n != '4'))
	{
	_putchar(n);
	n++;
	}

	_putchar('\n');
}
