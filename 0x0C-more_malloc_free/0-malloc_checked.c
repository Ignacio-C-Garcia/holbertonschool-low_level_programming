#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *aux = malloc(b);

	if (aux == NULL)
		exit(98);
	return (aux);
}
