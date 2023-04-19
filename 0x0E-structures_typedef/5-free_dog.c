#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees the allocated memory
 *@d: a pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
