#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: 0 always
 */
void times_table(void)
{	int fuera;
	int dentro;

	for (fuera = 0; fuera <= 9; fuera++)
	{
		for (dentro = 0; dentro <= 9; dentro++)
		{
			if (fuera * dentro >= 10)
			{
				_putchar(fuera * dentro / 10 + '0');
				_putchar(fuera * dentro % 10 + '0');
				if (dentro == 9)
				{
				_putchar('\n');
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				if (dentro == 0)
				{
				_putchar(fuera * dentro + '0');
				}
				else
				{
					_putchar(' ');
				_putchar(fuera * dentro + '0');
				}
				if (dentro == 9)
				{
				_putchar('\n');
				}
				else
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
	}
}
