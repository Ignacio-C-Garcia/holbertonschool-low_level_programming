#include "main.h"
/**
 * print_last_digit - print las digit
 * Return: last digit of n
 * @n: a number
 */
int print_last_digit(int n)
{
	int absolute_value = (n * -1) % 10;
	int mod = n % 10;
if (n < 0)
{
_putchar(absolute_value);
return (absolute_value);
}
else
{
	_putchar(mod);
return (mod);
}
}
