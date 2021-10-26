#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: lenght of the array;
 * @c: a character
 *Return: pointer to the new array
 */
char *create_array(unsigned int size, char c)
{

	char *new_array = malloc(size);
	unsigned int i;

	if (size <= 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		new_array[i] = c;
	}
	return (0);
}
