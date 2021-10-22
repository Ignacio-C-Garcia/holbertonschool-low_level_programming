#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: string value
 * Return:0 || 1 if error
 */
int main(int argc, char *argv[])
{
	int palabra;
	int letra;
	int sum = 0;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}

	for (palabra = 1; palabra < argc; palabra++)
	{
		for (letra = 0; argv[palabra][letra] != '\0'; letra++)
		{
			if (argv[palabra][letra] < 48 || argv[palabra][letra] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (palabra = 1; palabra < argc; palabra++)
	{
		sum += atoi(argv[palabra]);
	}

	printf("%d\n", sum);
	return (0);

}
