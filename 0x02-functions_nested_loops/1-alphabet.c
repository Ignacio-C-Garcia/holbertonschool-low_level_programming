#include "main.h"
void print_alphabet(void);
/**
 * print_alphabet - print alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
_putchar('\n');
}
