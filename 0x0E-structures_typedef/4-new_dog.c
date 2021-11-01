#include <stdlib.h>
#include "dog.h"
#include <stdlib.h>
/**
* _strlen - return the lenght of a string
* @str: sting
* Return: return the length of a string
*/
	int _strlen(char *str)
	{
		int i;
		int counter = 0;

		for (i = 0; str[i] != '\0'; i++)
		{
			counter++;
		}
		return (counter);
}
/**
* _strdup - returns a pointer to a copy of the str
* @str: sting
* Return: a pointer to a copy of str
*/
char *_strdup(char *str)
{
		int str_len;
		char *copy;
		int i;

	if (str == 0)
		return (0);

	str_len = _strlen(str);
	copy = malloc(str_len + 1);

	if (!copy)
	{
		return (0);
	}

	for (i = 0; i < str_len; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
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
