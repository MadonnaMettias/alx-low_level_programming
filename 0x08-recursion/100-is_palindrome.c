#include "main.h"
#include <string.h>

/**
 *helper - a function that points
 *to the first and the last char of string
 *@first: the first char
 *@last: the last char
 *Return: 1 if the string is palindrome 0 otherwise
 */
int helper(char *first, char *last)
{

	if (first >= last)
		return (1);
	if (*first != *last)
		return (0);

	return (helper(first + 1, last - 1));

}


/**
 *is_palindrome - a function that checks
 *if the given string is palindrome or not
 *@s: the given string
 *Return: -
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
		return (1);

	return (helper(s, s + len - 1));
}
