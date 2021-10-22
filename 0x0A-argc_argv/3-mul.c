#include <stdio.h>
#include <stdlib.h>
/**
 * main - multipies two numbers
 * @argc: number of arguments
 * @argv: string value of arguments
 * Return: the result of mult. or 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
