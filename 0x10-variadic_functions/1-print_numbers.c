#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers given as a parameter separated by a str
 * @separator: the str that separates numbers
 * @n: number of parameters to display in console
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (!separator)
		separator = "";

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(ap, int), separator);
	}
	if (n != 0)
	printf("%d\n", va_arg(ap, int));

	va_end(ap);
}
