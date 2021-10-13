#include "main.h"
/**
 * puts_half - a function that returns the length of a string.
 * @str: a string
 */
void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0; *(str + i) != 0; i++)
	{
		count++;
	}
	if (count % 2 == 0)
	{
	for (i = (count) / 2; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
	for (i = (count) / 2; str[i] != 0; i++)
	{
	_putchar(str[i]);
	}
	}
_putchar('\n');
}
