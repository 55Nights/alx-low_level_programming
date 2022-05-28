#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
	dog->name = malloc(sizeof(name));

	if (dog->name == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(owner));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->owner);
		return (NULL);
	}
	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);
	return (dog);
}
