#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initialize a variable of
 * type struct dog
 * @d: pointer to structure dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to function inicialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
