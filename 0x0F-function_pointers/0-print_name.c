#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - a function that takes a pointer to a function as an argument
 *@name: is a sting
 *@f: a pointer function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
