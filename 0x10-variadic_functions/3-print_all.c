#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - a function that prints any thing
 *@format: a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, count;
	char c, *s;
	float f;

	va_start(ap, format);
	while (format != NULL && format[count] != '\0')
	{
		switch (format[count])
		{
			case 'i':
			i = va_arg(ap, int);
			printf("%d", i);
			break;

			case 'c':
			c = va_arg(ap, int);
			printf("%c", c);
			break;

			case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			break;
			case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			printf("%s", s);
			break;
			default:
			break;
		}
		count++;
	if (format[count] != '\0')
		printf(", ");
	}
	printf("\n");
	va_end(ap);
}
