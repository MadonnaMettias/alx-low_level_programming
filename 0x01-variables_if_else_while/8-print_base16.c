#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char alph;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	for (alph = 'a' ; alph <= 'f' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
