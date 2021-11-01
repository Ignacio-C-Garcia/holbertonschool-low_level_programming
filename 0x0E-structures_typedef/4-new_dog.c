#include <stdlib.h>
#include "dog.h"
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


	aux = malloc((sizeof(char *) * 2) + sizeof(float));

	aux->name = name;
	aux->age = age;
	aux->owner = owner;

	return (aux);
}
