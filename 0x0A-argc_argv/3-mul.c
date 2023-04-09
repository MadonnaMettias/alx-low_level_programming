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
	int result;


	if (argc < 3)
		printf("Error\n");
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}

