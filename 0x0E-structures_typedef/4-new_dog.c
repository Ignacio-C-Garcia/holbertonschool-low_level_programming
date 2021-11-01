#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - short description
 * @name: string
 * @age: positive number
 * @owner: string
 * Return: pointer to new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *aux;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);


	aux = malloc(sizeof(dog_t));
	if (!aux)
		return (NULL);

	aux->name = strdup(name);

	if (!aux->name)
	{
		free(aux);
		return (NULL);
	}
	aux->age = age;
	aux->owner = strdup(owner);
	if (!aux->owner)
	{
		free(aux);
		return (NULL);
	}

	return (aux);
}
