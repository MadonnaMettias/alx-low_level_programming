#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: is a pointer to a char.
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
