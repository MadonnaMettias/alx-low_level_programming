#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: is a number
 *Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int num = n;

	num--;

	if (n == 2)
		return (1);
	else if ((n % (num - 1) != 0) && num > 1)
	{
		(is_prime_number(num));
		return (1);
	}
	else
		return (0);
}
