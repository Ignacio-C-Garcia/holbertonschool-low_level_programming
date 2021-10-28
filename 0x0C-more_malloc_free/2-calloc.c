#include <stdlib.h>
/**
 * _calloc - calloc function
 * @nmemb: number
 * @size: number
 * Return: pointer to memory colation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *aux = malloc(nmemb * size);

	if (!aux)
		return (NULL);
	return (aux);

}
