#include <stdio.h>

/**
 * main - Entry point
 *@argc: an integer to the number of arguments passed to the program.
 *@argv: array of strings "arguments" passed to the program.
 *Return: 0 always success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
