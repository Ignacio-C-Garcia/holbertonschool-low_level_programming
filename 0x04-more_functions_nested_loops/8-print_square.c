#include "main.h"
/**
 * print_square - print a square followed by a new line
 * @size: positive integer
 */
void print_square(int size)
{	int y;
	int x;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
