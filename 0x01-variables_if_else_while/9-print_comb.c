#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int comma;
	int space;

	comma = ',';
	space = ' ';
	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		putchar(comma);
		putchar(space);
	}
	putchar('\n');
	return (0);
}
