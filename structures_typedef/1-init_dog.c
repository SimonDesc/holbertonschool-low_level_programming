#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the struc
 * @name: the name
 * @age: age
 * @owner: owner
 *
 * Return: Description of the returned value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
