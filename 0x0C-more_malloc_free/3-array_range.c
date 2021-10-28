#include <stdlib.h>
/**
 * array_range - allocate memory
 *@max: number
 *@min: number
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *aux;
	int i;

	if (min > max)
		return (NULL);
	if (min == max)
	{
		aux = malloc(1);
		if (!aux)
			return (NULL);
		aux[0] = min;
	}
	aux = malloc(((max - min) - 1) * sizeof(int));
	if (!aux)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		aux[i] = min;
		i++;
	}
	return (aux);
}
