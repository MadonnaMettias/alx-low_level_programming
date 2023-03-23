#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *@c: is a single letter.
 * Return: 1 if uppercase letter or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
