#include "main.h"
/**
 * print_binary - a function
 * @n: unsigned long int to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int aux = n;
	int i = 0;

	while (aux > 0)
	{
		i++;
		aux = aux >> 1;
	}

	if (n == 0)
		_putchar('0');

	for (i--; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
