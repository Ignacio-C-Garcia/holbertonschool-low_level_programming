#include <stdarg.h>
/**
 * sum_them_all - a variadic function that adds all of its parameters
 * @n: number of parameters that recieve this function
 * Return: the result of the addition of all numbers given as parameters
 */
int sum_them_all(const unsigned int n, ...)
{

	int result = 0;
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}
	va_end(ap);
	return (result);
}
