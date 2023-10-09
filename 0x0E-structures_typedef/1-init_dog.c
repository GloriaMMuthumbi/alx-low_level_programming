#include "dog.h"
#include <stddef.h>
/**
 * init_dog - it initializaes a variable of type
 * struct dog
 * @d: object of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: string of the owners name
 *
 * Return: returns nothing
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
