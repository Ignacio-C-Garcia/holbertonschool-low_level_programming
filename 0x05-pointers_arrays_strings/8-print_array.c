#include <stdio.h>
/**
 * print_array - a function
 * @a: a string to display to stdout
 * @n: an integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != 0 && i <= (n - 1); i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
