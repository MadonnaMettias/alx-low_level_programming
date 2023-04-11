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
	int result;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
