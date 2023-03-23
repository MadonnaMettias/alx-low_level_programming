#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 *@c: a single number.
 * Return: 1 if c is digit between 0 and 9 and return 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
