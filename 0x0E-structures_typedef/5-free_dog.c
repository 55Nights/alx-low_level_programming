#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory
 * @d: points to the memeory
 * Return: void
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
