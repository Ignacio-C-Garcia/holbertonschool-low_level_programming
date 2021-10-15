#include "main.h"
/**
* _strlen - a function that returns the length of a string.
* @s: a string
* Return: length of s
*/
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; *(s + i) != 0; i++)
	{
		count++;
	}
	return (count);
}
/**
* reverse_array - reverse an array of int
* @a: an array of int;
* @n: an int
*/

void reverse_array(int *a, int n)
{
	int aux;
	int start = 0;
	int end = n - 1;

	for (; start != end && start - 1 != end ; )
	{
		aux = a[start];
		a[start] = a[end];
		a[end] = aux;
		start++;
		end--;
	}


}
