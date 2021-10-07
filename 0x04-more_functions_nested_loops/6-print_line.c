#include "main.h"
/**
 * print_line - draws a stright line int the terminal
 * @n: a integer
 */
void print_line(int n)
{	int lenght;

	if (n > 0)
	{
		for (lenght = 0; lenght < n; lenght++)
			_putchar('_');
	}
		_putchar('\n');
}
