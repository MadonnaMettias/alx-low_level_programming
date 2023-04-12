#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: an integer to the number of arguments passed to the program.
 *@argv: array of strings "arguments" passed to the program.
 *Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
					{
						printf("Error\n");
						return (1);
					}
			else
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
