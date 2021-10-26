#include <stdlib.h>
/**
 * alloc_grid - :)
 * @width: 0
 * @height: 0
 * Return: f
 */
int **alloc_grid(int width, int height)
{	int aux = 0;
	int x, y;
	int **bi_array = malloc(height * 8);

	if (!bi_array)
		return (0);
	if (width == 0 && height == 0)
		return (0);
	for (aux = 0; aux < height; aux++)
	{
		bi_array[aux] = malloc(sizeof(int) * width);
		if (!bi_array[aux])
		{
			int i;

			for (i = 0; i < aux; i++)
				free(bi_array[i]);
			return (0);
		}
	}


	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			bi_array[y][x] = 0;
	}
	return (bi_array);
}
