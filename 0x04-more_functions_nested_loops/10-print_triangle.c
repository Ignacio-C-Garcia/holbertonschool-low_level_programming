#include "main.h"
/**
* print_triangle - draws a triangle
*@n: integer
*/
void print_triangle(int size)
{
	int x;
	int y;
	int z;
	int linea = 0;
	int relleno = n;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < (n - linea); x++)
			{
				_putchar(' ');
			}

		linea = linea + 1;
		for (z = 0; z <= (n - relleno); z++)
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
