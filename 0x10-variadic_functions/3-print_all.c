#include <stdio.h>
#include <stdarg.h>

void func_char(char c)
{
	printf("%c", c);
}



void print_all(const char * const format, ...)
{
	int aux = 0;

	struct lista
	{
	char letra;
	void (*pointer)();
	};

	struct lista types[] = {
	{'c', func_char},
	{'i', func_int},
	{'f', func_f},
	{'s', func_str}

	};



	while (format[aux] != 0)
	{
		i = 0;

		while (i < 4)
		{
			if (types[i].letra == format[aux])
			{
				typres[i].func();
			}
		}
		aux++;

	}
}
