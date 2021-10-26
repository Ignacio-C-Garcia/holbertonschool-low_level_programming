#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a copy of the str
 * @str: sting
 * Return: a pointer to a copy of str
 */
char *_strdup(char *str)
{
	int str_len = _strlen(str);
	char *copy;
	int i;

	if (str == NULL)
		return (0);

	copy = malloc(str_len);

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
