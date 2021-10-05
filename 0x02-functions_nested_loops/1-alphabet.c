#include "main.h"
/**
 * main - print alphabet
 *
 * Return: always 0
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}

}
