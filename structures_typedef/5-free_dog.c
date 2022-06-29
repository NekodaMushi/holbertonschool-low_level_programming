#include <stdio.h>
#include "dog.h"

/**
 * free_dog -  function that frees dogs.
 * @d: pointer type
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
