#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @num: is a single number
 * Return: 0 Always Success.
 */
int _abs(int num)
{

	if (num <= 0)
	{
		return (num * (-1));
	}
	else
	{
		return (num);
	}
}
