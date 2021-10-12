#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{	int i;
	char s[10] = "My School";

	rev_string(s);

	for (i = 0; i < 10; i++)
	{
	_putchar(s[i]);
	}
	return (0);
}
