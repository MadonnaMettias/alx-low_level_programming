#include "3-calc.h"
#include <stdio.h>

/**
 *op_add - function that get sum of two numbers
 *@a: the first number
 *@b: the second number
 *Return: sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - function that get differnce of two numbers
 *@a: the first number
 *@b: the second number
 *Return: the differnce of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 *op_mul - a function that multiply two numbers
 *@a: the first number
 *@b: the second number
 *Return: the result of multiplication of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 *op_div - a function that divide two numbers
 *@a: the first number
 *@b: the second number
 *Return: the result of the divided numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 *op_mod - a function that get the remainder of division of two numbers
 *@a: the first number
 *@b: the second number
 *Return: the remainder of division of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}

