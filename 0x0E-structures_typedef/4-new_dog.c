#include <stdlib.h>
#include "dog.h"
#include "main.h"
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

	name1 = _strdup(name);
	if (name1 == 0)
	{
		free(name);
		free(aux);
		return (NULL);
	}
	owner1 = _strdup(owner);
	if (owner1)
	{
		free(owner1);
		free(aux);
		return (NULL);
	}
	aux->name = name1;
	aux->age = age;
	aux->owner = owner1;

	return (aux);
}
