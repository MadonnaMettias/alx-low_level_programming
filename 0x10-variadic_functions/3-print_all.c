#include "variadic_functions"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i; 
	int count = 0;
	char *s;
	float f;
	char c;

	va_start(ap, format);

	while (count < format)


