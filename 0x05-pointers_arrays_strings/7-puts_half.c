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

for (i = (count) / 2; str[i] != 0; i++)
{
	_putchar(str[i]);
}
}
