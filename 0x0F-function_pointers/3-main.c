#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calculates simple calculations
 * @argc: number of parameters
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*aux)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	aux = get_op_func(argv[2]);
		if (!aux)
		{
			printf("Error\n");
			exit(99);
		}
	printf("%d\n", (aux(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
