#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  creates a new dog.
 * @name: the name
 * @age: age
 * @owner: owner of the dog
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
		free(dog);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
