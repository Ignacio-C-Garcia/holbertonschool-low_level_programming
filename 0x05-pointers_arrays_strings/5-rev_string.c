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
* rev_string - prints a string, in reverse, followed by a new line.
* @s: a string;
*/

void rev_string(char *s)
{
	int aux;
	int start = 0;
	int end = (_strlen(s)) - 1;

	for (; start != end && start + 1 != end ; )
	{
		aux = s[start];
		s[start] = s[end];
		s[end] = aux;
		start++;
		end--;
	}


}
