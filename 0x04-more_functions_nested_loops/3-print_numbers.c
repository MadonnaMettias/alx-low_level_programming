#include "main.h"

/**
 * print_numbers - a function that print numbers from 0 to 9.
 */
void print_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
