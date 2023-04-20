#include "variadic_functions.h"
#include <stdlib.h>

/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: the first parameter
 *Return: sum of the function parameters , or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);
	return (sum);
}
