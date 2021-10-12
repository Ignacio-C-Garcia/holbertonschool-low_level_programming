#include "main.h"
/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: a string;
 */
void rev_string(char *s)
{
	int aux;
	int start = 0;
	int end = (_strlen(s)) - 1;

	for (; start != end; )
	{
		aux = s[start];
		s[start] = s[end];
		s[end] = aux;
		start++;
		end--;
	}
}
