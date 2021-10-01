#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (last_digit > 5)
	{
	printf("%d mayor a 5\n", n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("%d menor a 6\n", n);
	}
	else if (last_digit == 0)
	{
	printf("%d es 0\n", n);
	};
	return (0);
}
