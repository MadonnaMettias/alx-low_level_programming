#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - a function that prints numbers, followed by a new line.
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;


	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, unsigned int);

		if (i != n && i != 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", num);
	}
	printf("\n");

	va_end(ap);
}
