#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9. dont print 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + 48);
	}
	_putchar('\n');
}
