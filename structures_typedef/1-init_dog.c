#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct
 * @d: pointer type
 * @name: char type
 * @age : float type
 * @owner: pointer type
 * Return: Nothing.
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
