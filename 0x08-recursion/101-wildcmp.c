#include "main.h"

/**
 *wildcmp - a function that compares two strings
 *@s1: the first string
 *@s2: the second string
 *Return: 1 if the two string are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);


	if (*s2 == '*')
	{
		if (*s1 == '\0')

			return (wildcmp(s1, s2 + 1));

		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}


	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
