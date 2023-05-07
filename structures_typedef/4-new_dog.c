#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 * Return: new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)

	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (new_dog);
}

