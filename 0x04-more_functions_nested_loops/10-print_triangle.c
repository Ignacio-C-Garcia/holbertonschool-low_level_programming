#include "main.h"
/**
* print_triangle - draws a triangle
*@size: integer
*/
void print_triangle(int size)
{
	int x;
	int y;
	int z;
	int linea = 0;
	int relleno = size;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < (size - linea); x++)
			{
				_putchar(' ');
			}

		linea = linea + 1;
		for (z = 0; z <= (size - relleno); z++)
		{
		_putchar('#');
		}
		relleno = relleno - 1;
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
