#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *@s: is a string
 * Return: the legnth of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')

		return (_strlen_recursion(s + 1) + 1);

}
