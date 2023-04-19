#include "function_pointers.h"

/**
 *print_name - a function that takes a pointer to a function as an argument
 *@name: is a sting
 *@f: a pointer function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
