#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function frees dogs
 * @d: object of type dog_t
 *
 * Return: returns nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
