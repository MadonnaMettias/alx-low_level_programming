#include <stdio.h>

/**
 * main - Entry point.
 *@argc: an integer to the number of arguments passed to the prorgram.
 *@argv: array of strings "arguments" passed to to the program.
 *Return: 0 always success.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
