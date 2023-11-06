#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initalizes a variable of type struct dog
 * @d: pointer to the dog struct
 * @name: name of a dog
 * @age: age of a dog
 * @owner: name of owner of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d == NULL))
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
