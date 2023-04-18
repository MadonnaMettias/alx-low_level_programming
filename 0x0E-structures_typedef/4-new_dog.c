#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: struct new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	if (new_dog->name == NULL || new_dog->owner == NULL || new_dog->age == 0.00)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	return (new_dog);

}
