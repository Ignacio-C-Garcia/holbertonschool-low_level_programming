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
	char *name1;
	char *owner1;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	aux = malloc(sizeof(dog_t));
	if (!aux)
		return (NULL);
	name1 = strdup(name);
	owner1 = strdup(owner);

	aux->name = name1;
	aux->age = age;
	aux->owner = owner1;

	if (aux->name == NULL || aux->owner == NULL)
	{
		free(aux->name);
		free(aux->owner);
		free(name1);
		free(owner1);
	}

	return (aux);
}
