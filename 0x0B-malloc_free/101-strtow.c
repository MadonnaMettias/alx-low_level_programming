#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - a function that splits a string into words.
 * @str: the string to be splited
 *Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int len = strlen(str), i = 0, j = 0, count = 0, word_len;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*str == ' ')
		str++;
	while (str[len - 1] == ' ' && len > 0)
		str[--len] = '\0';

	words = malloc((len + 1) * (sizeof(char *)));

	if (words == NULL)
		return (NULL);
	while (i < len)
	{
		word_len = 0;
		while (i < len && str[i] != ' ')
		{
			i++;
			word_len++;
		}
		if (word_len > 0)
		{
			words[count] = strndup(str + i - word_len, word_len);

			if (words[count] == NULL)
			{
				for (j = 0; j < count; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			count++;
		}
		i++;
	}
	words[count] = NULL;
	return (words);
}


