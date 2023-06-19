#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type
 * @d: the dog
 * @name: the dogs name
 * @age: dogs age
 * @owner: the dogs owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
