#include "main.h"
/**
* reverse_array - reverse an array of int
* @a: an array of int;
* @n: an int
*/

void reverse_array(int *a, int n)
{
	int aux;
	int start = 0;
	int end = n;
	int i;

	for (start = 0; start < (end / 2);)
	{
		end--;
		aux = a[start];
		a[start] = a[end];
		a[end] = aux;
		start++;
	}


}
