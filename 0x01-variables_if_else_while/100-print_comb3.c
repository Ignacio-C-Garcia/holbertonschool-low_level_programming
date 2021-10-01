#include <stdio.h>
/**
*main - kfjekfwkemf
*
*Return: - 0
*/
int main(void)
{	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
	for (b = 49; b <= 57; b++)
		{
		putchar(a);
		putchar(b);
		if (b == 57 && a == 56)
		putchar('\n');
		else
		{
		putchar(',');
	putchar(' ');
		}
		}
	}
	return (0);
}
