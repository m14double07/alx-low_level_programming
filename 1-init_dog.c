#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - creates a variable of type struct dog
 * @d: pointer to struct dog to create
 * @name: name to create
 * @age: age to create
 * @owner: owner to create
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
