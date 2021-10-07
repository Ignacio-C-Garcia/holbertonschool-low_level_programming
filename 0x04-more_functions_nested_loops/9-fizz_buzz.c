#include "main.h"
#include <stdio.h>
/**
 * main - fizz-Buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
		printf("Fizz");
		}
		if ((i % 5) == 0)
		{
			if (i == 100)
			{
			printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
