#include <stdlib.h>
/**
 * alloc_grid - :)
 * @width: 0
 * @height: 0
 * Return: f
 */
int **alloc_grid(int width, int height)
{
	int **bi_array = malloc(width * 8);

	int aux = 0;
	int x;
	int y;

	for (aux = 0; aux < height; aux++)
		bi_array[aux] = malloc(sizeof(int) * height);
		if (!bi_array[aux])
			return (0);


	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			bi_array[y][x] = 0;

	return (bi_array);
}
