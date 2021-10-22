#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * @argc: numbers of arguments (always 1)
 * @argv: string value of argument
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int array[] = {25, 10, 5, 2, 1};
	int aux = 0;
	int counter = 0;
	int i;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

		if (argv[1][0] < 48 || argv[1][0] > 57)
		{
			printf("0\n");
			return (0);
		}

	for (i = 0; i <= 4; i++)
	{

		for (; aux + array[i] <= atoi(argv[1]);)
		{
			aux += array[i];
			counter++;
		}
	}
	printf("el valor de coin es: %d\n", atoi(argv[1]));
	printf("el valor de counter es: %d\n", counter);
	printf("el valor a aux es: %d\n", aux);
	return (0);
}
