#include <stdlib.h>
#include "main.h"
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
