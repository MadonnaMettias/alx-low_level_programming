#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *@c: is a single letter
 * Return: 1 if Success and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
