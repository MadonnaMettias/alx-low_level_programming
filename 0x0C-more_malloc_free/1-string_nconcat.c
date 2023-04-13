#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *@s1: the first string
 *@s2: the second string
 *@n: unsigned int.
 *Return: returned pointer shall point to a newly allocated space in memory
 *or Null if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
		if (str == NULL)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; i < n; i++)
			str[len1 + i] = s2[i];

		str[len1 + i] = '\0';
		return (str);
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);

		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			str[len1 + i] = s2[i];

		str[len1 + i] = '\0';
		return (str);
	}
}


