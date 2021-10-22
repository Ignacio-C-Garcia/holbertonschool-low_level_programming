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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i <= 4; i++)
	{

		for (; aux + array[i] <= atoi(argv[1]);)
		{
			aux += array[i];
			counter++;
		}
		if (aux == atoi(argv[1]))
			break;
	}

	if (argv[1][0] == '\0')
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", counter);
	return (0);
}
