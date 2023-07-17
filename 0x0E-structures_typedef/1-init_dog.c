#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
*init_dog - Initializes variables of type struct dog
*@name: Name of the dog
*@d: The dog
*@age: The age of the dog
*@owner: The owner of the dog
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
