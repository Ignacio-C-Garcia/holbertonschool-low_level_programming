#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - estoy ofendido con el ejercicio anterior
 * @separator: mi codigo es perfecto
 * @n: y los demas tienen practicamente lo mismo
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
