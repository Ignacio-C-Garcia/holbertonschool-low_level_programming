#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number
 * @size: number
 * Return: pointer to memory colation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aux;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	aux = malloc(nmemb * size);

	if (!aux)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		aux[i] = 0;
	return ((void *)aux);

}
