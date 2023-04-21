#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *@argc: number of arguments passed to the program
 *@argv: array of the arguments passed to the program
 *Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int a, b, result = 0;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(a, b);

	printf("%d\n", result);
	return (0);
}
