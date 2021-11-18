#include "main.h"

/**
 * _pow - return x^n.
 * @x: base number
 * @n: exponent
 * Return: a number
 */
int _pow(int x, int n)
{
	int i, result = 1;

	for (i = 0; i < n; i++)
		result *= x;

	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to str
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len;
  int expo = 0;

	if (!b)
		return (result);

	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len--; len >= 0; len--;)
	{
		if (b[len] == '1')
			result += _pow(2, expo);
		expo++;
	}

	return (result);
}
