#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
		return (NULL);
	}

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
	}

	return (new_dog);

}
