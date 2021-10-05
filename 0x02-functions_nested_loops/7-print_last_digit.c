#include "main.h"
/**
 * print_last_digit - print las digit
 * Return: last digit of n
 * @n: a number
 */
int print_last_digit(int n)
{
if (n < 0)
{
_putchar(n * -1);
return (n * -1);
}
else
{
return (n % 10);
}
}
