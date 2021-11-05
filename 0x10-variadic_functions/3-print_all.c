#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function thath prints all types of var
 * @format: a string of formats
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int aux = 0;
	char *str;
	int guarangada;

	va_start(ap, format);
		while (format && format[aux] != 0)
		{
			guarangada = 0;

			switch (format[aux])
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				guarangada = 1;
			}
			if (format[aux + 1] && guarangada == 0)
			printf(", ");
			aux++;

		}
		printf("\n");

	va_end(ap);
}
