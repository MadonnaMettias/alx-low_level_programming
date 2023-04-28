#include "lists.h"

/**
 *print_before_main - a function the is excuted before main function
 */
void print_before_main(void) __attribute__ ((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
