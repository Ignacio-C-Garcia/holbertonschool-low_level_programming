#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 *@grid: a pointer to a pointer of int
 *@height: number of columns
 */
void free_grid(int **grid, int height)
{
	int aux;

	if (grid != NULL)
	{
	for (aux = 0; aux <= height; aux++)
	{
		free(grid[aux]);
	}
	free(grid);
	}
}
