#include "main.h"

/**
 * swap_int - a function that swap the values of two inegers.
 *
 *@a: is a pointer to an integer.
 *@b: is a pointer to an integer.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
