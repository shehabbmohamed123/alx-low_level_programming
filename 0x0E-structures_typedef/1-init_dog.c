#include "aog.h"

/**
 * init_dog - Initializes a dog.
 * @d: The dog to be init
 * @name: The dog's  name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
