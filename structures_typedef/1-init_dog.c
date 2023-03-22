#include "dog.h"
#include <stdio.h>
/**
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;
	
	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

	*d = my_dog;
}
