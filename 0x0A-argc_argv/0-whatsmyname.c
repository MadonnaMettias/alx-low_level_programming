#include <stdio.h>

/**
 * main - Entry point
 *@argc: an integer to the number of arguments passed to the program.
 *@argv: array of strings "arguments" passed to the program.
 *Return: 0 always sucsuess
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
