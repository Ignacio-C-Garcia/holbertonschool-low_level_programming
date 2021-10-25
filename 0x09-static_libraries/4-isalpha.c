#include "main.h"
#include <ctype.h>
/**
* _isalpha - return 0 or 1 depending if its a alpha
* @c: chararcter
*Return: 0
*/
int _isalpha(int c)
{
if (isalpha(c) != 0)
{
	return (1);
}
else
{
return (0);
}
}
