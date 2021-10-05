#include <ctype.h>
#include "main.h"
/**
 * _islower - return 1 if c is uppercase, returns 0 otherwise
 *
 * Return: 2 if fails
 */
int _islower(int c)
{
int value = islower(c);

	if (value > 0)
	{
		return (1);
	}
	else if (value == 0)
	{
	return (0);
	}
	return (2);
}
