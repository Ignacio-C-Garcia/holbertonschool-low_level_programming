#include "main.h"
/**
 * puts2 - a function that prints a string, followed by a new line, to stdout.
 * @str: a string to display to stdout
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}

	_putchar('\n');
}
