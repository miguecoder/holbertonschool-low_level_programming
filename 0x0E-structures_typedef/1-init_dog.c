#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a variable of
 * type struct dog
 * @d: pointer to structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
