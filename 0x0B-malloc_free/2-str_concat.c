#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *@s1: is a string
 *@s2: is a string
 *Return: null on failure otherwise pointer should point to
 *a newly allocated space in memory which
 *contains the contents of s1, followed by the contents of s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	str = malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		str[len1 + i] = s2[i];
		i++;
	}
	str[len1 + i] = '\0';

	return (str);
}


