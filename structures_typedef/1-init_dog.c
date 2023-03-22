#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of struct dog.
 * @d: pointer to the initialized variable.
 * @name: dog's name.
 * @age: dog's age
 * @owner: dog's owner
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	if (d == NULL)
	{
		return;
	}

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

	*d = my_dog;
}
