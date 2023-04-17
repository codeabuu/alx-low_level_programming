#include <stdlib.h>
#include "dog.h"
/**
* init_dog - will initialize variable of the type struct dog
* @d: pointer to struct dog to be initialized
* @name: name to to be initialized
* @age: age to be initialized
* @owner: owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
free(d);
}

