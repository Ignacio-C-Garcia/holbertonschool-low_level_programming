#include "main.h"
/**
* _abs - return absolute value of a value
* @n: a number
* Return: 0
*/
int _abs(int n)
{
if (n > 0)
{
	_putchar(n + 48);
}
else
{
	n = n * -1;
	_putchar(n + 48);
}
	return (0);
}
