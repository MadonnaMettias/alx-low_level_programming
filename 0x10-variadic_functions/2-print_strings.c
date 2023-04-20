#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - a function that prints strings, followed by a new line.
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (separator != NULL && i != 0 && i != n)
			printf("%s", separator);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);
	}
	printf("\n");

	va_end(ap);
}

