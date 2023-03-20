#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * free_dog - Free the dog !
 * @d: structure of the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
