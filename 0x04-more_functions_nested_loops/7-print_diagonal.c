#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 *@n: integer
 */
void print_diagonal(int n)
{
	int x;
	int y;
	int linea = n;

	if (n > 0)
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < (n - linea); x++)
			{
				_putchar('_');
			}

		linea = linea - 1;
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
